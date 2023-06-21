/*******************************************************************************
* File Name: cycfg_pins.h
*
* Description:
* Pin configuration
* This file was automatically generated and should not be modified.
* Configurator Backend 3.0.0
* mtb-pdl-cat1 2.4.1.17937
*
********************************************************************************
* Copyright 2023 Cypress Semiconductor Corporation (an Infineon company) or
* an affiliate of Cypress Semiconductor Corporation.
* SPDX-License-Identifier: Apache-2.0
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
********************************************************************************/

#if !defined(CYCFG_PINS_H)
#define CYCFG_PINS_H

#include "cycfg_notices.h"
#include "cy_gpio.h"
#if defined (CY_USING_HAL)
    #include "cyhal_hwmgr.h"
#endif //defined (CY_USING_HAL)
#include "cycfg_routing.h"

#if defined(__cplusplus)
extern "C" {
#endif

#define CYBSP_WCO_IN_ENABLED 1U
#define CYBSP_WCO_IN_PORT GPIO_PRT0
#define CYBSP_WCO_IN_PORT_NUM 0U
#define CYBSP_WCO_IN_PIN 0U
#define CYBSP_WCO_IN_NUM 0U
#define CYBSP_WCO_IN_DRIVEMODE CY_GPIO_DM_ANALOG
#define CYBSP_WCO_IN_INIT_DRIVESTATE 1
#ifndef ioss_0_port_0_pin_0_HSIOM
    #define ioss_0_port_0_pin_0_HSIOM HSIOM_SEL_GPIO
#endif
#define CYBSP_WCO_IN_HSIOM ioss_0_port_0_pin_0_HSIOM
#define CYBSP_WCO_IN_IRQ ioss_interrupts_gpio_0_IRQn
#if defined (CY_USING_HAL)
    #define CYBSP_WCO_IN_HAL_PORT_PIN P0_0
    #define CYBSP_WCO_IN P0_0
    #define CYBSP_WCO_IN_HAL_IRQ CYHAL_GPIO_IRQ_NONE
    #define CYBSP_WCO_IN_HAL_DIR CYHAL_GPIO_DIR_INPUT 
    #define CYBSP_WCO_IN_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_ANALOG
#endif //defined (CY_USING_HAL)
#define CYBSP_WCO_OUT_ENABLED 1U
#define CYBSP_WCO_OUT_PORT GPIO_PRT0
#define CYBSP_WCO_OUT_PORT_NUM 0U
#define CYBSP_WCO_OUT_PIN 1U
#define CYBSP_WCO_OUT_NUM 1U
#define CYBSP_WCO_OUT_DRIVEMODE CY_GPIO_DM_ANALOG
#define CYBSP_WCO_OUT_INIT_DRIVESTATE 1
#ifndef ioss_0_port_0_pin_1_HSIOM
    #define ioss_0_port_0_pin_1_HSIOM HSIOM_SEL_GPIO
#endif
#define CYBSP_WCO_OUT_HSIOM ioss_0_port_0_pin_1_HSIOM
#define CYBSP_WCO_OUT_IRQ ioss_interrupts_gpio_0_IRQn
#if defined (CY_USING_HAL)
    #define CYBSP_WCO_OUT_HAL_PORT_PIN P0_1
    #define CYBSP_WCO_OUT P0_1
    #define CYBSP_WCO_OUT_HAL_IRQ CYHAL_GPIO_IRQ_NONE
    #define CYBSP_WCO_OUT_HAL_DIR CYHAL_GPIO_DIR_INPUT 
    #define CYBSP_WCO_OUT_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_ANALOG
    #define CYBSP_USER_BTN1 (P0_4)
    #define CYBSP_USER_BTN CYBSP_USER_BTN1
    #define CYBSP_GPIOA0 (P10_0)
    #define CYBSP_GPIOA1 (P10_1)
    #define CYBSP_GPIOA2 (P10_2)
    #define CYBSP_GPIOA3 (P10_3)
#endif //defined (CY_USING_HAL)
#define CYBSP_GPIOA4_ENABLED 1U
#define CYBSP_GPIOA4_PORT GPIO_PRT10
#define CYBSP_GPIOA4_PORT_NUM 10U
#define CYBSP_GPIOA4_PIN 4U
#define CYBSP_GPIOA4_NUM 4U
#define CYBSP_GPIOA4_DRIVEMODE CY_GPIO_DM_ANALOG
#define CYBSP_GPIOA4_INIT_DRIVESTATE 1
#ifndef ioss_0_port_10_pin_4_HSIOM
    #define ioss_0_port_10_pin_4_HSIOM HSIOM_SEL_GPIO
#endif
#define CYBSP_GPIOA4_HSIOM ioss_0_port_10_pin_4_HSIOM
#define CYBSP_GPIOA4_IRQ ioss_interrupts_gpio_10_IRQn
#if defined (CY_USING_HAL)
    #define CYBSP_GPIOA4_HAL_PORT_PIN P10_4
    #define CYBSP_GPIOA4 P10_4
    #define CYBSP_GPIOA4_HAL_IRQ CYHAL_GPIO_IRQ_NONE
    #define CYBSP_GPIOA4_HAL_DIR CYHAL_GPIO_DIR_INPUT 
    #define CYBSP_GPIOA4_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_ANALOG
#endif //defined (CY_USING_HAL)
#define CYBSP_GPIOA5_ENABLED 1U
#define CYBSP_GPIOA5_PORT GPIO_PRT10
#define CYBSP_GPIOA5_PORT_NUM 10U
#define CYBSP_GPIOA5_PIN 5U
#define CYBSP_GPIOA5_NUM 5U
#define CYBSP_GPIOA5_DRIVEMODE CY_GPIO_DM_ANALOG
#define CYBSP_GPIOA5_INIT_DRIVESTATE 1
#ifndef ioss_0_port_10_pin_5_HSIOM
    #define ioss_0_port_10_pin_5_HSIOM HSIOM_SEL_GPIO
#endif
#define CYBSP_GPIOA5_HSIOM ioss_0_port_10_pin_5_HSIOM
#define CYBSP_GPIOA5_IRQ ioss_interrupts_gpio_10_IRQn
#if defined (CY_USING_HAL)
    #define CYBSP_GPIOA5_HAL_PORT_PIN P10_5
    #define CYBSP_GPIOA5 P10_5
    #define CYBSP_GPIOA5_HAL_IRQ CYHAL_GPIO_IRQ_NONE
    #define CYBSP_GPIOA5_HAL_DIR CYHAL_GPIO_DIR_INPUT 
    #define CYBSP_GPIOA5_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_ANALOG
    #define CYBSP_USER_LED1 (P11_1)
    #define CYBSP_USER_LED CYBSP_USER_LED1
    #define CYBSP_QSPI_SS (P11_2)
    #define CYBSP_QSPI_D3 (P11_3)
    #define CYBSP_QSPI_D2 (P11_4)
    #define CYBSP_QSPI_D1 (P11_5)
    #define CYBSP_QSPI_D0 (P11_6)
    #define CYBSP_QSPI_SCK (P11_7)
    #define CYBSP_ECO_IN (P12_6)
    #define CYBSP_ECO_OUT (P12_7)
    #define CYBSP_WIFI_SDIO_D0 (P2_0)
    #define CYBSP_WIFI_SDIO_D1 (P2_1)
    #define CYBSP_WIFI_SDIO_D2 (P2_2)
    #define CYBSP_WIFI_SDIO_D3 (P2_3)
    #define CYBSP_WIFI_SDIO_CMD (P2_4)
    #define CYBSP_WIFI_SDIO_CLK (P2_5)
    #define CYBSP_WIFI_WL_REG_ON (P2_6)
    #define CYBSP_WIFI_DEVICE_WAKE (P2_7)
    #define CYBSP_I2C_SCL (P3_0)
    #define CYBSP_I2C_SDA (P3_1)
    #define CYBSP_SPI_MOSI (P5_0)
    #define CYBSP_SPI_MISO (P5_1)
    #define CYBSP_DEBUG_UART_RTS (P5_6)
    #define CYBSP_DEBUG_UART_CTS (P5_7)
    #define CYBSP_UART_RX (P6_4)
    #define CYBSP_UART_TX (P6_5)
#endif //defined (CY_USING_HAL)
#define CYBSP_SWDIO_ENABLED 1U
#define CYBSP_SWDIO_PORT GPIO_PRT6
#define CYBSP_SWDIO_PORT_NUM 6U
#define CYBSP_SWDIO_PIN 6U
#define CYBSP_SWDIO_NUM 6U
#define CYBSP_SWDIO_DRIVEMODE CY_GPIO_DM_PULLUP
#define CYBSP_SWDIO_INIT_DRIVESTATE 1
#ifndef ioss_0_port_6_pin_6_HSIOM
    #define ioss_0_port_6_pin_6_HSIOM HSIOM_SEL_GPIO
#endif
#define CYBSP_SWDIO_HSIOM ioss_0_port_6_pin_6_HSIOM
#define CYBSP_SWDIO_IRQ ioss_interrupts_gpio_6_IRQn
#if defined (CY_USING_HAL)
    #define CYBSP_SWDIO_HAL_PORT_PIN P6_6
    #define CYBSP_SWDIO P6_6
    #define CYBSP_SWDIO_HAL_IRQ CYHAL_GPIO_IRQ_NONE
    #define CYBSP_SWDIO_HAL_DIR CYHAL_GPIO_DIR_BIDIRECTIONAL 
    #define CYBSP_SWDIO_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_PULLUP
#endif //defined (CY_USING_HAL)
#define CYBSP_SWDCK_ENABLED 1U
#define CYBSP_SWDCK_PORT GPIO_PRT6
#define CYBSP_SWDCK_PORT_NUM 6U
#define CYBSP_SWDCK_PIN 7U
#define CYBSP_SWDCK_NUM 7U
#define CYBSP_SWDCK_DRIVEMODE CY_GPIO_DM_PULLDOWN
#define CYBSP_SWDCK_INIT_DRIVESTATE 1
#ifndef ioss_0_port_6_pin_7_HSIOM
    #define ioss_0_port_6_pin_7_HSIOM HSIOM_SEL_GPIO
#endif
#define CYBSP_SWDCK_HSIOM ioss_0_port_6_pin_7_HSIOM
#define CYBSP_SWDCK_IRQ ioss_interrupts_gpio_6_IRQn
#if defined (CY_USING_HAL)
    #define CYBSP_SWDCK_HAL_PORT_PIN P6_7
    #define CYBSP_SWDCK P6_7
    #define CYBSP_SWDCK_HAL_IRQ CYHAL_GPIO_IRQ_NONE
    #define CYBSP_SWDCK_HAL_DIR CYHAL_GPIO_DIR_BIDIRECTIONAL 
    #define CYBSP_SWDCK_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_PULLDOWN
#endif //defined (CY_USING_HAL)
#define CYBSP_CMOD_ENABLED 1U
#define CYBSP_CMOD_PORT GPIO_PRT7
#define CYBSP_CMOD_PORT_NUM 7U
#define CYBSP_CMOD_PIN 7U
#define CYBSP_CMOD_NUM 7U
#define CYBSP_CMOD_DRIVEMODE CY_GPIO_DM_ANALOG
#define CYBSP_CMOD_INIT_DRIVESTATE 1
#ifndef ioss_0_port_7_pin_7_HSIOM
    #define ioss_0_port_7_pin_7_HSIOM HSIOM_SEL_GPIO
#endif
#define CYBSP_CMOD_HSIOM ioss_0_port_7_pin_7_HSIOM
#define CYBSP_CMOD_IRQ ioss_interrupts_gpio_7_IRQn
#if defined (CY_USING_HAL)
    #define CYBSP_CMOD_HAL_PORT_PIN P7_7
    #define CYBSP_CMOD P7_7
    #define CYBSP_CMOD_HAL_IRQ CYHAL_GPIO_IRQ_NONE
    #define CYBSP_CMOD_HAL_DIR CYHAL_GPIO_DIR_INPUT 
    #define CYBSP_CMOD_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_ANALOG
    #define CYBSP_I2C_SCL_OPTIGA (P8_0)
    #define CYBSP_TRUSTM_I2C_SCL CYBSP_I2C_SCL_OPTIGA
    #define CYBSP_I2C_SDA_OPTIGA (P8_1)
    #define CYBSP_TRUSTM_I2C_SDA CYBSP_I2C_SDA_OPTIGA
    #define CYBSP_GPIO13 (P9_0)
    #define CYBSP_GPIO12 (P9_1)
#endif //defined (CY_USING_HAL)
#define CYBSP_GPIO11_ENABLED 1U
#define CYBSP_GPIO11_PORT GPIO_PRT9
#define CYBSP_GPIO11_PORT_NUM 9U
#define CYBSP_GPIO11_PIN 2U
#define CYBSP_GPIO11_NUM 2U
#define CYBSP_GPIO11_DRIVEMODE CY_GPIO_DM_ANALOG
#define CYBSP_GPIO11_INIT_DRIVESTATE 1
#ifndef ioss_0_port_9_pin_2_HSIOM
    #define ioss_0_port_9_pin_2_HSIOM HSIOM_SEL_GPIO
#endif
#define CYBSP_GPIO11_HSIOM ioss_0_port_9_pin_2_HSIOM
#define CYBSP_GPIO11_IRQ ioss_interrupts_gpio_9_IRQn
#if defined (CY_USING_HAL)
    #define CYBSP_GPIO11_HAL_PORT_PIN P9_2
    #define CYBSP_GPIO11 P9_2
    #define CYBSP_GPIO11_HAL_IRQ CYHAL_GPIO_IRQ_NONE
    #define CYBSP_GPIO11_HAL_DIR CYHAL_GPIO_DIR_INPUT 
    #define CYBSP_GPIO11_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_ANALOG
#endif //defined (CY_USING_HAL)
#define CYBSP_GPIO10_ENABLED 1U
#define CYBSP_GPIO10_PORT GPIO_PRT9
#define CYBSP_GPIO10_PORT_NUM 9U
#define CYBSP_GPIO10_PIN 3U
#define CYBSP_GPIO10_NUM 3U
#define CYBSP_GPIO10_DRIVEMODE CY_GPIO_DM_ANALOG
#define CYBSP_GPIO10_INIT_DRIVESTATE 1
#ifndef ioss_0_port_9_pin_3_HSIOM
    #define ioss_0_port_9_pin_3_HSIOM HSIOM_SEL_GPIO
#endif
#define CYBSP_GPIO10_HSIOM ioss_0_port_9_pin_3_HSIOM
#define CYBSP_GPIO10_IRQ ioss_interrupts_gpio_9_IRQn
#if defined (CY_USING_HAL)
    #define CYBSP_GPIO10_HAL_PORT_PIN P9_3
    #define CYBSP_GPIO10 P9_3
    #define CYBSP_GPIO10_HAL_IRQ CYHAL_GPIO_IRQ_NONE
    #define CYBSP_GPIO10_HAL_DIR CYHAL_GPIO_DIR_INPUT 
    #define CYBSP_GPIO10_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_ANALOG
#endif //defined (CY_USING_HAL)

extern const cy_stc_gpio_pin_config_t CYBSP_WCO_IN_config;
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t CYBSP_WCO_IN_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t CYBSP_WCO_OUT_config;
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t CYBSP_WCO_OUT_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t CYBSP_GPIOA4_config;
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t CYBSP_GPIOA4_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t CYBSP_GPIOA5_config;
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t CYBSP_GPIOA5_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t CYBSP_SWDIO_config;
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t CYBSP_SWDIO_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t CYBSP_SWDCK_config;
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t CYBSP_SWDCK_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t CYBSP_CMOD_config;
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t CYBSP_CMOD_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t CYBSP_GPIO11_config;
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t CYBSP_GPIO11_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t CYBSP_GPIO10_config;
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t CYBSP_GPIO10_obj;
#endif //defined (CY_USING_HAL)

void init_cycfg_pins(void);
void reserve_cycfg_pins(void);

#if defined(__cplusplus)
}
#endif


#endif /* CYCFG_PINS_H */
