/*
 ============================================================================
 Name        : ifExercise.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int yas;

int main(void) {

	printf("***** Oy Yasi Kontrolu *****\n\n");
	printf("lutfen yasinizi girin: ");
	scanf("%d",&yas);

	if(yas>=18){
		printf("oy kullanabilirsiniz.");
	}
	else{
		printf("oy kullanamazsiniz");
	}

	while(getchar()!='\n'){

	}

	getchar();

}
