/*
 * GccApplication2.c
 *
 * Created: 5/21/2020 6:00:32 PM
 * Author : Ahmed EL-Tawab
 */ 

#define F_CPU 16000000
#include <avr/io.h>
#include <util/delay.h>
#include "bit_math__.h"
#include "DC_MOTOR.h"
#include "std_types__.h"
#include "SPI_SLAVE.h"

int main(void)
{
    uint_8__ rec;
    SPI_SLAVE_INT();
    MOTOR_INT();
    while (1) 
    {
		rec=SPI_SLAVE_RECIEVE();
		_delay_ms(200);
		switch(rec){
			case '1':
				toggle_bit__(PORTD,3);
				set_bit__(PORTD,4);
				_delay_ms(100);
				SPI_SLAVE_SEND('A');
				_delay_ms(200);
				break;
			case '2':
				toggle_bit__(PORTD,3);
				set_bit__(PORTD,5);
				_delay_ms(100);
				SPI_SLAVE_SEND('B');
				_delay_ms(200);
				break;
			case '3':
				toggle_bit__(PORTD,3);
				set_bit__(PORTD,6);
				_delay_ms(100);
				SPI_SLAVE_SEND('C');
				_delay_ms(200);
				break;
			case '4':
				toggle_bit__(PORTD,3);
				MOTOR_CW(80);
				_delay_ms(100);
				SPI_SLAVE_SEND('M');
				_delay_ms(200);
				break;
			case '5':
				toggle_bit__(PORTD,3);
				clear_bit__(PORTD,4);
				_delay_ms(100);
				SPI_SLAVE_SEND('E');
				_delay_ms(200);
				break;
			case '6':
				toggle_bit__(PORTD,3);
				clear_bit__(PORTD,5);
				_delay_ms(100);
				SPI_SLAVE_SEND('F');
				_delay_ms(200);
				break;
			case '7':
				toggle_bit__(PORTD,3);
				clear_bit__(PORTD,6);
				_delay_ms(100);
				SPI_SLAVE_SEND('G');
				_delay_ms(200);
				break;
			case '8':
				toggle_bit__(PORTD,3);
				MOTOR_OFF();
				_delay_ms(100);
				SPI_SLAVE_SEND('H');
				_delay_ms(200);
				break;
		}
    }
}

