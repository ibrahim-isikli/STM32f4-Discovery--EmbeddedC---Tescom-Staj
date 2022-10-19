/*
 ============================================================================
 Name        : Structure_ex1.c
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

struct carModel{
	unsigned carNumber;
	uint32_t carPrice;
	uint16_t carMaxSpeed;
	float carWeight;
};

int main(void) {

	struct carModel carBMW = {2021,15000,220,1330};
	struct carModel  carFord ={4031,35000,160,1900.96};
	struct carModel  carHonda ={.carNumber=2012,.carPrice=20000,.carMaxSpeed=230,.carWeight=1600};

	printf("Details of car BMW is as follows\n");
	printf(" Number --> %u\n",carBMW.carNumber);
	printf(" Price --> %u\n",carBMW.carPrice);
	printf(" Max Speed --> %u\n",carBMW.carMaxSpeed);
	printf(" Weight --> %f\n",carBMW.carWeight);

	printf("\n\n Deatils of car Ford is as follows\n");
	printf(" Number --> %u\n",carFord.carNumber);
	printf(" Price --> %u\n",carFord.carPrice);
	printf(" Max Speed --> %u\n",carFord.carMaxSpeed);
	printf(" Weight --> %f\n",carFord.carWeight);

	printf("\n\nDetails of car Honda is as follows\n");
	printf(" Number --> %u\n",carHonda.carNumber);
	printf(" Price --> %u\n",carHonda.carPrice);
	printf(" Max Speed --> %u\n",carHonda.carMaxSpeed);

	waitForUserInput();
}

void waitForUserInput(void){
	printf("\nPlease press the enter button for exit\n");
	while(getchar()!='\n'){

	}
	getchar();
}
