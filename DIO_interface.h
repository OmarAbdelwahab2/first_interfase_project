/*
 * DIO.h
 *
 *  Created on: Aug 28, 2023
 *      Author: omara
 */

#ifndef DIO_INTERFACE_H_
#define DIO_INTERFACE_H_
#include "MCU.h"
#include"DIO_PRIVATE.h"
std_types DIO_U8_SET_PORT_DIRECTION(u8 LOC_U8_PORT_ID, u8 LOC_U8_PORT_DIRECTION);
std_types DIO_U8_SET_Pin_DIRECTION(u8 LOC_U8_PORT_ID,u8 LOC_U8_PIN_ID, u8 LOC_U8_PIN_DIRECTION);
std_types DIO_U8_SET_PORT_VALUE(u8 LOC_U8_PORT_ID, u8 LOC_U8_PORT_VALUE);
std_types DIO_U8_SET_Pin_VALUE(u8 LOC_U8_PORT_ID,u8 LOC_U8_PIN_ID, u8 LOC_U8_PIN_DIRECTION);
std_types DIO_U8_TOGGLE_PORT(u8 LOC_U8_PORT_ID);
std_types DIO_U8_TOGGLE_Pin(u8 LOC_U8_PORT_ID,u8 LOC_U8_PIN_ID);
std_types DIO_U8_GET_PORT_VALUE(u8 LOC_U8_PORT_ID,u8 *LOC_U8_NEEDED_VALUE);
std_types DIO_U8_GET_Pin_VALUE(u8 LOC_U8_PORT_ID,u8 LOC_U8_PIN_ID,u8 * LOC_U8_NEEDED_VALUE);










#endif /* DIO_INTERFACE_H_ */
