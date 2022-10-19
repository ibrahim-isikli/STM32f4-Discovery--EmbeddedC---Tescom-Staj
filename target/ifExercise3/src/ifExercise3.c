/*
 ============================================================================
 Name        : ifExercise3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(void) {

	int32_t num1, num2;
	printf("***numara karsilastirma***\n\n");
	//printf("size --> %d\n",sizeof(num1));
	printf("Please enter your first number: ");
	scanf("%d",&num1);
	printf("\nPlease enter your second number: ");
	scanf("%d",&num2);

	if(num1>num2){
		printf("result --> %d > %d\n",num1,num2);
	}

	else if(num2>num1){
	printf("result --> %d > %d\n",num2,num1);
	}

	else if(num1==num2){
		printf("result --> %d = %d",num1,num2);
	}

	while(getchar()!='\n'){

	}
	getchar();


}
