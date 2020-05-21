/*
 * UART.c
 *
 * Created: 5/19/2020 6:41:14 PM
 *  Author: Ahmed EL-Tawab
 */ 
#include "UART.h"
#include <avr/io.h>
void UART_INT(){
	UBRRL=103;
	set_bit__(UCSRB,TXEN);
	set_bit__(UCSRB,RXEN);
	set_bit__(UCSRC,UCSZ0);
	set_bit__(UCSRC,UCSZ1);
}
void UART_SEND_CHAR(uint_8__ data){
	while ((get_bit__(UCSRA,UDRE))==0);
	UDR=data;
}
void UART_SEND_STRING(int_8__ *str){
	while(*str!='\0'){
		UART_SEND_CHAR(*str);
		str++;
	}
}
uint_8__ UART_RECIEVE(){
	while ((get_bit__(UCSRA,UDRE))==0);
	return UDR;
}
