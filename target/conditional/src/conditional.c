/*
 ============================================================================
 Name        : conditional.c
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

	int32_t a = (5+9)?(2+1):99;
	printf("a nin sonucu %I32x \n\n",a);

	int age;
	printf("enter your age: \n");
	scanf("%d",&age);
	(age<18)?printf("oy kullanamaz\n"):printf("oy kullanabilir");



	while(getchar()!='\n'){

	}
	getchar();
}
