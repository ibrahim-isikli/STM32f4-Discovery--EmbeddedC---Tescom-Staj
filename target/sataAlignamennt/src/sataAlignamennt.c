/*
 ============================================================================
 Name        : sataAlignamennt.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include<stdint.h>
void waitForUserInput();

struct dataSet{
	char data1;
	int data2;
	char data3;
	short datat4;
};

int main(void) {
	struct dataSet data;
	data.data1= 0x11;
	data.data2 = 0xFFFFEEEE;
	data.data3 = 0x22;
	data.datat4 = 0xABCD;

	uint8_t *ptr;

	ptr= (uint8_t*) &data; // data nin veri tipi > struct dataSet

	uint32_t totalSize = sizeof(struct dataSet);

	printf("Memory Address				Content\n");
	printf("===========================================\n\n");

	for(uint32_t i=0; i<totalSize; i++){
		printf(" %p %X\n",ptr,*ptr);
		printf(".......................................\n");
		ptr++;
	}

	printf("\nTOTAL SIZE--------> %I32u\n",totalSize);

	waitForUserInput();
}


void waitForUserInput(){
	printf("\n\nPlease press the enter button to exit");
	while(getchar()!='\n'){

	}
	getchar();
}
