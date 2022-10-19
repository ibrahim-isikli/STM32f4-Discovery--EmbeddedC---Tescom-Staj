/*
 ============================================================================
 Name        : Arrays_ex1.c
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

	uint8_t studentAges[100];
	printf("sizeof ----> %u\n",sizeof(studentAges)); //1*100
	printf("[studentsAges] array address ---> %p\n",studentAges);
	uint32_t studentAges2[100];
	printf("sizeof ----> %u\n",sizeof(studentAges2)); //4*100

	waitForUserInput();
}


void waitForUserInput(void){
	printf("\nPlease press the enter button for exit\n\n");
	while(getchar()!='\n'){
	}
	getchar();

}
