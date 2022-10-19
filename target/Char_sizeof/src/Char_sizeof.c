/*
 ============================================================================
 Name        : Char_sizeof.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
void waitExit(void);

int main(void) {
	const char message1[10]="hello";
	const char message2[]="hello";

	printf("\nsize of message1--->%d\n",sizeof(message1));
	printf("\nsize of message2--->%d\n",sizeof(message2));

	printf("\nsize of message1--->%d\n",strlen(message1));
	printf("\nsize of message2--->%d\n",strlen(message2));






	waitExit();
}

void waitExit(void){
	printf("\nPlease press the enter button for exit..\n");
	while(getchar()!='\n'){

	}
	getchar();
}
