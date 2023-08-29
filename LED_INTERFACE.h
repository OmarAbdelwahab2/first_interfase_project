/*
 * LED.h
 *
 *  Created on: Aug 29, 2023
 *      Author: omara
 */

#ifndef LED_INTERFACE_H_
#define LED_INTERFACE_H_
#include "DIO_interface.h"
#include "LED_PRIVATE.h"
std_types LED_U8_SET_LED_INIT(u8 LOC_U8_PORT_ID, u8 LOC_U8_PIN_ID );
std_types LED_U8_SET_LED_VALUE(u8 LOC_U8_PORT_ID, u8 LOC_U8_PIN_ID ,u8 LOC_U8_LED_VALUE );
std_types LED_U8_TOGGLE_LED(u8 LOC_U8_PORT_ID, u8 LOC_U8_PIN_ID );
#endif /* LED_INTERFACE_H_ */
