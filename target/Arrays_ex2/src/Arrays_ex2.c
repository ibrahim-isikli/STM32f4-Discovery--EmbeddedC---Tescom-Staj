/*
 ============================================================================
 Name        : Arrays_ex2.c
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

	uint8_t someDatas[10]={0xFF,0xFF,0xFF}; // bunu boyle birakirsan suna esit olur:
										    // uint8_t someDatas[10]={0xFF,0xFF,0xFF,0,0,0,0,0};
	// someDatas'in sizeofuna bakalim
	printf("sizeof someDatas ---> %d\n",sizeof(someDatas)); // 10 byte 80 bit

	uint8_t someDatasBlank[]={0xFF,0xFF,0xFF};
	// boyle olunca boyutu otamatik ayarlar burda 3 byte bekleriz
	printf("sizeof someDatasBlank ---> %d\n",sizeof(someDatasBlank));

	volatile const int length =10;
	uint8_t someDatasLen[length];
	printf("sizeof somedatasLen ---> %d\n",sizeof(someDatasLen));

	uint8_t datas[10]={0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF};
	printf("\n\n\nbefore data item ---> %X\n",*(datas+1));
	*(datas+1)=0x09;
	printf("after second data item ---> %X\n",*(datas+1));

// arrayden veriye ulasma


	uint8_t newDatas[10]={0xFF,0xFE,0xFF,0xFF,0xFE,0xFD,0xFF,0xFF,0xFF,0xFF};
	printf("\n\n\n newDatas -> first item -> %X\n",newDatas[0]);
	printf("newDatas -> first item -> %X\n",*(newDatas+0));
	printf("newDatas-> second item -> %X\n",newDatas[1]);
	printf("newDatas -> second item -> %X\n",*(newDatas+1));

// array elemanlarini yazdirma

	printf("\n\nnewDatas-> all items: \n");
	for(uint32_t i=0; i<10; i++){
		printf("data %u. items ---> %X\n",i,newDatas[i]);
	}

	waitForUserInput();
}


void waitForUserInput(void){
	printf("Please press the enter button for exit\n\n");
	while(getchar()!='\n'){

	}
	getchar();
}
