/*
 ============================================================================
 Name        : pointer3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include<stdio.h>

long long int g_data=0xFFFEABCD11112345;

int main(void){

	char *pAddress=(char*)&g_data;
	printf("pAddress = %p\n",pAddress);
	printf("pAddress = %p   	value = %d  	hex value = %x\n",pAddress,*pAddress,*pAddress);

	pAddress = pAddress+1;
	printf("pAddress = %p\n",pAddress);
	printf("pAddress = %p   	value = %d 		hex value = %x\n",pAddress,*pAddress,*pAddress);

	pAddress = pAddress+2;
	printf("pAddress = %p\n",pAddress);
	printf("pAddress = %p   	value = %d   	hex value = %x\n",pAddress,*pAddress,*pAddress);



}


