/*
 ============================================================================
 Name        : Char_ex1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
void waitExit (void);
int main(void) {

	char name[30];
	printf("enter your name: ");
	scanf("%s",name);
	printf("\nHi %s",name);
	 waitExit ();
}

void waitExit (void){
	printf("Please press the enter button for exit\n");
	while(getchar()!='\n'){

	}
	getchar();
}
