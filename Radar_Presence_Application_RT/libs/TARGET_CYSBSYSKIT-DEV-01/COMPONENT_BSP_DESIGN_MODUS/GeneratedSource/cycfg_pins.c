/*******************************************************************************
* File Name: cycfg_pins.c
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

#include "cycfg_pins.h"

const cy_stc_gpio_pin_config_t CYBSP_WCO_IN_config = 
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_ANALOG,
    .hsiom = CYBSP_WCO_IN_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t CYBSP_WCO_IN_obj = 
    {
        .type = CYHAL_RSC_GPIO,
        .block_num = CYBSP_WCO_IN_PORT_NUM,
        .channel_num = CYBSP_WCO_IN_PIN,
    };
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t CYBSP_WCO_OUT_config = 
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_ANALOG,
    .hsiom = CYBSP_WCO_OUT_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t CYBSP_WCO_OUT_obj = 
    {
        .type = CYHAL_RSC_GPIO,
        .block_num = CYBSP_WCO_OUT_PORT_NUM,
        .channel_num = CYBSP_WCO_OUT_PIN,
    };
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t CYBSP_GPIOA4_config = 
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_ANALOG,
    .hsiom = CYBSP_GPIOA4_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t CYBSP_GPIOA4_obj = 
    {
        .type = CYHAL_RSC_GPIO,
        .block_num = CYBSP_GPIOA4_PORT_NUM,
        .channel_num = CYBSP_GPIOA4_PIN,
    };
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t CYBSP_GPIOA5_config = 
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_ANALOG,
    .hsiom = CYBSP_GPIOA5_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t CYBSP_GPIOA5_obj = 
    {
        .type = CYHAL_RSC_GPIO,
        .block_num = CYBSP_GPIOA5_PORT_NUM,
        .channel_num = CYBSP_GPIOA5_PIN,
    };
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t CYBSP_SWDIO_config = 
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_PULLUP,
    .hsiom = CYBSP_SWDIO_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t CYBSP_SWDIO_obj = 
    {
        .type = CYHAL_RSC_GPIO,
        .block_num = CYBSP_SWDIO_PORT_NUM,
        .channel_num = CYBSP_SWDIO_PIN,
    };
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t CYBSP_SWDCK_config = 
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_PULLDOWN,
    .hsiom = CYBSP_SWDCK_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t CYBSP_SWDCK_obj = 
    {
        .type = CYHAL_RSC_GPIO,
        .block_num = CYBSP_SWDCK_PORT_NUM,
        .channel_num = CYBSP_SWDCK_PIN,
    };
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t CYBSP_CMOD_config = 
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_ANALOG,
    .hsiom = CYBSP_CMOD_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t CYBSP_CMOD_obj = 
    {
        .type = CYHAL_RSC_GPIO,
        .block_num = CYBSP_CMOD_PORT_NUM,
        .channel_num = CYBSP_CMOD_PIN,
    };
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t CYBSP_GPIO11_config = 
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_ANALOG,
    .hsiom = CYBSP_GPIO11_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t CYBSP_GPIO11_obj = 
    {
        .type = CYHAL_RSC_GPIO,
        .block_num = CYBSP_GPIO11_PORT_NUM,
        .channel_num = CYBSP_GPIO11_PIN,
    };
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t CYBSP_GPIO10_config = 
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_ANALOG,
    .hsiom = CYBSP_GPIO10_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t CYBSP_GPIO10_obj = 
    {
        .type = CYHAL_RSC_GPIO,
        .block_num = CYBSP_GPIO10_PORT_NUM,
        .channel_num = CYBSP_GPIO10_PIN,
    };
#endif //defined (CY_USING_HAL)


void init_cycfg_pins(void)
{
    Cy_GPIO_Pin_Init(CYBSP_WCO_IN_PORT, CYBSP_WCO_IN_PIN, &CYBSP_WCO_IN_config);
    Cy_GPIO_Pin_Init(CYBSP_WCO_OUT_PORT, CYBSP_WCO_OUT_PIN, &CYBSP_WCO_OUT_config);
    Cy_GPIO_Pin_Init(CYBSP_GPIOA4_PORT, CYBSP_GPIOA4_PIN, &CYBSP_GPIOA4_config);
    Cy_GPIO_Pin_Init(CYBSP_SWDIO_PORT, CYBSP_SWDIO_PIN, &CYBSP_SWDIO_config);
    Cy_GPIO_Pin_Init(CYBSP_SWDCK_PORT, CYBSP_SWDCK_PIN, &CYBSP_SWDCK_config);
    Cy_GPIO_Pin_Init(CYBSP_GPIO11_PORT, CYBSP_GPIO11_PIN, &CYBSP_GPIO11_config);
    Cy_GPIO_Pin_Init(CYBSP_GPIO10_PORT, CYBSP_GPIO10_PIN, &CYBSP_GPIO10_config);
}

void reserve_cycfg_pins(void)
{
#if defined (CY_USING_HAL)
    cyhal_hwmgr_reserve(&CYBSP_WCO_IN_obj);
    cyhal_hwmgr_reserve(&CYBSP_WCO_OUT_obj);
    cyhal_hwmgr_reserve(&CYBSP_GPIOA4_obj);
    cyhal_hwmgr_reserve(&CYBSP_GPIOA5_obj);
    cyhal_hwmgr_reserve(&CYBSP_SWDIO_obj);
    cyhal_hwmgr_reserve(&CYBSP_SWDCK_obj);
    cyhal_hwmgr_reserve(&CYBSP_CMOD_obj);
    cyhal_hwmgr_reserve(&CYBSP_GPIO11_obj);
    cyhal_hwmgr_reserve(&CYBSP_GPIO10_obj);
#endif //defined (CY_USING_HAL)
}
