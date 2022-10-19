/*
 ============================================================================
 Name        : ascii.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	char c1, c2, c3, c4, c5, c6;
	printf("6 karakter gir: ");
	scanf("%c %c %c %c %c %c",&c1, &c2, &c3, &c4, &c5, &c6);
	printf("ASCII codes:%u,%u,%u,%u,%u,%u",c1, c2, c3, c4, c5, c6);

	printf("\n press enter to exit the app");

	while(getchar() !='\n'){

	}
	getchar();
}
