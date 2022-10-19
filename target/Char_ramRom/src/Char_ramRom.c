/*
 ============================================================================
 Name        : Char_ramRom.c
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
	char msg[]="Hello how are you?";
	printf("Message ---> %s\n",msg);
	waitForUserInput();
}


void waitForUserInput(void){
	printf("\n\nPress the enter button for exit\n\n");
	while(getchar()!='\n'){

	}
	getchar();
}
