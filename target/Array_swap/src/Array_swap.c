/*
 ============================================================================
 Name        : Array_swap.c
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
void displayArray(uint8_t *pArray1, uint32_t nitem);
int main(void) {

	uint32_t nItems1, nItems2;
	printf("*** ARRAY SWAPING PROGRAM***\n\n");
	printf("Please enter your first array size: ");
	scanf("%d\n",&nItems1);
	printf("Please enter your second array size: ");
	scanf("%d\n",&nItems2);

	if((nItems1 < 0) ||(nItems2 < 0)){
		printf("\nArrays size cannot be negative\n");
		waitExit();
		return 0;
	}

	int32_t array1[nItems1];
	int32_t array2[nItems2];

	for(uint32_t i=0; i<nItems1; i++){
		printf("enter %u elements of array1 --->",i);
		scanf("%d",&array1[i]);
	}

	for(uint32_t i=0; i<nItems2; i++){
			printf(" enter %u elements of array2 --->",i);
			scanf("%d",&array2[i]);
		}

	displayArray(array1,nItems1);
	printf("\n");
	displayArray(array2,nItems2);
	printf("\n");


	waitExit();
}

void displayArray(uint8_t *pArray1, uint32_t nitem){

	for(uint32_t i=0; i<nitem; i++){
		printf("%4d\t",pArray1[i]);
	}

}

void waitExit(void){
	printf("\n\nPlease press the enter button for exit\n\n");
	while(getchar()!='\n'){

	}
	getchar();
}
