/*
 ============================================================================
 Name        : switchCase.c
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
	int8_t code;
	float r, b, h, a;
	float area;
	printf("Area calculation program\n");
	printf("Circle -----> c\n");
	printf("Triangle -----> t\n");
	printf("Trapezoid -----> z\n");
	printf("Square -----> s\n");
	printf("Rectangle -----> r\n");
	printf("\nEnter the code here: \n");
	scanf("%c",&code);


	switch(code){
	case 'c':
		printf("* circle area calculation *\n");
		printf("Please enter radius(r) value: ");
		scanf("%f",&r);
		if(r<0){
			printf("radius cannot be negetive\n");
			area=-1;
		}
		else{
		area= 3.1415*r*r;
		}
		break;
	case 't':
			printf("* triangle area calculation *\n");
			printf("Please enter base value: ");
			scanf("%f",&b);
			printf("Please enter height value: ");
			scanf("%f",&h);
			if((b<0)||(h<0)){
				printf("Base or height cannot be negeative\n");
				area=-1;
			}
			else{
			area= (b*h)/2;
			}
			break;
	case 'z':
			printf("* trapezoid area calculation *\n");
			printf("Please enter base value: ");
			scanf("%f",&b);
			printf("Please enter base 2 value: ");
			scanf("%f",&a);
			printf("Please enter height value: ");
			scanf("%f",&h);
			if((b<0)||(h<0)||(a<0)){
				printf("Base or height cannot be negative");
				area=-a;
			}
			else{
			area= ((b*h)/2)*h;
			}
			break;
	case 's':
			printf("* square area calculation *\n");
			printf("Please enter side(a) value: ");
			scanf("%f",&a);
			if(a<0){
			printf("side cannot be negative");
			}
			else{
			area= a*a;
			}
			break;

	case 'r':
			printf("* rectangle area calculation *\n");
			printf("Please enter width(w) value: ");
			scanf("%f",&a);
			printf("Please enter length(l) value: ");
			scanf("%f",&b);
			if((a<0)||(b<0)){
				printf("width cannot be negatice");
				area=-1;
			}
			else{
			area=a*b;
			}
			break;
	default:
		printf("\nInvalid value\n");
		area=-1;

	}

	if(!(area<0)){
		printf("area = %f",area);
	}

	printf("\nPlease press the enter button for exit\n");
	waitForUserInput();

}

void waitForUserInput(void){
	while(getchar()!='\n'){

	}
	getchar();
}
