/*
 * DC_MOTOR.c
 *
 * Created: 5/21/2020 1:55:46 AM
 *  Author: Ahmed EL-Tawab
 */ 
#include "DC_MOTOR.h"
#include <avr/io.h>
void MOTOR_INT(){
	DDRD=0xFF;
	TCCR2=(1<<WGM20)|(1<<WGM21)|(1<<COM20)|(1<<COM21)|(1<<CS20);
}
void MOTOR_CW(uint_8__ speed){
	set_bit__(PORTD,1);
	clear_bit__(PORTD,2);
	OCR2=(speed*255)/100;
}
void MOTOR_OFF(){
	clear_bit__(PORTD,1);
	clear_bit__(PORTD,2);
	OCR2=0;
}