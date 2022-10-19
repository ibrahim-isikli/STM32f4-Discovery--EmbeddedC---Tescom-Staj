/*
 ============================================================================
 Name        : Const_ex2.c
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
uint8_t const value = 50;

int main(void) {


	printf("value ---> %u\n",value);
	uint8_t *pValue = (uint8_t*) &value;
	printf("new value ---> %u\n",*pValue=100);
	waitForUserInput();
}


void waitForUserInput(void){
	printf("\nPlease press the enter button for exit\n");
	while(getchar()!='\n'){

	}
	getchar();
}
