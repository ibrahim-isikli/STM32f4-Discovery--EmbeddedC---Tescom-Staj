/*
 ============================================================================
 Name        : Const_ex1.c
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

	uint8_t data =8;
	printf("data value --> %u\n",data);
	data=50;
	printf("new data value --> %u\n",data);

	uint8_t const data2 =20;
	printf("data2 value --> %u\n",data2);
	//data2=10;
	// degistirmiyor, hata veriyor cunku const bunu salt okunur (ready-only) kiliyor
	printf("new data2 value --> %u\n",data2);

	// data2 nin icerigini degistirmenin yolu pointerdan degistirme

	uint8_t *pData2 = (uint8_t*) &data2;
	*pData2=50;
	printf("new data2 value (pointer changed) --> %u\n",data2);


	waitForUserInput();
}

void waitForUserInput(void){
	printf("\nPlease press the enter button for exit\n");
	while(getchar()!='\n'){

	}
	getchar();
}
