/*
 ============================================================================
 Name        : ifExercise4.c
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
	printf("***compare two integers***\n\n");
	float numb1, numb2;
	printf("Please enter your first number: ");

	if(scanf("%f",&numb1) == 0){
		printf("\nWarning! invalid input --> exiting\n");
			while(getchar()!='\n'){

			}
		getchar();
		return 0;
	}

	printf("\nPlease enter your second number: ");

	if(scanf("%f",&numb2) == 0){
		printf("\nWarning! invalid input --> exiting\n");
		while(getchar()!='\n'){

		}
		getchar();
		return 0;
	}

	int32_t n1, n2;

	n1=numb1;
	n2=numb2;

	if(n1 != numb1 || n2 != numb2){
		printf("\n\nWarning ! comparing only integer part !");
	}

	if(n1>n2){
		printf("\nresult --> %d > %d",n1,n2);
	}
	else if(n2>n1){
		printf("\nresult --> %d > %d",n1,n2);
	}
	else if(n1==n2){
		printf("\nresult --> %d = %d",n1,n2);
	}

	while(getchar()!='\n'){

	}
	getchar();

}
