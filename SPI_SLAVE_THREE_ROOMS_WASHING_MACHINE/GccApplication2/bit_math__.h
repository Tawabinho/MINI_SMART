/*
 * bit_math.h
 *
 * Created: 5/6/2020 1:06:15 PM
 *  Author: Ahmed EL-Tawab
 */ 


#ifndef BIT_MATH_H_
#define BIT_MATH_H_
#define set_bit__(var,bit)		var|=(1<<bit)
#define clear_bit__(var,bit)	var&=~(1<<bit)
#define toggle_bit__(var,bit)	var^=(1<<bit)
#define get_bit__(var,bit)		((var>>bit)&1)
#endif /* BIT_MATH_H_ */