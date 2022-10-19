/*
 ============================================================================
 Name        : averagee.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	float number1, number2,number3;
		float average;

		printf("\nenter first number:");
		fflush(stdout);
		scanf("%f",&number1);
		printf("\nenter second number:");
		fflush(stdout);
		scanf("%f",&number2);
		printf("\nenter third number:");
		fflush(stdout);
		scanf("%f",&number3);

		average= (number1+number2+number3)/3;

		printf("\nAvarege= %f\n",average);
		printf("\n press enter to exit the app");

		while(getchar() !='\n'){

		}
		getchar();


	return EXIT_SUCCESS;
}
