/*
 ============================================================================
 Name        : ascii2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	char c1,c2,c3,c4,c5,c6;
	    printf("Enter any 6 characters of your choice \n");

	    c1 = getchar();
	    getchar();
	    c2 = getchar();
	    getchar();
	    c3 = getchar();
	    getchar();
	    c4 = getchar();
	    getchar();
	    c5 = getchar();
	    getchar();
	    c6 = getchar();

		printf("ASCII codes:%u,%u,%u,%u,%u,%u",c1, c2, c3, c4, c5, c6);

		printf("\n press enter to exit the app");

		while(getchar() !='\n'){

		}
		getchar();

}
