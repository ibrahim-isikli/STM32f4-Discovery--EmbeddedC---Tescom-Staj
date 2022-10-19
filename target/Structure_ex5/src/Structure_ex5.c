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

struct Packet{
		uint8_t crc			:2;  // crc -> 2 bit olmali
		uint8_t status		:1; // 1 bit
		uint16_t payload	:12; // 12 bit
		uint8_t bat			:3; // 3
		uint8_t sensor		:3; // 3
		uint8_t longAddr	:8; // 8
		uint8_t shortAddr	:2; // 2
		uint8_t addrMode	:1; // 1
};

int main(void) {

	uint32_t packetValue;
	printf("enter the 32 bit packet value: ");
	scanf("%u",&packetValue);
	struct Packet packet;

	packet.crc = (uint8_t) (packetValue & 0x3);
	packet.status = (uint8_t) ((packetValue>>2) & 0x1);
	packet.payload = (uint16_t) ((packetValue>>3) & 0xFFF);
	packet.bat = (uint8_t) ((packetValue>>15) & 0x7);
	packet.sensor = (uint8_t) ((packetValue>>18) & 0x7);
	packet.longAddr = (uint8_t) ((packetValue>>21) & 0xFF);
	packet.shortAddr = (uint8_t) ((packetValue>>29) & 0x3);
	packet.addrMode = (uint8_t) ((packetValue>>31) & 0x1);

	printf("crc ---> %#x\n",packet.crc);
	printf("status ---> %#x\n",packet.status);
	printf("payload ---> %#x\n",packet.payload);
	printf("bat ---> %#x\n",packet.bat);
	printf("longAddr ---> %#x\n",packet.longAddr);
	printf("shortAddr ---> %3x\n",packet.shortAddr);
	printf("addrMode ---> %#x\n",packet.addrMode);

	printf("\nstruct size of --> %I32u\n",sizeof(packet));

	waitForUserInput();
}

void waitForUserInput(void){
	printf("\nPlease press the enter button for exit\n\n");
	while(getchar()!='\n'){
	}
	getchar();
}
