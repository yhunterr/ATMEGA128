#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>
#include <string.h>
#include "function.h"






int main(void)
{
	usart0_init();
	
	
	while(1)
	{
		USART0_str("TEST\n");
		if(receive_buf)
		{
			USART0_char(receive_buf);
			receive_buf = 0;
		}
		_delay_ms(1000);
	}
}