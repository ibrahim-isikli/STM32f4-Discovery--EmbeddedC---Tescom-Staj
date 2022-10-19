/*
 ============================================================================
 Name        : WhileEvenNumbers_ex4.c
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

	int32_t startNum, endNum, even;
	even=0;
	printf("\n---Even Counter--\n\n");
	printf("Enter your start number: ");
	scanf("%d",&startNum);
	printf("Enter your end number: ");
	scanf("%d",&endNum);

	if(endNum<startNum){
		printf("\nError! end number < start number\n");
	}


	while(startNum<=endNum){
		if(!(startNum % 2)){
			printf("%d\n",startNum);
			even++;
		}
		startNum++;
	}

	waitForUserInput();
}

void waitForUserInput(void){
	printf("\nPlease press the enter button for exit\n");
	while(getchar()!='n'){

	}
	getchar();
}
