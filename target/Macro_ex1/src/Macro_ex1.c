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

#define PI_VALUE 3.1415f
#define AREA_OF_CIRCLE(x) PI_VALUE*x*x

int main(void) {

	float areaCircle = AREA_OF_CIRCLE(2);
	printf("are=%f\n",areaCircle);
	 waitExit ();
}

void waitExit (void){
	printf("Please press the enter button for exit\n");
	while(getchar()!='\n'){

	}
	getchar();
}
