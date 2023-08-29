/*
 * LED.c
 *
 *  Created on: Aug 29, 2023
 *      Author: omara
 */
#include "LED_INTERFACE.h"
std_types LED_U8_SET_LED_INIT(u8 LOC_U8_PORT_ID, u8 LOC_U8_PIN_ID )
{
	std_types LOC_U8_LOCAL_RETURN=DIO_U8_SET_Pin_DIRECTION(LOC_U8_PORT_ID,LOC_U8_PIN_ID,pinoutput);
	return LOC_U8_LOCAL_RETURN;
}
std_types LED_U8_SET_LED_VALUE(u8 LOC_U8_PORT_ID, u8 LOC_U8_PIN_ID ,u8 LOC_U8_LED_VALUE )
{
	std_types LOC_U8_LOCAL_RETURN=E_NOT_OK;
	if((LOC_U8_LED_VALUE<=led_on)&&(LOC_U8_LED_VALUE>=led_off))
	{
		LOC_U8_LOCAL_RETURN=DIO_U8_SET_Pin_VALUE( LOC_U8_PORT_ID, LOC_U8_PIN_ID,  LOC_U8_LED_VALUE);
	}
	else{/*do nothing */}
	return LOC_U8_LOCAL_RETURN;
}
std_types LED_U8_TOGGLE_LED(u8 LOC_U8_PORT_ID, u8 LOC_U8_PIN_ID )
{
	std_types LOC_U8_LOCAL_RETURN=DIO_U8_TOGGLE_Pin( LOC_U8_PORT_ID, LOC_U8_PIN_ID);
	return LOC_U8_LOCAL_RETURN;
}
