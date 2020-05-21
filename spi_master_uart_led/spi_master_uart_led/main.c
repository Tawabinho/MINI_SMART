/*
 * spi_master_uart_led.c
 *
 * Created: 5/19/2020 6:14:41 PM
 * Author : Ahmed EL-Tawab
 */ 
#define F_CPU	16000000
#include <util/delay.h>
#include <avr/io.h>
#include "UART.h"
#include "lcd_config__.h"
#include "lcd__.h"
#include "SPI_MASTER.h"
uint_8__ SPI;
int main(void)
{
	lcd_int__();
    UART_INT();
	SPI_MASTER_INT();
	lcd_command__(0x80);
	lcd_string__("hey smile");
	_delay_ms(1000);
	lcd_clear__();
	
    while (1) 
    {
		uint_8__ rec=UART_RECIEVE();
		switch (rec){
			case '1':
				enable();
				SPI_MASTER_SEND(rec);
				disable();
				_delay_ms(100);
				lcd_command__(0x80);
				lcd_string__("ROOM 1");
				UART_SEND_STRING("\r\nROOM 1\r\n");
				enable();
				SPI=SPI_MASTER_RECIEVE();
				disable();
				_delay_ms(100);
				if (SPI=='A')
				{
					toggle_bit__(PORTA,0);
					_delay_ms(1000);
					UART_SEND_STRING("\r\nROOM 1 on\r\n");
				}
				break;
			case '2':
				enable();
				SPI_MASTER_SEND(rec);
				disable();
				_delay_ms(100);
				lcd_command__(0x80);
				lcd_string__("ROOM 2");
				UART_SEND_STRING("\r\nROOM 2\r\n");
				enable();
				SPI=SPI_MASTER_RECIEVE();
				disable();
				_delay_ms(100);
				if (SPI=='B')
				{
					toggle_bit__(PORTA,0);
					_delay_ms(1000);
					UART_SEND_STRING("\r\nROOM 1 on\r\n");
				}
				break;
			case '3':
				enable();
				SPI_MASTER_SEND(rec);
				disable();
				_delay_ms(100);
				lcd_command__(0x80);
				lcd_string__("ROOM 3");
				UART_SEND_STRING("\r\nROOM 3\r\n");
				enable();
				SPI=SPI_MASTER_RECIEVE();
				disable();
				_delay_ms(100);
				if (SPI=='C')
				{
					toggle_bit__(PORTA,0);
					_delay_ms(1000);
					UART_SEND_STRING("\r\nROOM 3 on\r\n");
				}
				break;
			case '4':
				enable();
				SPI_MASTER_SEND(rec);
				disable();
				_delay_ms(100);
				lcd_command__(0x80);
				lcd_string__("MOTOR1");
				UART_SEND_STRING("\r\nMOTOR1\r\n");
				enable();
				SPI=SPI_MASTER_RECIEVE();
				disable();
				_delay_ms(100);
				if (SPI=='M')
				{
					toggle_bit__(PORTA,0);
					_delay_ms(1000);
					UART_SEND_STRING("\r\nMOTOR1 on\r\n");
				}
				break;
			case '5':
				enable();
				SPI_MASTER_SEND(rec);
				disable();
				_delay_ms(100);
				lcd_command__(0x80);
				lcd_string__("ROOM 1");
				UART_SEND_STRING("\r\nROOM 1 \r\n");
				enable();
				SPI=SPI_MASTER_RECIEVE();
				disable();
				_delay_ms(100);
				if (SPI=='E')
				{
					toggle_bit__(PORTA,0);
					_delay_ms(1000);
					UART_SEND_STRING("\r\nROOM 1 off\r\n");
				}
				break;
			case '6':
				enable();
				SPI_MASTER_SEND(rec);
				disable();
				_delay_ms(100);
				lcd_command__(0x80);
				lcd_string__("ROOM 2");
				UART_SEND_STRING("\r\nROOM 2\r\n");
				enable();
				SPI=SPI_MASTER_RECIEVE();
				disable();
				_delay_ms(100);
				if (SPI=='F')
				{
					toggle_bit__(PORTA,0);
					_delay_ms(1000);
					UART_SEND_STRING("\r\nROOM 1 off\r\n");
				}
				break;
			case '7':
				enable();
				SPI_MASTER_SEND(rec);
				disable();
				_delay_ms(100);
				lcd_command__(0x80);
				lcd_string__("ROOM 3");
				UART_SEND_STRING("\r\nROOM 3\r\n");
				enable();
				SPI=SPI_MASTER_RECIEVE();
				disable();
				_delay_ms(100);
				if (SPI=='G')
				{
					toggle_bit__(PORTA,0);
					_delay_ms(1000);
					UART_SEND_STRING("\r\nROOM 3 off\r\n");
				}
				break;
			case '8':
				enable();
				SPI_MASTER_SEND(rec);
				disable();
				_delay_ms(100);
				lcd_command__(0x80);
				lcd_string__("MOTOR1");
				UART_SEND_STRING("\r\nMOTOR1\r\n");
				enable();
				SPI=SPI_MASTER_RECIEVE();
				disable();
				_delay_ms(100);
				if (SPI=='H')
				{
					toggle_bit__(PORTA,0);
					_delay_ms(1000);
					UART_SEND_STRING("\r\nMOTOR1 off\r\n");
				}
				break; 
		}
    }
}