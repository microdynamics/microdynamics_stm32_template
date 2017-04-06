#ifndef __STM32F10x_MODULE_LED_H__
#define __STM32F10x_MODULE_LED_H__

#include "stm32f10x_driver_io.h"

#define LED0 PB_OUT(1)

void LED_Init(void);

#endif
