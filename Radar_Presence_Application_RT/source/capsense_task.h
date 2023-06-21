/*
 * capsense.h
 *
 *  Created on: 2023年6月14日
 *      Author: YanJenson
 */

#ifndef SOURCE_CAPSENSE_TASK_H_
#define SOURCE_CAPSENSE_TASK_H_

/* Header file includes */
#include "../libs/TARGET_CYSBSYSKIT-DEV-01/COMPONENT_BSP_DESIGN_MODUS/GeneratedSource/cycfg.h"
#include "../libs/TARGET_CYSBSYSKIT-DEV-01/COMPONENT_BSP_DESIGN_MODUS/GeneratedSource/cycfg_capsense.h"
#include "cyabs_rtos.h"


#define CAPSENSE_TASK_NAME "CAPSENSE TASK"
#define TASK_CAPSENSE_STACK_SIZE (4096u)
#define TASK_CAPSENSE_PRIORITY (CY_RTOS_PRIORITY_NORMAL + 1)

#define CAPSENSE_INTR_PRIORITY      (7u)
#define EZI2C_INTR_PRIORITY         (6u)

void capsense_task(cy_thread_arg_t arg);


#endif /* SOURCE_CAPSENSE_TASK_H_ */
