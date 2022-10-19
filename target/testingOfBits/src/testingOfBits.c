/*
 ============================================================================
 Name        : testingOfBits.c
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
	int32_t num1;
	printf("\n******CHECK ODD OR EVEN NUMBER*****\n\n");
	printf("Please enter your number: \n");
	scanf("%d",&num1);

	if(num1 & 1){
		printf("%d number is odd\n",num1);
	}
	else{
		printf("%d number is even\n",num1);
	}

waitForUserInput();
}

void waitForUserInput(void){
	printf("Please press the enter button for exit");
	while(getchar()!='\n'){

	}
	getchar();
}
