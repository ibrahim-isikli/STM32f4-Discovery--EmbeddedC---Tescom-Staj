/*
 ============================================================================
 Name        : StructPadding.c
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

struct dataSet {
	char data1;
	int data2;
	char data3;
	short data4;
};

int main(void) {
	struct dataSet data;
	data.data1= 0xAA;
	data.data2= 0xFFFFEEEE;
	data.data3=0x55;
	data.data4=0xA5A5;

	printf("data.data1 (char) ----> %d\n ",data.data1);
	printf("data.data2 (int) ----> %d\n ",data.data2);
	printf("data.data3 (char) ----> %d\n ",data.data3);
	printf("data.data4 (short) ----> %d\n ",data.data4);


	waitForUserInput();
}


void waitForUserInput(void){
	printf("\nPlease press the enter button for exit\n\n");
	while(getchar()!='\n'){

	}
	getchar();
}

/*NOTLAR
 *
 * dissambly ekraninda
 * 'strb' ---> belleğe bayt depolama talimatıdır
 *  'str' ----> belleğe bir kelime depolama talimatıdır
 * 'strh' ---> yarim kelimeyi sakla
 * strh sıralılarda calisir yani aligned ise konum ortusuyor ise tekte o konuma datayi yazar gecer
 *  sata atamalarından sonra 3 assembly kodu var
