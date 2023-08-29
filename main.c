/*
 * main.c
 *
 *  Created on: Aug 28, 2023
 *      Author: omara
 */
#include "APP_interface.h"
int main(void)
{
	APP_VOID_PP_INIT();
	while(1)
	{
		std_types LOC_U8_LOCAL_RETURN= APP_U8_PP_BLINK_2SEC();
		if(LOC_U8_LOCAL_RETURN==E_OK)
		{/*//DO NOTHNG*/}
		else
		{
			BUZZER_U8_SET_BUZZER_INIT();
			BUZZER_U8_SET_BUZZER();
		}
	}
	return 0;
}

