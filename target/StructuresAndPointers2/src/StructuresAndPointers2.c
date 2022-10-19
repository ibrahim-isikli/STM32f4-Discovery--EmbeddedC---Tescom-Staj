#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
void waitForUserInput(void);


struct dataSet{
	char data1;
	int data2;
	char data3;
	short data4;
};

void displayMemberElements(struct dataSet *pData);

int main(void) {
	struct dataSet data;
	data.data1= 0xAA;
	data.data2= 0xFFFFEEEE;
	data.data3=0x55;
	data.data4=0xA5A5;

	displayMemberElements(&data);
	waitForUserInput();
}


void waitForUserInput(void){
	printf("\nPlease press the enter button for exit\n\n");
	while(getchar()!='\n'){

	}
	getchar();
}

void displayMemberElements(struct dataSet *pData){
	printf("data1 --> %X\n", pData->data1);
	printf("data2 --> %X\n", pData->data2);
	printf("data3 --> %X\n", pData->data3);
	printf("data4 --> %X\n", pData->data4);
}
