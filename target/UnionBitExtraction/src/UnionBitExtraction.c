/*
 ============================================================================
 Name        : Structure_ex4.c
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

union Packet{
	uint32_t packetValue;
	struct{

		uint8_t crc			:2;  // crc -> 2 bit olmali
		uint8_t status		:1; // 1 bit
		uint16_t payload	:12; // 12 bit
		uint8_t bat			:3; // 3
		uint8_t sensor		:3; // 3
		uint8_t longAddr	:8; // 8
		uint8_t shortAddr	:2; // 2
		uint8_t addrMode	:1; // 1
	}packetFields;
};

int main(void) {

	union Packet packet;
	printf("enter the 32 bit packet value: ");
	scanf("%u",&packet.packetValue);


	printf("crc ---> %#x\n",packet.packetFields.crc);
	printf("status ---> %#x\n",packet.packetFields.status);
	printf("payload ---> %#x\n",packet.packetFields.payload);
	printf("bat ---> %#x\n",packet.packetFields.bat);
	printf("longAddr ---> %#x\n",packet.packetFields.longAddr);
	printf("shortAddr ---> %3x\n",packet.packetFields.shortAddr);
	printf("addrMode ---> %#x\n",packet.packetFields.addrMode);

	printf("\nstruct size of --> %I32u\n",sizeof(packet));

	waitForUserInput();
}

void waitForUserInput(void){
	printf("\nPlease press the enter button for exit\n\n");
	while(getchar()!='\n'){
	}
	getchar();
}
