/*
 ============================================================================
 Name        : ifExercise2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>



int main(void) {

	int sayi1=0;
	int sayi2=0;

	printf("***kullanicidan alinana sayilari karsilastirma***\n\n");
	printf("lutfen birinci sayiyi giriniz: ");
	scanf("%d",&sayi1);
	printf("lutfen ikinci sayiyi giriniz: ");
	scanf("%d",&sayi2);

	if(sayi1>sayi2){
		printf("sonuc: %d > %d\n",sayi1,sayi2);
	}

	else if(sayi1<sayi2){
		printf("sonuc: %d > %d\n",sayi2,sayi1);
	}
	else if(){
		printf("sonuc: %d = %d\n",sayi1,sayi2);
	}

	while(getchar()!='\n'){

	}
	getchar();
}
