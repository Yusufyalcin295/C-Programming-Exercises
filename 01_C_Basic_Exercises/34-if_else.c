#include<stdio.h>
#include<stdlib.h>

////*********İF ELSE PROBLEMLERİ******



int main() {
    
	//****ARTIK YIL BULMA*****
	/*
	int year;

	printf("Enter a year:"); scanf_s("%d", &year);
	 
	if (year % 4 == 0) {
		if (year % 100 == 0) {
			if (year % 400 == 0) {
				printf("This is a leap year!");
			}
			else {
				printf("This is a not leap year!");
			}
		}   
		else {
			printf("This is a leap year!");
		}
	}
	else {
		printf("This is a not leap year!");
	}
	*/

	//-------ÜÇGEN  ÇEŞİDİ BELİRLEME-----
	/*
	int a, b, c;

	printf("Enter tree edge the lenght of the triangle:"); scanf_s("%d %d %d ", &a,& b, &c);

	if (a + b > c || a + c > b || b + c > a) {

		if (a*a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b) {
			printf("Bu bir dik ucgendir");
		}
		else if (a * a > b * b + c * c || b * b > a * a + c * c || c * c > a * a + b * b) {
			printf("Bu bir genis acili ucgendir");
		}
		else if (a * a < b * b + c * c || b * b < a * a + c * c || c * c < a * a + b * b) {
			printf("Bu bir dar acili ucgendir");
		}
	}
	else {
		printf("Bu bir ucgen olusturmaz");
	}
	*/

	//---------BANKA HESAP  BAKİYE DURUMU------

	float bakiye=1000, tutar;
	int secim;
	printf("Para eklemek için 1 secin.\n");
	printf("Para cekmek için 2 secin.\n");
	printf("Bakiye durumunu ogrenmek  icin 3 secin.\n");
	printf("Bir secim yapin:\n");  scanf_s("%d", &secim);

	if (secim == 1) {
		printf("Eklemek istediginiz tutarı girin:"); scanf_s("%f", &tutar);
		if (tutar > 0) {
			bakiye += tutar;
			printf("Yeni bakiyeniz:%.2f", bakiye);
		}
		else {
			printf("Gecerli bir tutar giriniz!");
		}
	}
	else if (secim == 2) {
		printf("Cekmek istediginiz tutarı girin:"); scanf_s("%f", &tutar);
		if(tutar>0 &&tutar<=bakiye){
			bakiye -= tutar;
			printf("Bakiyenizden %.2f miktar basarılı bir sekilde cekildi.", tutar);
		}
		else if (tutar > bakiye) {
			printf("Bakiyeniz yetersiz!");
		}
		else {
			printf("Gecerli bir tutar giriniz!");
		}
	}
	else if (secim == 3) {
		printf("Bakiyeniz:%.2f", bakiye);
	}

	else {
		printf("Gecerli bir secim giriniz!");
	}
	return 0;
}
