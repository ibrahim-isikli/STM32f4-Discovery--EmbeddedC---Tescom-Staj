/*
 ============================================================================
 Name        : c_ex_11-15.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <math.h>
void waitForUserInput(void);

int main(void) {

#if 0
	printf("\n\nExample 11\n\n");
	 float item1, weigth1, item2, weigth2;
	 float result;
	printf("please enter the item1:");
	scanf("%f",&item1);
	printf("please enter the weigth1:");
	scanf("%f",&weigth1);
	printf("please enter the item2:");
	scanf("%f",&item2);
	printf("please enter the weigth2:");
	scanf("%f",&weigth2);
	result= (item1*weigth1+item2*weigth2)/(weigth1+weigth2);
	printf("result-->%f",result);
	waitForUserInput();
#endif

#if 0
	printf("\n\nExample 12\n\n");
	char num[8];
	uint32_t salaryAmount;
	uint32_t hour,salary;
	printf("enter your id:");
	scanf("%s",num);
	printf("\nenter your salaryAmount:");
	scanf("%d",&salaryAmount);
	printf("enter your working hour:");
	scanf("%d",&hour);
	salary=salaryAmount*hour;
	printf("your id--> %s \t salary--> %d\n",num,salary);
	waitForUserInput();
#endif

#if 0

	printf("\n\nExample 13\n\n");
	printf("\nFind the max integers\n");
	uint32_t num1, num2, num3;
	printf("enter your numbers\n");
	scanf("%u",&num1);
	scanf("%u",&num2);
	scanf("%u",&num3);

	if(num1<0 && num2<0 && num3<0){
		printf("\n\n numbers must be positive please enter the positive numbers\n\n");

	}
	if(num1>num2 && num1>num3){
		if(num2>num3){
			printf("%d>%d>%d",num1,num2,num3);
		}
		else{
			printf("%d>%d>%d",num1,num3,num2);
		}
	}

	if(num2>num1 && num2>num1){
			if(num1>num3){
				printf("%d>%d>%d",num2,num1,num3);
			}
			else{
				printf("%d>%d>%d",num2,num3,num1);
			}
		}

	if(num3>num2 && num3>num1){
			if(num2>num1){
				printf("%d>%d>%d",num3,num2,num1);
			}
			else{
				printf("%d>%d>%d",num3,num1,num2);
			}
		}

	waitForUserInput();
#endif

#if 0
	float distance,litre;
	float average;
	printf("\n\nExercise 114\n\n");
	printf("Please enter your total distance:\n");
	scanf("%f",&distance);
	printf("Please fuel spent in liters (for 1km):\n");
	scanf("%f",&litre);
	average=(distance/litre);
	printf("\n\n your average consumption: %f",average);
	waitForUserInput();
#endif

#if 0
    float x1, y1, x2, y2, gdistance;
    	printf("Input x1: ");
    	scanf("%f", &x1);
    	printf("Input y1: ");
    	scanf("%f", &y1);
    	printf("Input x2: ");
    	scanf("%f", &x2);
    	printf("Input y2: ");
    	scanf("%f", &y2);
    	gdistance = ((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
    	printf("Distance between the said points: %.4f", sqrt(gdistance));
    	printf("\n");
    waitForUserInput();

#endif
}


void waitForUserInput(void){
	while(getchar()!='\n'){

	}
	getchar();
}
