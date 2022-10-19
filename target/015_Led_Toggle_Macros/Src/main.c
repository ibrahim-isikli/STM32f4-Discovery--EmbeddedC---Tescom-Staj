




#include <stdint.h>
#include <stdio.h>
#include "main.h"
  int32_t *pClockControlRegister = (int32_t*) 0x40023830;
		int32_t *pGpiodModeRegister = (int32_t*) 0x40020C00;
		int32_t *pGpiodOutputDataRegister = (int32_t*) 0x40020C14;

int main(void)
{
	// GIOP AHBN1ENR Clock enable
	RCC_AHBN1ENR_t volatile *const pClockControlRegister = ADDR_REG_AHB1ENR;

	*pClockControlRegister->CLOCK_ENABLE;
	//gpiod_en=1;

	// GIOP mode select (pin12->output)
	GPIOX_MODE_t volatile *const pGpiodModeRegister =  ADDR_REG_GPIOD_MODE;
	pGpiodModeRegister->pin_12=MODE_CONF_OUTPUT;

	// GIOP port output select (pin12)
	GPIOX_ODR_t volatile *const pGpiodOutputDataRegister = ADDR_REG_GPIOD_ODR;


	while(1){

		pGpiodOutputDataRegister->pin_12=PIN_STATE_HIGH;   //led HIGH

			for(uint32_t i=0;  i<DELAY_COUNT; i++);  //delay

		pGpiodOutputDataRegister->pin_12=PIN_STATE_LOW;   //led LOW

			for(uint32_t i=0;  i<DELAY_COUNT; i++);  //delay

	}


}
