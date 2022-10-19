/*
 ============================================================================
 Name        : WhileEvenNumbers_ex5.c
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

	int32_t start, end;
	uint32_t even;
	printf("\nEven starting and ending numbers(give space between 2 number): ");
	scanf("%d %d",&start,&end);

	if(end<start){
		printf("ending number should be > starting number\n");
		waitForUserInput();
		return 0;
	}

	printf("Even numbers are: \n");

		while(start < end){

			if((start%2)==0){
				printf("%4d\t",start);
				even++;
			}
			start++;
		}
		printf("\n\nYour total even numbers: %d",even);
	waitForUserInput();
}

void waitForUserInput(void){
	printf("Please press the enter button for exit");
	while(getchar()!='\n'){

	}
	getchar();
}
