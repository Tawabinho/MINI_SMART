/*
 * lcd_config__.c
 *
 * Created: 5/6/2020 4:25:36 PM
 *  Author: Ahmed EL-Tawab
 */ 
#define F_CPU 16000000
#include "lcd_config__.h"
#include "lcd__.h"
#include <util/delay.h>
#include <avr/io.h>
void lcd_int__(){
	DDRA=0xFF;
	clear_bit__(PORTA,RW);
	_delay_ms(8);
	lcd_command__(0x33);
	lcd_command__(0x32);
	lcd_command__(0x28);
	lcd_command__(0x0c);
	lcd_command__(0x06);
	lcd_command__(0x01);
}