#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
void waitForUserInput(void);

struct dataSet{
	char data1;
	int data2;
	char data3;
	short data4;
} ;

int main(void) {
	struct dataSet data;
	data.data1= 0xAA;
	data.data2= 0xFFFFEEEE;
	data.data3=0x55;
	data.data4=0xA5A5;

	printf("\nBefora data.data= %X\n",data.data1);

	struct dataSet *pData;
	pData=&data;
	pData->data1=0x55;

	printf("After dataSet data= %X\n",data.data1);
	waitForUserInput();
}


void waitForUserInput(void){
	printf("\nPlease press the enter button for exit\n\n");
	while(getchar()!='\n'){

	}
	getchar();
}
