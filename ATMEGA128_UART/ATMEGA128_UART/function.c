/*
 * function.c
 *
 * Created: 2023-02-04 오후 1:52:13
 *  Author: wowon
 */ 


#include "function.h"

/* USART0 START*/
extern unsigned char receive_buf;
ISR(USART0_RX_vect)
{
	receive_buf =  UDR0;
}
void usart0_init()
{
	UCSR0A=0x00;
	UCSR0B=0x98;
	UCSR0C=0x06;
	UBRR0H=0;
	UBRR0L=103;
	sei();
}
void USART0_char(char data)
{
	while(!(UCSR0A&0x20));
	UDR0 = data;
}
void USART0_str(char *str)
{
	while(*str)
	USART0_char(*str++);
}
/* USART0 END*/