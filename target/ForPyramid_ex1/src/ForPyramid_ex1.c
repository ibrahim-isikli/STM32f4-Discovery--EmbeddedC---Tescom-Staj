/*
 ============================================================================
 Name        : ForPyramid_ex1.c
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

	int32_t height;
	printf("***PYRAMID***\n\n");
	printf("Please enter your height: ");
	scanf("%d",&height);



	if(height>0){


	for(int32_t i=1;i<=height;i++){
		printf("\n");
		for(int32_t j=1;j<=i;j++){
			printf("%d\t",j);
		}
	}

	printf("\n\n\n\n");

	for(int32_t i=1;i<=height;i++){
			printf("\n");
			for(int32_t j=i; j>0; j--){
				printf("%d\t",j);
			}
		}

	waitForUserInput();
	}

	else{
		printf("\n\nWarning! height must be positive number");
		waitForUserInput();
	}
}


void waitForUserInput(void){
	printf("\n\nPlease press the enter button for exit");
	while(getchar()!='\n'){

	}
	getchar();
}
