/*
 ============================================================================
 Name        : structure_ex3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
void waitForUserInput();

struct carDatas{
	    const uint32_t  model; // 4 byte
		const uint32_t speed; // 4 buyte
		const uint16_t price; // 2 byte
		const float weight;  // 4 byte
		// total 14 byte
};

struct data{
	const uint8_t height; // 1 byte
};

int main(void) {

	struct carDatas carBMW={.model=2000,.price=240000,.speed=230,.weight=234.7};
	printf("\nSize of carDatas %I32u",sizeof(struct carDatas)); // 16byte
	// 2 bayt fazla bunun nedeni (dolgu malzemesi gibi)

	struct data numb={.height=0};
	printf("\nSize of data %I32u",sizeof(struct data)); // 1 byte -> correct



 waitForUserInput();
}


void waitForUserInput(void){
	printf("\n\nPress the enter button for exit\n\n");
	while(getchar()!='\n'){

	}
	getchar();
}
