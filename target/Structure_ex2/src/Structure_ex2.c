/*
 ============================================================================
 Name        : Structure_ex2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include<stdint.h>
void waitForUserInput(void);
void car (void);
void market (void);


struct carData{
	unsigned const model;
	unsigned const speed;
	unsigned const price;
	float const weight;
};

int main(void) {

	static uint32_t number;

	printf("\n*** Car Market ***\n");
	printf("Plese select your car: \n");
	printf("1-->Honda\n2-->Ford\n3-->Hyundai\n4-->Tofas\n5-->Toyota\n6-->Fiat\n7-->Nissan\n");
	printf("\nPlease enter car number: ");
	scanf("%d",&number);
		struct  carData const Honda = {.model=2020,.price=10000,.speed=220,.weight=20};
		struct  carData const Ford = {.model=2017,.price=20000,.speed=120,.weight=30};
		struct  carData const Hyundai = {.model=2018,.price=2300,.speed=340,.weight=50};
		struct  carData const Tofas = {.model=1999,.price=100,.speed=100,.weight=12};
		struct  carData const Toyota = {.model=2013,.price=1234,.speed=360,.weight=213};
		struct  carData const Fiat = {.model=2021,.price=124,.speed=980,.weight=178};
		struct  carData const Nissan = {.model=2018,.price=2345,.speed=340,.weight=487};

	if(1==number){
		printf("***HONDA***\n\n");
		printf("Model ---> %u\n",Honda.model);
		printf("Price ---> %u\n",Honda.price);
		printf("Speed ---> %u\n",Honda.speed);
		printf("Weight --->%f\n",Honda.weight);
		market();
	}

	else if(2==number){
		printf("***FORD***\n\n");
		printf("Model ---> %u\n",Ford.model);
		printf("Price ---> %u\n",Ford.price);
		printf("Speed ---> %u\n",Ford.speed);
		printf("Weight --> %f\n",Ford.weight);
		market();
	}
	else if(3==number){
		printf("***Hyundai***\n\n");
		printf("Model ---> %u\n",Hyundai.model);
		printf("Price ---> %u\n",Hyundai.price);
		printf("Speed --> %u\n",Hyundai.speed);
		printf("Weigth --> %f\n",Hyundai.weight);
		market();
	}

	else if(4 == number){
				printf("***TOFAS***\n\n");
				printf("Model ---> %u\n",Tofas.model);
				printf("Price ---> %u\n",Tofas.price);
				printf("Speed --> %u\n",Tofas.speed);
				printf("Weigth --> %f\n",Tofas.weight);
				market();
	}

	else if(5 == number){
					printf("***TOYOTA***\n\n");
					printf("Model ---> %u\n",Toyota.model);
					printf("Price ---> %u\n",Toyota.price);
					printf("Speed --> %u\n",Toyota.speed);
					printf("Weigth --> %f\n",Toyota.weight);
					market();
		}
	else if(6 == number){
					printf("***FIAT***\n\n");
					printf("Model ---> %u\n",Fiat.model);
					printf("Price ---> %u\n",Fiat.price);
					printf("Speed --> %u\n",Fiat.speed);
					printf("Weigth --> %f\n",Fiat.weight);
					market();
		}
	else if(7== number){
					printf("***Nissan***\n\n");
					printf("Model ---> %u\n",Nissan.model);
					printf("Price ---> %u\n",Nissan.price);
					printf("Speed --> %u\n",Nissan.speed);
					printf("Weigth --> %f\n",Nissan.weight);
					market();
		}
	waitForUserInput();
}

void waitForUserInput(void){
	printf("\nPlease press the enter button for exit\n");
	while(getchar()!='\n'){
	}
	getchar();
}

void market (void){
	printf("Please press the enter button for returning the car market\n");

	while(getchar()!='\n'){

	}
	getchar();
	return main();
}
