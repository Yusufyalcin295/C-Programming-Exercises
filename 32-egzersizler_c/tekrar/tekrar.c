#include <stdio.h>
#include <stdlib.h>

//**********GİRİLEN SAYININ RAKAMLARI TOPLAMI*********
int main() {

	/*
	// dört basamaklı 

	int number, remainder, sum = 0, section;

	printf("Enter a 4 digit number: ");
	scanf_s("%d", &number);

	section = number / 1000;
	sum += section;
	remainder = number % 1000;
    
	section = remainder / 100;
	sum += section;
	remainder = remainder % 100;

	section = remainder / 10;
	sum += section;
	remainder %= 10;
	sum += remainder;

	printf("\nSum of digit your number:%d", sum);
	*/

	//***alternatif yöntem
	/*
	int number, sum , digit;

	while (1) {
		sum = 0;
		printf("\nEnter a number(press \"-1\" to exit): ");  scanf_s("%d", &number);

		if (number == -1) {


			printf("Program is closed");
			break;

		}

		while (number != 0) {

			digit = number % 10;
			sum += digit;
			number /= 10;
		}

		printf("Sum of digit your number:%d", sum);


	}
	*/
	//*****kenar uzunlukları girilen üçgenin türünü bulma
	/*
	int a, b, c;
	char uzunkenar;

	printf("ucgenin kenarlarini girin:");  scanf_s("%d %d %d", &a, &b, &c);
	 
	if (a > b && a > c) {
		uzunkenar = 'a';
	}
	else if (b > a && b > c) {

		uzunkenar = 'b';
	}
	else {
		uzunkenar = 'c';
	}

	if (uzunkenar == ' a ') {
		if (a * a == b * b + c * c) {
			printf("Dik ucgen\n");
		}
		else if (a * a < b * b + c * c) {
			printf("Dar ucgen\n");
		}
		else if (a * a > b * b + c * c) {
			printf("Genis ucgen\n");
		}
		else {
			printf("Bu kenarlarla ücgen olusmaz\n");

		}

	}
	else if (uzunkenar == 'b') {
		if (b * b == a * a + c * c) {
			printf("Dik ucgen\n");
		}
		else if (b * b < a * a + c * c) {
			printf("Dar ucgen\n");
		}
		else if (b * b > a * a + c * c) {
			printf("Genis ucgen\n");
		}
		else {
			printf("Bu kenarlarla ücgen olusmaz\n");

		}


	}
	else if (uzunkenar == 'c') {
		if (c* c == b * b + a * a) {
			printf("Dik ucgen\n");
		}
		else if (c * c < b * b + a * a) {
			printf("Dar ucgen\n");
		}
		else if (c * c > b * b + a * a) {
			printf("Genis ucgen\n");
		}
		else {
			printf("Bu kenarlarla ücgen olusmaz\n");

		}

	}

	*/

        float time, price; //4 dk için 0.30  fazlası dk için 0.07

		printf("Konusulan sureyi giriniz:");  scanf_s("%f", &time);

		if (time <= 4.0) {

			price = time * 0.30;
			printf("konusma bedeli:%.2f", price);
		}
		else {

			price = 4 * 0.3 + (time - 4) * 0.07;
			printf("Konusma bedeli:%.2f", price);

		}
		




	return 0;
}
