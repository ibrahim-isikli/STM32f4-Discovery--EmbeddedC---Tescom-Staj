/*
 ============================================================================
 Name        : While1to10_ex2.c
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

	uint8_t num;
	int press;

	printf("***1-to-10***\n\n");
	printf("Press the 1 button for run: \n");
	scanf("%d",&press);

	if(1 == press ){

		while(num<=10){
			printf("number : %d\n",num++);
			}
			waitForUserInput();
	}
	else{
		printf("invalid value\n");
		waitForUserInput();
	}
}

void waitForUserInput(void){
	printf("Please press the enter button for exit");
	while(getchar()!='\n'){

	}
	getchar();
}
