/*
 ============================================================================
 Name        : pointer2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

long long int g_data=0xFFFEABCD11112345; //64 bit 16byte
int main(void) {

	char *pAddress1;
	pAddress1=(char*)&g_data;
	printf("---char--- value at address1 %p is : %x\n",pAddress1,*pAddress1); // 1byte 8bit


	int *pAddress2;
	pAddress2=(int*)&g_data;
	printf("---int--- value at address2 %p is: %x\n",pAddress2,*pAddress2); //4 byte 32bit

	short *pAddress3;
	pAddress3=(short*)&g_data;
	printf("---short--- value at address3 %p is: %x\n",pAddress3,*pAddress3); //2 byte 8bit

	long long int *pAddress4;
	pAddress4=(long long int*)&g_data;
	printf("---long long--- value at address4  %p  %I64x",pAddress4,&pAddress4);


}
