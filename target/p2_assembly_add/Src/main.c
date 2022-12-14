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

int main(void)
{
	asm volatile("LDR R1, =#0x20001000");
	asm volatile("LDR R2, =#0x20001004");

    asm volatile("LDR R0,[R1]");
    asm volatile("LDR R1,[R2]");
    asm volatile("ADD R0,R0,R1");
    asm volatile("STR R0,[R2]");

	for(;;);
}
