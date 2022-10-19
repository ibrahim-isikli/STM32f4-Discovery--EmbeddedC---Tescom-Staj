/*
 ============================================================================
 Name        : Array_passing_ex1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
void waitExit(void);
void arraySwap(uint8_t  *volatile pFirstArray,uint8_t  *volatile pSecondArray,uint32_t firstSize,uint32_t secondSize);

int main(void) {

	int  firstSize, secondSize;

	printf("\t****ARRAY SWAP***\n\n");
	printf("enter your first array size: ");
	scanf("%d",&firstSize);
	printf("\nenter your second array size: ");
	scanf("%d",&secondSize);
	printf("\n\n");

	uint8_t firstArray[firstSize];
	uint8_t secondArray[secondSize];

	for(uint32_t  i=0; i<firstSize; i++){
		printf("enter your first array %d. item --> ",i);
		scanf("%d",&firstArray[i]);
	}

	printf("\nOK! first array completed\n\n");

	for(uint32_t  j=0; j<secondSize; j++){
			printf("enter your first array %u. item --> ",j);
			scanf("%u",&secondArray[j]);
		}

	printf("\nOK! second array completed\n\n");

	printf("\nyour first array --->\n");
	for(uint32_t k=0; k<firstSize; k++){
		printf("%X\t",firstArray[k]);
	}
	printf("\nyour second array --->\n");
	for(uint32_t t=0; t<secondSize; t++){
		printf("%X\t",secondArray[t]);
	}
printf("\n\nOK!\n\n");


arraySwap(firstArray,secondArray,firstSize,secondSize);

	waitExit();
}


void arraySwap(uint8_t  *volatile pFirstArray,uint8_t  *volatile pSecondArray,uint32_t firstSize,uint32_t secondSize){

	printf("\nSwapping...\n");


	for(uint32_t k=0; k<firstSize; k++){
		pSecondArray[k]=pFirstArray[k];
	}

	for(uint32_t t=0; t<secondSize; t++){
			pFirstArray[t]=pSecondArray[t];
		}

	printf("\nArray1 --->\n");
	for(uint32_t i=0; i<firstSize; i++){
		printf("%X\t",pFirstArray[i]);
	}

	printf("\nArray2 --->\n");
		for(uint32_t j=0; j<secondSize; j++){
			printf("%X\t",pSecondArray[j]);
		}
}

void waitExit(void){
	printf("\n\nPlease press the enter button for exit\n\n");
	while(getchar()!='\n'){

	}
	getchar();
}
