#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//*****************************POINTER ARRAY RELATIONNSHIP*****************************\\


int main() {


	/*
	char name[10];

	printf("Dizinin ilk elemaninin adresi:%x\n\n", &name[0]); 
	printf("Dizi adi:%x\n", name);   // Demek ki dizinin ismi aynı zamanda o dizinin ilk elemaninin bellek adresini tututyor.*/
	
	/*
	name=&dizi[0];   // Bu şekilde dizinin diğer elemanlarinin adresini de bulabiliriz.
	name+1=&dizi[1];
	name+2=&dizi[2];
	name+3=&dizi[3];
	...

	*/

	/*
	*name=dizi[0];   // Bu şekilde de dizinin diğer elemanlarinin değerini bulabilirz.
	*name=dizi[1];
	*name=dizi[2];
	*name=dizi[3];
	...

	*/

	/*
	char mySurname[10] = { 'y','a','l','c','i','n' };
	//mySurname  ya da *mySurname şeklinde kullanbilirz 

	printf("Dizinin ilk elemaninin adresi:%x\n", &mySurname[0]);
	printf("Dizinin ilk elemaninin adresi:%x\n", &mySurname);

	printf("Dizinin ikinci elemaninin adresi:%x\n", &mySurname[1]);
	printf("Dizinin ikinci elemaninin adresi:%x\n", mySurname+1);

	printf("Dizinin ilk elemaninin degeri:%c\n", (mySurname[0]));
	printf("Dizinin ilk elemaninin degeri:%c\n", *(mySurname));

	printf("Dizinin ikinci elemaninin degeri:%c\n", mySurname[1]);
	printf("Dizinin ikinici elemaninin degeri:%c\n", *(mySurname+1));
	*/

	char myFilm[15] = { 'A','V','A','T','A','R' };
	int numbers[8] = { 8,9,12,45,6,63,7,4 };
	
	printf("********  myFilm ARRAY ******* \n\n");

	for (int i = 0; i < 6; i++) {

		printf("myFilm[%d]=%c\n\n", i, *(myFilm + i));
	}

	printf("******** numbers ARRAY ******* \n\n");

	for (int i = 0; i < 8; i++) {

		printf("numbers[%d]=%d\n\n", i, *(numbers + i));
	}











	return 0;
}
