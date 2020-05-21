/*
 * DC_MOTOR.h
 *
 * Created: 5/21/2020 1:55:29 AM
 *  Author: Ahmed EL-Tawab
 */ 


#ifndef DC_MOTOR_H_
#define DC_MOTOR_H_
#include "std_types__.h"
#include "bit_math__.h"
#include <avr/io.h>
void MOTOR_INT();
void MOTOR_CW(uint_8__ speed);
void MOTOR_OFF();


#endif /* DC_MOTOR_H_ */