/*
 * lcd__.c
 *
 * Created: 5/6/2020 4:25:50 PM
 *  Author: Ahmed EL-Tawab
 */ 
#define F_CPU 16000000
#include "lcd__.h"
#include <util/delay.h>
#include <avr/io.h>
void lcd_command__(uint_8__ cmd){
	PORTA=(PORTA & 0x0F)|(cmd & 0xF0);
	clear_bit__(PORTA,RS);
	set_bit__(PORTA,E);
	_delay_ms(2);
	clear_bit__(PORTA,E);
	_delay_ms(2);
	PORTA=(PORTA & 0x0F)|(cmd << 4);
	set_bit__(PORTA,E);
	_delay_ms(2);
	clear_bit__(PORTA,E);
	_delay_ms(2);
}

void lcd_write__(uint_8__ data){
	PORTA=(PORTA & 0x0F)|(data & 0xF0);
	set_bit__(PORTA,RS);
	set_bit__(PORTA,E);
	_delay_ms(2);
	clear_bit__(PORTA,E);
	_delay_ms(2);
	PORTA=(PORTA & 0x0F)|(data << 4);
	set_bit__(PORTA,E);
	_delay_ms(2);
	clear_bit__(PORTA,E);
	_delay_ms(2);
}

void lcd_string__(int_8__ *str){
	while(*str !='\0')
	{
		lcd_write__(*str);
		str++;
	}
}

void lcd_clear__(){
	lcd_command__(0x01);
	_delay_ms(2);
	lcd_command__(0x80);
}
