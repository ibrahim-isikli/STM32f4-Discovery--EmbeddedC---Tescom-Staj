/*
 ============================================================================
 Name        : Ex1_BitShifting.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
void waitForUserInput(void);

int main(void) {

	uint8_t volatile const a=1;
	uint8_t volatile *const add = (uint8_t*) &a;
	printf("a address = %p\n",add);
	printf("Lefts shifted by 1: %u\n",a<<1);
	printf("Left shifted by 1N: %x\n",*add<<1);


	waitForUserInput();
}

void waitForUserInput(void){
	printf("\nPress the enter button for exit\n\n");
	while(getchar()!='\n'){

	}
	getchar();
}
