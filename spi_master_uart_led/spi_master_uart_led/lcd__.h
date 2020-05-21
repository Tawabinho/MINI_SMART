/*
 * lcd__.h
 *
 * Created: 5/6/2020 4:26:05 PM
 *  Author: Ahmed EL-Tawab
 */ 


#ifndef LCD___H_
#define LCD___H_
#include "std_types__.h"
#include "bit_math__.h"
#define RS	1
#define RW	2
#define E	3
void lcd_string__(int_8__ *str);
void lcd_command__(uint_8__ cmd);
void lcd_write__(uint_8__ data);
void lcd_clear__();
#endif /* LCD___H_ */