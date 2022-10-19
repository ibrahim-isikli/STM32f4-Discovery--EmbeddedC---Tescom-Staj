/*
 ============================================================================
 Name        : struct_union_farki.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

struct address_struct{
	uint16_t shortAdress; // 2 byte
	uint32_t longAddress; // 4 byte
}; // toplam 6 byte ama padding de eklenecek

struct address_struct2{
	uint16_t shortAdress; // 2 byte
	uint32_t longAddress; // 4 byte
}__attribute__((packed)); // toplam 6 byte (no padding)

union address_union{
	uint16_t shortAddress; // 2 byte
	uint32_t longAddress;  // 4 byte
};	// en uzun elemaninin boyutunu alir
int main(void) {
	printf("size of struct -> %d byte \n", sizeof(struct address_struct));
	printf("size of struct2 -> %d byte \n", sizeof(struct address_struct2));
	printf("size of union -> %d  byte \n", sizeof(union address_union));
	getchar();
}

