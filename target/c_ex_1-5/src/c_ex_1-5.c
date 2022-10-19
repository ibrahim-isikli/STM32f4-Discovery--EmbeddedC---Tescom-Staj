/*
 ============================================================================
 Name        : c_ex_1-5.c
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

	printf("\n\nExercise 1\n\n");
	printf("Name:Ibrahim\nDOB:12.03.2000\nMobile:05537109477");

	printf("\n\nExercise 2\n\n");
#if __STDC_VERSION__ >=  201710L
  printf("We are using C18!\n");
#elif __STDC_VERSION__ >= 201112L
  printf("We are using C11!\n");
#elif __STDC_VERSION__ >= 199901L
  printf("We are using C99!\n");
#else
  printf("We are using C89/C90!\n");
#endif

  printf("\n\nExercise 3\n\n");
  printf("*************\n");
  printf("*\n");
  printf("*************\n");
  printf("*\n");
  printf("*\n");
  printf("*\n");
  printf("*\n");

  printf("\n\nExercise 4\n\n");
  const char1='X'; const char2='L'; const char3='M';
  printf("The reverse of %c%c%c --> %c%c%c",char1,char2,char3,char3,char2,char1);

  printf("\n\nExercise 5\n\n");
  printf("Rectangle perimeter or area calculator\n");
  uint32_t const heigth=7; uint32_t width=5;
  uint32_t const area = (heigth*width)/2;
  uint32_t const perimeter = (heigth+width)*2;
  printf("\nArea-->%u \n Perimeter--> %u\n",area,perimeter);


waitForUserInput();
}


void waitForUserInput(void){
	while(getchar()!='\n'){

	}
	getchar();
}

