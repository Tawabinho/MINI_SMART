/*
 * SPI_MASTER.c
 *
 * Created: 5/21/2020 1:20:09 AM
 *  Author: Ahmed EL-Tawab
 */ 
#include "SPI_MASTER.h"
#include <avr/io.h>
void SPI_MASTER_INT(){
	SPCR=0x51;
	DDRB|=(1<<MOSI)|(1<<sck)|(1<<CS);	
}
void SPI_MASTER_SEND(uint_8__ data){
	SPDR=data;
	while((get_bit__(SPSR,SPIF))==0);
}
uint_8__ SPI_MASTER_RECIEVE(void){
	while((get_bit__(SPSR,SPIF))==0);
	return SPDR;
}