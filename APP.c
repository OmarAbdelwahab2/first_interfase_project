/*
 * APP.c
 *
 *  Created on: Aug 29, 2023
 *      Author: omara
 */
#include "APP_interface.h"
void APP_VOID_PP_INIT(void)
{
	LED_U8_SET_LED_INIT(LED0PORT,LED0PIN);
	LED_U8_SET_LED_INIT(LED1PORT,LED1PIN);
	LED_U8_SET_LED_INIT(LED2PORT,LED2PIN);
}
std_types APP_U8_PP_BLINK_2SEC(void)
{
	std_types LOC_U8_LOCAL_RETURN=E_NOT_OK;
	LOC_U8_LOCAL_RETURN=LED_U8_SET_LED_VALUE(LED0PORT,LED0PIN,led_on);
	if(LOC_U8_LOCAL_RETURN==E_NOT_OK)
	{
		return LOC_U8_LOCAL_RETURN;
	}
	else
	{
	_delay_ms(2000);
	}
	LOC_U8_LOCAL_RETURN=LED_U8_SET_LED_VALUE(LED1PORT,LED1PIN,led_on);
	if(LOC_U8_LOCAL_RETURN==E_NOT_OK)
		{
			return LOC_U8_LOCAL_RETURN;
		}
		else
		{
		_delay_ms(2000);
		}
	LOC_U8_LOCAL_RETURN=LED_U8_SET_LED_VALUE(LED2PORT,LED2PIN,led_on);
	if(LOC_U8_LOCAL_RETURN==E_NOT_OK)
		{
			return LOC_U8_LOCAL_RETURN;
		}
		else
		{
		_delay_ms(2000);
		}
	LOC_U8_LOCAL_RETURN=LED_U8_SET_LED_VALUE(LED0PORT,LED0PIN,led_off);
	if(LOC_U8_LOCAL_RETURN==E_NOT_OK)
		{
			return LOC_U8_LOCAL_RETURN;
		}
		else
		{
		_delay_ms(2000);
		}
	LOC_U8_LOCAL_RETURN=LED_U8_SET_LED_VALUE(LED1PORT,LED1PIN,led_off);
	if(LOC_U8_LOCAL_RETURN==E_NOT_OK)
		{
			return LOC_U8_LOCAL_RETURN;
		}
		else
		{
		_delay_ms(2000);
		}
	LOC_U8_LOCAL_RETURN=LED_U8_SET_LED_VALUE(LED2PORT,LED2PIN,led_off);
	if(LOC_U8_LOCAL_RETURN==E_NOT_OK)
		{
			return LOC_U8_LOCAL_RETURN;
		}
		else
		{
		_delay_ms(2000);
		}
	return LOC_U8_LOCAL_RETURN;

}
