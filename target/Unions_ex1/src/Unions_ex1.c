/*
 ============================================================================
 Name        : Unions_ex1.c
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

union Address{

	uint16_t shortAddr;
	uint32_t longAddr;
};

int main(void) {

union Address addr;

	addr.shortAddr=0xABCD;
	addr.longAddr=0xEEEECCCC;

	printf("short addr ---> #%X\n",addr.shortAddr);
	printf("long addr ---> #%X\n",addr.longAddr);

	waitForUserInput();
}

void waitForUserInput(void){
	printf("\nPlease press the enter button for exit\n\n");
	while(getchar()!='\n'){

	}
	getchar();
}
