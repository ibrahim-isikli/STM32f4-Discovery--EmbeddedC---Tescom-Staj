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
#include <stdio.h>
void waitForUserInput(void);
void generate_interrupt(void);
void RTC_WKUP_IRQHandler(void);

// this function exe in THREAD MODe
void generate_interrupt(void){
	uint32_t *pSTIR = (uint32_t*) 0xE000EF00;
	uint32_t *pISER0 = (uint32_t*) 0xE000E100;

	// enable IRQ3 interrupt
	*pISER0 |= (1 << 3);

	// generate an interrupt from software for IRQ3
	*pSTIR=(3 & 0x1FF );
}






int main(void)
{
	printf("In thread mode: before interrupt\n");

	generate_interrupt();

	printf("In thread mode : after interrupt\n");

	waitForUserInput();
}

void RTC_WKUP_IRQHandler(void){
	printf("In handler mode : ISR\n");
}

void waitForUserInput(void){
	while(getchar()!='\n'){

	}
	getchar();
}