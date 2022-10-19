/*
 ============================================================================
 Name        : Arrays_passing.c
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
void arrayDisplay(uint8_t const *const pArray, uint32_t nItems);

int main(void) {


	uint8_t someDatas[10]={0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF};
	printf("someDatas(changed) -->\n");

	for(uint32_t i=0; i<10; i++){
		printf("%X\t",someDatas[i]=i);
	}

	uint32_t nItems = (sizeof(someDatas)/sizeof(uint8_t));

	arrayDisplay(someDatas+2,nItems-2);

	waitForUserInput();
}


void arrayDisplay(uint8_t const *const pArray, uint32_t nItems){
	// alinan icerigi goruntuleyelim
	printf("\nsomeDatas -->\n");
	for(uint32_t i=0; i<nItems; i++){

		printf("%X\t",pArray[i]);
	}
}

void waitForUserInput(void){
	printf("\n\nPlease press the enter button for exit\n\n");
	while(getchar()!='\n'){

	}
	getchar();
}
