/*
 * capnsense.c
 *
 *  Created on: 2023年6月14日
 *      Author: YanJenson
 */

/* Header file from system */
#include <inttypes.h>

#include "capsense_task.h"
/* Header file includes */
#include "cy_retarget_io.h"
#include "cyhal.h"

static uint32_t initialize_capsense(void);
static void process_touch(void);
static void capsense_isr(void);
static void capsense_callback();
static void initialize_capsense_tuner(void);

/*******************************************************************************
* Global Variables
*******************************************************************************/
cy_stc_scb_ezi2c_context_t ezi2c_context;
cyhal_ezi2c_t sEzI2C;
cyhal_ezi2c_slave_cfg_t sEzI2C_sub_cfg;
cyhal_ezi2c_cfg_t sEzI2C_cfg;
volatile bool capsense_scan_complete = false;

/*******************************************************************************
 * Function Name: capsense_task
 ********************************************************************************
 * Summary:
 *   Initializes capsense
 *
 * Parameters:
 *   arg: thread
 *
 * Return:
 *   none
 *******************************************************************************/
void capsense_task(cy_thread_arg_t arg)
{
	initialize_capsense_tuner();

	if(!initialize_capsense())
		printf("capsense init successfully\n\r");
	else
		printf("capsense init failed\n\r");

	Cy_CapSense_ScanAllWidgets(&cy_capsense_context);

	for (;;)
	{
		if (capsense_scan_complete)
		{
			/* Process all widgets */
			Cy_CapSense_ProcessAllWidgets(&cy_capsense_context);
			/* Process touch input */
			process_touch();
			/* Establishes synchronized operation between the CapSense
			 * middleware and the CapSense Tuner tool.
			 */
			Cy_CapSense_RunTuner(&cy_capsense_context);
			/* Initiate next scan */
			Cy_CapSense_ScanAllWidgets(&cy_capsense_context);
			capsense_scan_complete = false;
		}
		vTaskDelay(10);
	}

}

static uint32_t initialize_capsense(void)
{
    uint32_t status = CYRET_SUCCESS;

    /* CapSense interrupt configuration parameters */
    static const cy_stc_sysint_t capSense_intr_config =
    {
        .intrSrc = csd_interrupt_IRQn,
        .intrPriority = CAPSENSE_INTR_PRIORITY,
    };

    /* Capture the CSD HW block and initialize it to the default state. */
    status = Cy_CapSense_Init(&cy_capsense_context);
    if (CYRET_SUCCESS != status)
    {
        return status;
    }

    /* Initialize CapSense interrupt */
    cyhal_system_set_isr(csd_interrupt_IRQn, csd_interrupt_IRQn, CAPSENSE_INTR_PRIORITY, &capsense_isr);
    NVIC_ClearPendingIRQ(capSense_intr_config.intrSrc);
    NVIC_EnableIRQ(capSense_intr_config.intrSrc);

    /* Initialize the CapSense firmware modules. */
    status = Cy_CapSense_Enable(&cy_capsense_context);
    if (CYRET_SUCCESS != status)
    {
        return status;
    }

    /* Assign a callback function to indicate end of CapSense scan. */
    status = Cy_CapSense_RegisterCallback(CY_CAPSENSE_END_OF_SCAN_E,
            capsense_callback, &cy_capsense_context);
    if (CYRET_SUCCESS != status)
    {
        return status;
    }

    return status;
}

static void process_touch(void)
{
    uint32_t proximity_status;

    /* Get proximity 0 status */
    proximity_status = Cy_CapSense_IsProximitySensorActive(
    	CY_CAPSENSE_PROXIMITY0_WDGT_ID,
		CY_CAPSENSE_PROXIMITY0_SNS0_ID,
        &cy_capsense_context);


    if(proximity_status)
    {
    	//Cy_GPIO_Clr(LED2_PORT,LED2_NUM);
    	printf("Proximity 0-30cm \r\n");
    }
    else
    {
    	//Cy_GPIO_Set(LED2_PORT,LED2_NUM);
    	//printf("Release\r\n");
    }
}

/*******************************************************************************
* Function Name: capsense_isr
********************************************************************************
* Summary:
*  Wrapper function for handling interrupts from CSD block.
*
*******************************************************************************/
static void capsense_isr(void)
{
    Cy_CapSense_InterruptHandler(CYBSP_CSD_HW, &cy_capsense_context);
}

void capsense_callback(cy_stc_active_scan_sns_t * ptrActiveScan)
{
    capsense_scan_complete = true;
}

/*******************************************************************************
* Function Name: initialize_capsense_tuner
********************************************************************************
* Summary:
*  Initializes interface between Tuner GUI and PSoC 6 MCU.
*
*******************************************************************************/
static void initialize_capsense_tuner(void)
{
    cy_rslt_t result;

    /* Configure Capsense Tuner as EzI2C Slave */
    sEzI2C_sub_cfg.buf = (uint8 *)&cy_capsense_tuner;
    sEzI2C_sub_cfg.buf_rw_boundary = sizeof(cy_capsense_tuner);
    sEzI2C_sub_cfg.buf_size = sizeof(cy_capsense_tuner);
    sEzI2C_sub_cfg.slave_address = 8U;

    sEzI2C_cfg.data_rate = CYHAL_EZI2C_DATA_RATE_400KHZ;
    sEzI2C_cfg.enable_wake_from_sleep = false;
    sEzI2C_cfg.slave1_cfg = sEzI2C_sub_cfg;
    sEzI2C_cfg.sub_address_size = CYHAL_EZI2C_SUB_ADDR16_BITS;
    sEzI2C_cfg.two_addresses = false;

    result = cyhal_ezi2c_init(&sEzI2C, CYBSP_I2C_SDA, CYBSP_I2C_SCL, NULL, &sEzI2C_cfg);
    if (result != CY_RSLT_SUCCESS)
    {
        //handle_error();
    	/* Disable all interrupts. */
    	printf("capsense tunner error\n\r");
    	__disable_irq();

    	CY_ASSERT(0);
    }

}


