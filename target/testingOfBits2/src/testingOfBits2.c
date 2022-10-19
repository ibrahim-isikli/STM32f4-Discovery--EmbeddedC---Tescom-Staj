/*
 ============================================================================
 Name        : testingOfBits2.c
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
	//settingOfBits

	int32_t num1, output;
	printf("enter a number: \n");
	scanf("%d",&num1);

	output= num1 | 0x90;
	printf("[input] = 0x%x\n",num1);
	printf("[output]= 0x%x\n",output);

	waitForUserInput();
}


void waitForUserInput(void){
	printf("Please press the enter button for exit");
	while(getchar()!='\n'){

	}
	getchar();
}
