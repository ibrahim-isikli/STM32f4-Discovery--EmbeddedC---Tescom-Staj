/*
 ============================================================================
 Name        : bitwiseAndOr.c
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

	int32_t num1,num2;
	printf("enter your first number: \n");
	scanf("%d",&num1);
	printf("enter your second number: \n");
	scanf("%d",&num2);

	printf("bitwise AND(&): %d\n",num1&num2);
	printf("bitwise OR(|): %d\n",num1|num2);
	printf("bitwise XOR(^): %d\n",num1^num2);
	printf("bitwise a NOT(~): %d\n",~num1);
	printf("bitwise b NOT(~): %d\n",~num2);

	waitForUserInput();


}


void waitForUserInput(void){

	printf("plese press the enter button for exit");

	while(getchar()!='\n'){

	}
	getchar();
}
