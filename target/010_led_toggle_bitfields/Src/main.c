/*
        int32_t *pClockControlRegister = (int32_t*) 0x40023830;
		int32_t *pGpiodModeRegister = (int32_t*) 0x40020C00;
		int32_t *pGpiodOutputDataRegister = (int32_t*) 0x40020C14;
 */


#include <stdint.h>
#include <stdio.h>
#include "main.h"


int main(void)
{
	// GIOP AHBN1ENR Clock enable
	RCC_AHBN1ENR_t volatile *const pClockControlRegister = (RCC_AHBN1ENR_t*) 0x40023830;
	pClockControlRegister->gpiod_en=1;

	// GIOP mode select (pin12->output)
	GPIOX_MODE_t volatile *const pGpiodModeRegister = (GPIOX_MODE_t*)  0x40020C00;
	pGpiodModeRegister->pin_12=1;

	// GIOP port output select (pin12)
	GPIOX_ODR_t volatile *const pGpiodOutputDataRegister = (GPIOX_ODR_t*) 0x40020C14;


	while(1){

		pGpiodOutputDataRegister->pin_12=1;   //led HIGH

			for(uint32_t i=0;  i<30000; i++);  //delay

		pGpiodOutputDataRegister->pin_12=0;   //led LOW

			for(uint32_t i=0;  i<30000; i++);  //delay

	}


}
