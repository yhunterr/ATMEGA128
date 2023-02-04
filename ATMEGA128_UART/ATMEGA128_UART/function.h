/*
 * function.h
 *
 * Created: 2023-02-04 오후 1:51:51
 *  Author: wowon
 */ 


#ifndef FUNCTION_H_
#define FUNCTION_H_
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>
#include <string.h>

#endif /* FUNCTION_H_ */


/* USART0 START*/
unsigned char receive_buf;
void usart0_init();
void USART0_char(char data);
void USART0_str(char *str);
/* USART0 END*/
