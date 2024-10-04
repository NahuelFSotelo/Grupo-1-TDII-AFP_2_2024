/*
 * API_GPIO.h
 *
 *  Created on               : Oct 3, 2024
 *      Author               : Nahue
 *  Funtion of driver        : Driver que contiene funciones para manejo de puertos GPIO que utiliza funciones de la HAL
 *                             de STM32 nucleo f4xx
 */

#ifndef API_INC_API_GPIO_H_
#define API_INC_API_GPIO_H_
/*includes*************************************************************************************/
#include <stdint.h>
#include <stdbool.h>
/*Exported types*******************************************************************************/
 typedef uint16_t led_t; /* importante que el tipo se uint16_t, si no, no funciona LD3_Pin */
 typedef bool buttonStatus_t;

 /*Exported functions prototypes **************************************************************/
 void MX_GPIO_Init(void);
 void writeLedOn_GPIO(led_t LDx);
 void writeLedOff_GPIO(led_t LDx);
 void toggleLed_GPIO(led_t LDx);
 buttonStatus_t readButton_GPIO (void);
#endif /* API_INC_API_GPIO_H_ */
