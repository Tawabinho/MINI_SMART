/*
 * SPI_SLAVE.c
 *
 * Created: 5/21/2020 2:58:07 AM
 *  Author: Ahmed EL-Tawab
 */ 
#include "SPI_SLAVE.h"
#include <avr/io.h>
void SPI_SLAVE_INT(){
	set_bit__(DDRB,MISO);
	clear_bit__(DDRB,SS);
	SPCR=(1<<SPE);
}
void SPI_SLAVE_SEND(uint_8__ data){
	SPDR=data;
	while((get_bit__(SPSR,SPIF))==0);
}
uint_8__ SPI_SLAVE_RECIEVE(){
	while((get_bit__(SPSR,SPIF))==0);
	return SPDR;
}