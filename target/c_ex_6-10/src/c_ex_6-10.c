/*
 ============================================================================
 Name        : c_ex_6-10.c
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

	printf("\n\nExercise 6\n\n");
	const uint32_t radius=6;
	volatile float area; volatile float perimeter;
	printf("circle of area --> %.2f\n",(area=3.14*radius*radius));
	printf("circle of perimeter --> %.2f\n",(perimeter=2*3.14*radius));

	printf("\n\nExercise 7\n\n");
	volatile uint32_t a=125, b=12345;
	long ax = 1234567890;
	short s = 4043;
	float x = 2.13459;
	double dx =1.1415927;
	char c='W';
	unsigned long ux = 25415124;

	printf("a + c ---> %d\n", a+c);
	printf("x + c ---> %f\n", x+c);

	printf("\n\nExercise 7\n\n");
	printf("Days convert to years, weeks , days");
	uint32_t inputDays;
	printf("enter your days:\n");
	scanf("%d",&inputDays);
	uint32_t years, weeks, days;
	years=(inputDays/365);
	weeks= ((inputDays % 365)/7);
	days = (inputDays-(years*365+weeks*7));
	printf("years --> %d",years);
	printf("weeks --> %d",weeks);
	printf("days ---> %d",days);

	printf("\n\nExercise 8\n\n");
	volatile uint32_t num1, num2;
	printf("please enter the num1:");
	scanf("%d\n",&num1);
	printf("please enter the num2:");
	scanf("%d\n",&num2);
	printf("your 1-->%d\t 2-->%d\n",num1,num2);
	printf("sum --> %d\n",num1+num2);
	printf("product --> %d\n",num1*num2);

	waitForUserInput();
}

void waitForUserInput(void){
	while(getchar()!='\n'){

	}
	getchar();
}
