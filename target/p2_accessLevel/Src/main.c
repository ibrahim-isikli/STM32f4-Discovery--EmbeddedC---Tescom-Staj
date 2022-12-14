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
void RTC_WKUP_IRQHandler(void);
void generate_interrupt();

void generate_interrupt(){
	// STIR ve ISER= ın adresleri
	uint32_t *pSTIR = (uint32_t*) 0xE000EF00;
	uint32_t *pISER0 = (uint32_t*) 0xE000E100;

	//enable IRQ interrupt
	*pISER0 = (1 << 3);

	// generate an interrupt from software for IRQ3
	*pSTIR = ( 3 & 0x1FF);
}

void change_access_level_unpriv(void){

}

//Therad mode + priv access level
int main(void){
    printf("in thread mode : before interrupt\n");

    change_access_level_unpriv();

    generate_interrupt();
    printf("in thread mode : after interrupt\n");
	for(;;);
}

void RTC_WKUP_IRQHandler(void){
	printf("In handler mode : ISR\n");
}
