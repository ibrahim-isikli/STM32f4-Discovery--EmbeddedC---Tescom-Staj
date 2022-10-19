/*
 ============================================================================
 Name        : structlar.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

struct car{
	uint8_t model;
	uint32_t speed;
}__attribute__((packed));

int main(void) {
	struct car bmw={0,0};
	printf("size of struct bwm %d byte \n",sizeof(struct car));
	getchar();
}
