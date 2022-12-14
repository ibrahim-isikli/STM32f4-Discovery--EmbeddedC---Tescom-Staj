/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * Copyright (c) 2022 STMicroelectronics.
 * All rights reserved.
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
 *
 ******************************************************************************
 */

#include <stdint.h>

#if !defined(__SOFT_FP__) && defined(__ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif

int main(void)
{
		int32_t *pClockControlRegister = (int32_t*) 0x40023830;
		int32_t *pGpiodModeRegister = (int32_t*) 0x40020C00;
		int32_t *pGpiodOutputDataRegister = (int32_t*) 0x40020C14;

		// AHB1ENR daki GPIOD peripherals etkinlestirmek icin clocku etkinlestir
		// RCC_AHB1 peripheral clock enable registerda görmelisin ---> GPIOD 3. bite denk gelir
		// Ordaki 32 biti etkilemeden GPIOD yani 3. biti HIGH'a cekmelisin
		// SET masking yapalisin (| kullanarak bitleri manipule etme)
		// Maske degeri ---> 3. bit 1 diger 31 bit 0
		// Mask value ---> 00000000000000000000000000001000
		// Hex Mask Value --->0x00000008

		// Masking for third bit HIGH

		/*		*pClockControlRegister = *pClockControlRegister | 0x08; */

		*pClockControlRegister |= (1 << 3);

		// clocku etkinlestirdik simdi D port IO pin modunu output olarak ayarlamaliyiz
		// GPIO port mode registerda görmelisin --> 24. 25. pinler 12. pin mod ayaridir
		// modu ouptupa almak icin 24 ve 25 i 01 olarak ayarlamalisin
		// 24--> 1 (SET)     25--> 0 (CLEAR)
		// oncelikle her iki biti 00 yapmali sonra 01 yapmali
		// once clearing 00-->& sonra setting 01-->|
		// clearing icin 24 25 00 yapicaz (24 25 0 diger 30 bit 1)
		// clear Masking 11111100111111111111111111111111 --> (hex) FCFF FFFF

		/*		*pGpiodModeRegister = *pGpiodModeRegister & 0xFCFFFFFF; */

		*pGpiodModeRegister &= ~(3 << 24);

		// 24. pini 1 yapicaz (setting 24 1 diger 31 bit 0)
		// set Masking 00000001000000000000000000000000 --> (hex) 100 0000

		/*		*pGpiodModeRegister = *pGpiodModeRegister | 0x01000000; */

		while(1){
		*pGpiodModeRegister |= (1 << 24);

		// Simdi IO 12.pini HIGH'a cekmeliyiz
		// GPIO port output data reistarda gormelisin -> 12. biti 1 yap (toplamda 16 bit var)
		// set masking --> 00001000000000000--> (hex) 1000

		/* 		*pGpiodOutputDataRegister = *pGpiodOutputDataRegister | 0x1000;		*/

		*pGpiodOutputDataRegister |= (1 << 12);

		for(uint32_t i=0; i<300000; i++) ;

		*pGpiodOutputDataRegister &= ~(1 << 12);

		for(uint32_t i=0; i<300000; i++);

		}
}
