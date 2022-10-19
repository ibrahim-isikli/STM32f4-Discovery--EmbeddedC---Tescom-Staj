/*
 ============================================================================
 Name        : pointers.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {


	char data = 100;
	printf("value of data = %d\n",data);
	printf("Address of the variable data is = %p\n",&data);

	char* pAdress=&data;

	char value = *pAdress;
	printf("value = %d\n",value);

	*pAdress=65;
	printf("value of data = %d\n",data);

	while(getchar()!='\n'){
	}
	getchar();

}
