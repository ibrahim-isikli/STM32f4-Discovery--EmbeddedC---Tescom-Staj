/*
 ============================================================================
 Name        : elseIfExercise.c
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

	float income,taxRate;
	float result;
	printf("Please enter your total income: \n");
	if(scanf("%f",&income)==0){
		printf("Warning ! invalid value, press the enter button for exit");
		waitForUserInput();
		return 0;
	}

	if(income<9525){
		printf("Your percentage of tax ---> 0\n");
		printf("Result ---> 0\n");
		waitForUserInput();
		return 0;
	}
	else if((9525<income)&&(income<38700)){
		taxRate=12;
		result=income*(taxRate/100);
		printf("Your percentage of tax ---> 12\n");
		printf("Result ---> %f\n",result);
		waitForUserInput();
		return 0;
	}
	else if((38701<income)&&(income<82500)){
		taxRate=22;
		result=income*(taxRate/100);
		printf("Your percentage of tax ---> 22\n");
		printf("Result ---> %f\n",result);
		waitForUserInput();
		return 0;

	}
	else if(income>82500){
		taxRate=32;
		result=income*(taxRate/100);
		result = result+1000;
		printf("Your percentage of tax ---> 32\n");
		printf("Result ---> %f\n",result);
		waitForUserInput();
		return 0;
	}
	else{
		printf("Warning! invalid value\n");
		waitForUserInput();
		return 0;
	}
}


void waitForUserInput(void){
	printf("\nPlease press the enter button for exit\n");
	while(getchar()!='\n'){

	}
	getchar();
}
