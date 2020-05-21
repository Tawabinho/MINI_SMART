/*
 * SPI_SLAVE.h
 *
 * Created: 5/21/2020 2:58:19 AM
 *  Author: Ahmed EL-Tawab
 */ 


#ifndef SPI_SLAVE_H_
#define SPI_SLAVE_H_
#include "bit_math__.h"
#include "std_types__.h"
#include <avr/io.h>
#define MOSI		5
#define MISO		6
#define SS			4
#define sck			7
void SPI_SLAVE_INT();
uint_8__ SPI_SLAVE_RECIEVE();
void SPI_SLAVE_SEND(uint_8__ data);
#endif /* SPI_SLAVE_H_ */