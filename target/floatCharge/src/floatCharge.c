/*
 ============================================================================
 Name        : floatCharge.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	double charge, chargeE;
	double electrons;

	printf("please enter the charge: ",charge);
	scanf("%lf",&charge);
	printf("\nplease enter the electron charge");
	scanf("%lf",&chargeE);

	electrons = (charge/chargeE)*-1;

	printf("\nelectrons=%lf",electrons);
	printf("\nelectrons=%le",electrons);

	printf("\n press the enter key to exit ");

	while(getchar()!='\n'){
	}

	getchar();

}
