/*
 * DIO.c
 *
 *  Created on: Aug 28, 2023
 *      Author: omara
 */
#include "DIO_interface.h"
std_types DIO_U8_SET_PORT_DIRECTION(u8 LOC_U8_PORT_ID, u8 LOC_U8_PORT_DIRECTION)
{
	std_types LOC_U8_LOCAL_RETURN=E_NOT_OK;
	if((LOC_U8_PORT_ID>=porta)&&(LOC_U8_PORT_ID<=portd)&&(LOC_U8_PORT_DIRECTION>=portinput)&&(LOC_U8_PORT_DIRECTION<=portoutput))
	{
		if(LOC_U8_PORT_DIRECTION==portoutput)
		{
			switch(LOC_U8_PORT_ID)
			{
			case porta:DDRA=all_port_is_output;LOC_U8_LOCAL_RETURN=E_OK;break;
			case portb:DDRB=all_port_is_output;LOC_U8_LOCAL_RETURN=E_OK;break;
			case portc:DDRC=all_port_is_output;LOC_U8_LOCAL_RETURN=E_OK;break;
			case portd:DDRD=all_port_is_output;LOC_U8_LOCAL_RETURN=E_OK;break;
			default:/*do nothing* corner case has been handled up in the first if */;break;
			}
		}
		else
		{
			switch(LOC_U8_PORT_ID)
			{
			case 0:DDRA=all_port_is_input;LOC_U8_LOCAL_RETURN=E_OK;break;
			case 1:DDRB=all_port_is_input;LOC_U8_LOCAL_RETURN=E_OK;break;
			case 2:DDRC=all_port_is_input;LOC_U8_LOCAL_RETURN=E_OK;break;
			case 3:DDRD=all_port_is_input;LOC_U8_LOCAL_RETURN=E_OK;break;
			default:/*do nothing* corner case has been handled up in the first if */;break;
			}

		}
	}
	else{/*do nothing*/}
	return LOC_U8_LOCAL_RETURN;
}
std_types DIO_U8_SET_Pin_DIRECTION(u8 LOC_U8_PORT_ID,u8 LOC_U8_PIN_ID, u8 LOC_U8_PIN_DIRECTION)
{
	std_types LOC_U8_LOCAL_RETURN=E_NOT_OK;
	if((LOC_U8_PORT_ID>=porta)&&(LOC_U8_PORT_ID<=portd)&&(LOC_U8_PIN_DIRECTION>=pininput )&&(LOC_U8_PIN_DIRECTION<=pinoutput)&&(LOC_U8_PIN_ID>=pin0)&&(LOC_U8_PIN_ID<=pin7))
	{
		if(LOC_U8_PIN_DIRECTION==pinoutput)
		{
			switch(LOC_U8_PORT_ID)
			{
			case porta:set_bit(DDRA,LOC_U8_PIN_ID);LOC_U8_LOCAL_RETURN=E_OK;break;
			case portb:set_bit(DDRB,LOC_U8_PIN_ID);LOC_U8_LOCAL_RETURN=E_OK;break;
			case portc:set_bit(DDRC,LOC_U8_PIN_ID);LOC_U8_LOCAL_RETURN=E_OK;break;
			case portd:set_bit(DDRD,LOC_U8_PIN_ID);LOC_U8_LOCAL_RETURN=E_OK;break;
			default:/*do nothing* corner case has been handled up in the first if */;break;
			}
		}
		else//corner case handled up in the first if
		{
			switch(LOC_U8_PORT_ID)
			{
			case porta:clear_bit(DDRA,LOC_U8_PIN_ID);LOC_U8_LOCAL_RETURN=E_OK;break;
			case portb:clear_bit(DDRB,LOC_U8_PIN_ID);LOC_U8_LOCAL_RETURN=E_OK;break;
			case portc:clear_bit(DDRC,LOC_U8_PIN_ID);LOC_U8_LOCAL_RETURN=E_OK;break;
			case portd:clear_bit(DDRD,LOC_U8_PIN_ID);LOC_U8_LOCAL_RETURN=E_OK;break;
			default:/*do nothing* corner case has been handled up in the first if */;break;
			}

		}
	}
	else{/*do nothing*/}
	return LOC_U8_LOCAL_RETURN;

}
std_types DIO_U8_SET_PORT_VALUE(u8 LOC_U8_PORT_ID, u8 LOC_U8_PORT_VALUE)
{
	std_types LOC_U8_LOCAL_RETURN=E_NOT_OK;
	if((LOC_U8_PORT_ID>=porta)&&(LOC_U8_PORT_ID<=portd)&&(LOC_U8_PORT_VALUE>=portinput )&&(LOC_U8_PORT_VALUE<=portoutput ))
	{
		if(LOC_U8_PORT_VALUE==portup )
		{
			switch(LOC_U8_PORT_ID)
			{
			case porta:PORTA=all_port_is_up ;LOC_U8_LOCAL_RETURN=E_OK;break;
			case portb:PORTB=all_port_is_up ;LOC_U8_LOCAL_RETURN=E_OK;break;
			case portc:PORTC=all_port_is_up ;LOC_U8_LOCAL_RETURN=E_OK;break;
			case portd:PORTD=all_port_is_up ;LOC_U8_LOCAL_RETURN=E_OK;break;
			default:/*do nothing* corner case has been handled up in the first if */;break;
			}
		}
		else
		{
			switch(LOC_U8_PORT_ID)
			{
			case porta:PORTA= all_port_is_down ;LOC_U8_LOCAL_RETURN=E_OK;break;
			case portb:PORTB= all_port_is_down ;LOC_U8_LOCAL_RETURN=E_OK;break;
			case portc:PORTC= all_port_is_down ;LOC_U8_LOCAL_RETURN=E_OK;break;
			case portd:PORTD= all_port_is_down ;LOC_U8_LOCAL_RETURN=E_OK;break;
			default:/*do nothing* corner case has been handled up in the first if */;break;
			}

		}
	}
	else{/*do nothing*/}
	return LOC_U8_LOCAL_RETURN;
}
std_types DIO_U8_SET_Pin_VALUE(u8 LOC_U8_PORT_ID,u8 LOC_U8_PIN_ID, u8 LOC_U8_PIN_DIRECTION)
{
	std_types LOC_U8_LOCAL_RETURN=E_NOT_OK;
	if((LOC_U8_PORT_ID>=porta)&&(LOC_U8_PORT_ID<=portd)&&(LOC_U8_PIN_DIRECTION>=pininput)&&(LOC_U8_PIN_DIRECTION<=pinoutput)&&(LOC_U8_PIN_ID>=pin0)&&(LOC_U8_PIN_ID<=pin7))
	{
		if(LOC_U8_PIN_DIRECTION==pinoutput)
		{
			switch(LOC_U8_PORT_ID)
			{
			case porta:set_bit(PORTA,LOC_U8_PIN_ID);LOC_U8_LOCAL_RETURN=E_OK;break;
			case portb:set_bit(PORTB,LOC_U8_PIN_ID);LOC_U8_LOCAL_RETURN=E_OK;break;
			case portc:set_bit(PORTC,LOC_U8_PIN_ID);LOC_U8_LOCAL_RETURN=E_OK;break;
			case portd:set_bit(PORTD,LOC_U8_PIN_ID);LOC_U8_LOCAL_RETURN=E_OK;break;
			default:/*do nothing* corner case has been handled up in the first if */;break;
			}
		}
		else//corner case handled up in the first if
		{
			switch(LOC_U8_PORT_ID)
			{
			case porta:clear_bit(PORTA,LOC_U8_PIN_ID);LOC_U8_LOCAL_RETURN=E_OK;break;
			case portb:clear_bit(PORTB,LOC_U8_PIN_ID);LOC_U8_LOCAL_RETURN=E_OK;break;
			case portc:clear_bit(PORTC,LOC_U8_PIN_ID);LOC_U8_LOCAL_RETURN=E_OK;break;
			case portd:clear_bit(PORTD,LOC_U8_PIN_ID);LOC_U8_LOCAL_RETURN=E_OK;break;
			default:/*do nothing* corner case has been handled up in the first if */;break;
			}

		}
	}
	else{/*do nothing*/}
	return LOC_U8_LOCAL_RETURN;

}
std_types DIO_U8_TOGGLE_PORT(u8 LOC_U8_PORT_ID)
{
	std_types LOC_U8_LOCAL_RETURN=E_NOT_OK;
	if((LOC_U8_PORT_ID>=porta)&&(LOC_U8_PORT_ID<=portd))
	{
		switch (LOC_U8_PORT_ID)
		{
		case porta : PORTA=~PORTA;LOC_U8_LOCAL_RETURN=E_OK;break;
		case portb : PORTB=~PORTB;LOC_U8_LOCAL_RETURN=E_OK;break;
		case portc : PORTC=~PORTC;LOC_U8_LOCAL_RETURN=E_OK;break;
		case portd : PORTD=~PORTD;LOC_U8_LOCAL_RETURN=E_OK;break;
		default : /*do nothing* Corner case handled in if*/break;
		}
	}
	return LOC_U8_LOCAL_RETURN;
}
std_types DIO_U8_TOGGLE_Pin(u8 LOC_U8_PORT_ID,u8 LOC_U8_PIN_ID)
{
	std_types LOC_U8_LOCAL_RETURN=E_NOT_OK;
	if((LOC_U8_PORT_ID>=porta)&&(LOC_U8_PORT_ID<=portd)&&(LOC_U8_PIN_ID>=pin0)&&(LOC_U8_PIN_ID<=pin7))
	{
		switch (LOC_U8_PORT_ID)
		{
		case porta : toggle_bit(PORTA,LOC_U8_PIN_ID);LOC_U8_LOCAL_RETURN=E_OK;break;
		case portb : toggle_bit(PORTB,LOC_U8_PIN_ID);LOC_U8_LOCAL_RETURN=E_OK;break;
		case portc : toggle_bit(PORTC,LOC_U8_PIN_ID);LOC_U8_LOCAL_RETURN=E_OK;break;
		case portd : toggle_bit(PORTD,LOC_U8_PIN_ID);LOC_U8_LOCAL_RETURN=E_OK;break;
		default : /*do nothing Corner case handled in if*/break;
		}
	}
	return LOC_U8_LOCAL_RETURN;
}
std_types DIO_U8_GET_PORT_VALUE(u8 LOC_U8_PORT_ID,u8 * LOC_U8_NEEDED_VALUE)
{
	std_types LOC_U8_LOCAL_RETURN=E_NOT_OK;
	if((LOC_U8_PORT_ID>=porta)&&(LOC_U8_PORT_ID<=portd))
	{
		switch (LOC_U8_PORT_ID)
		{
		case porta : *LOC_U8_NEEDED_VALUE=PINA;LOC_U8_LOCAL_RETURN=E_OK;break;
		case portb : *LOC_U8_NEEDED_VALUE=PINB;LOC_U8_LOCAL_RETURN=E_OK;break;
		case portc : *LOC_U8_NEEDED_VALUE=PINC;LOC_U8_LOCAL_RETURN=E_OK;break;
		case portd : *LOC_U8_NEEDED_VALUE=PIND;LOC_U8_LOCAL_RETURN=E_OK;break;
		default : /*do nothing* Corner case handled in if*/break;
		}
	}
	return LOC_U8_LOCAL_RETURN;
}
std_types DIO_U8_GET_Pin_VALUE(u8 LOC_U8_PORT_ID,u8 LOC_U8_PIN_ID,u8 * LOC_U8_NEEDED_VALUE)
{
	std_types LOC_U8_LOCAL_RETURN=E_NOT_OK;
	if((LOC_U8_PORT_ID>=porta)&&(LOC_U8_PORT_ID<=portd)&&(LOC_U8_PIN_ID>=pin0)&&(LOC_U8_PIN_ID<=pin7))
	{
		switch (LOC_U8_PORT_ID)
		{
		case porta : *LOC_U8_NEEDED_VALUE=get_bit(PORTA,LOC_U8_PIN_ID);LOC_U8_LOCAL_RETURN=E_OK;break;
		case portb : *LOC_U8_NEEDED_VALUE=get_bit(PORTB,LOC_U8_PIN_ID);LOC_U8_LOCAL_RETURN=E_OK;break;
		case portc : *LOC_U8_NEEDED_VALUE=get_bit(PORTC,LOC_U8_PIN_ID);LOC_U8_LOCAL_RETURN=E_OK;break;
		case portd : *LOC_U8_NEEDED_VALUE=get_bit(PORTD,LOC_U8_PIN_ID);LOC_U8_LOCAL_RETURN=E_OK;break;
		default : /*do nothing Corner case handled in if*/break;
		}
	}
	return LOC_U8_LOCAL_RETURN;
}
