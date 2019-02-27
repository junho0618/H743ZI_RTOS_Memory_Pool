#ifndef __HAL_UART_PRINTF_H__
#define __HAL_UART_PRINTF_H__

#ifdef __cplusplus
	extern "C" {
#endif

#include "stm32h7xx_hal.h"
#include <stdio.h>
#include "usart.h"

#define PRINTF_UART_PORT				huart2

//extern UART_HandleTypeDef  PRINTF_UART_PORT;

size_t __write(int handle, uint8_t *buf, size_t bufSize);

#ifdef __cplusplus
 }
#endif

#endif