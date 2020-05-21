/*
 * UART.h
 *
 * Created: 5/19/2020 6:41:02 PM
 *  Author: Ahmed EL-Tawab
 */ 


#ifndef UART_H_
#define UART_H_
#include "bit_math__.h"
#include "std_types__.h"
void UART_INT();
void UART_SEND_CHAR(uint_8__ data);
void UART_SEND_STRING(int_8__ *str);
uint_8__ UART_RECIEVE();
#endif /* UART_H_ */