/*
 ============================================================================
 Name        : WhileEvenNumbers_ex3.c
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

	int32_t onset,last;
	int32_t counter=0;

	printf("--- Count Even NUmbers Programs---\n\n");
	printf("Please enter your onset number: ");
	scanf("%d",&onset);
	printf("Please enter your last number: ");
	scanf("%d",&last);

	if(onset>last){
		printf("Warning! must be onset number> last number\n");
		waitForUserInput();
	}

	else{

	if(onset%2 == 0){
		while(onset<last){
				printf("--> %d\n",onset=onset+2);
				counter++;
			}
	}

	else{
			onset=onset+1;
			printf("--> %d\n",onset);
			while(onset<last){
				printf("--> %d\n",onset=onset+2);
				counter++;
				}
	}

	printf("\n\nYour counter ----> %d",counter);

	waitForUserInput();
	}
}

void waitForUserInput(void){
	printf("\n\nPlease press the enter button for exit\n\n");
	while(getchar()!='\n'){

	}
	getchar();
}
