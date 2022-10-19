/*
 ============================================================================
 Name        : ConstAndPointer.c
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

	printf("\n\n const *pValue \n\n");
	uint8_t const value =10;
	uint8_t const *pValue = (uint8_t*) &value;
	printf("value ---> %d\n",value);
	printf("pValue ---> %p\n",pValue);
	/*
	printf("pValue ---> %p\n",pValue);
	printf("pValue ---> %p\n",&value);
	printf("pValue ---> %x\n\n",&value);
	 pointer okuma 3 yontem de ayni */

	pValue =(uint8_t*) 0x50000000;
	printf("new pValue ---> %p\n",pValue); // const *pValue addresi degistiriebilir

	// *pValue=50;
	//fakat icerdigi deger degistirilemez

	printf("\n\n *const pValue \n\n");

	uint8_t value2 = 10;
	uint8_t *const pValue2 = (uint8_t*) &value2;
	printf("value2 ---> %d\n ",value2);
	printf("pValue2 ---> %p\n",pValue2);

	*pValue2=50;
	printf("new value2 ---> %d\n",value2);
	// pValue2 = (uint8_t*)0x50000000; buna izin yok


	printf("\n\n const *const pValue \n\n");
	uint8_t value3 = 10;
	uint8_t const *const pValue3 = (uint8_t*) &value3;
	// ne adres ne de deger degisebilir ikisi de sabit
	waitForUserInput();
}

void waitForUserInput(void){
	printf("\nPlease press the enter button for exit\n");

	while(getchar()!='\n'){

	}
	getchar();
}
