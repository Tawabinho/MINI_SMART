/*
 * SPI_MASTER.h
 *
 * Created: 5/21/2020 1:20:28 AM
 *  Author: Ahmed EL-Tawab
 */ 


#ifndef SPI_MASTER_H_
#define SPI_MASTER_H_
#include "std_types__.h"
#include "bit_math__.h"
#define MOSI		5
#define MISO		6
#define CS			3
#define sck			7
#define enable()	PORTB&=~(1<<CS)
#define disable()	PORTB|=(1<<CS)
void SPI_MASTER_INT();
void SPI_MASTER_SEND(uint_8__ data);
uint_8__ SPI_MASTER_RECIEVE(void);
#endif /* SPI_MASTER_H_ */