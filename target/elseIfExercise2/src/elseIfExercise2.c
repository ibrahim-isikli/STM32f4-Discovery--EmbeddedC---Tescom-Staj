/*
 ============================================================================
 Name        : elseIfExercise2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

uint64_t income;
uint64_t tax;
double temp_income;
void waitForUserInput(void);

int main(void) {
	printf("Please enter your total income: ");
	scanf("%lf",&temp_income);
	income = (uint64_t) temp_income;

	if(temp_income<0){
		printf("\nincome cannot be negative\n");
		waitForUserInput();
		return 0;
	}

	if(income <= 9525){
		tax=0;
	}
	else if((income>9525)&&(income<=38700)){
		tax=income*0.12;
	}
	else if((income>38700)&&(income<=82500)){
		tax=income*0.22;
	}
	else if(income>82500){
		tax=(income*0.32)+1000;
	}

	printf("\nTax payable : %I64u\n",tax);
	waitForUserInput();
}

void waitForUserInput(void){
	printf("\nPlease press the enter button for exit\n");
	while(getchar()!='\n'){

	}
	getchar();
}
