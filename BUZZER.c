/*
 * BUZZER.c
 *
 *  Created on: Aug 29, 2023
 *      Author: omara
 */
#include "BUZZER.h"
void BUZZER_U8_SET_BUZZER_INIT(void )
{
	DIO_U8_SET_Pin_DIRECTION(porta,pin3,pinoutput);
}
void BUZZER_U8_SET_BUZZER(void )
{
	DIO_U8_SET_Pin_VALUE( porta,pin3,pinoutput);
}
void BUZZER_U8_TOGGLE_BUZZER(void)
{
	DIO_U8_TOGGLE_Pin(porta,pin3);
}


