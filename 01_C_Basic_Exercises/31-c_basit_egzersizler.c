#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {

	/*
	int num1, num2, num3, max, min;

	printf("Enter tree number:"); scanf_s("%d %d %d", &num1, &num2, &num3);

	if (num1 > num2 && num1 > num3) {
		max = num1;
	}
	else if (num2 > num1 && num2 > num3) {
		max = num2;
	}
	else {
		max = num3;
	}

	if (num1 < num2 && num1 < num3) {
		min = num1;
	}
	else if (num2 < num1 && num2 < num3) {
		min = num2;
	}
	else {
		min = num3;
	}
	printf("Max:%d\nMin:%d", max, min);

	*/

	//********KENAR UZUNLUĞU VERİLEN ÜÇGENİN TÜRÜNÜ BULMA
	/*
	int a, b, c;
	char longestSide;

	printf("Enter the side length of the triangle:"); scanf_s("%d %d %d", &a, &b, &c);

	if (a > b && a > c) {
		longestSide = 'a';
	}
	else if (b > a && b > c) {
		longestSide = 'b';
	}
	else {
		longestSide = 'c';
	}

	if (longestSide == 'a') {
		if (a * a == b * b + c * c) {
			printf("Right angle triangle\n");
		}
		else if (a * a < b * b + c * c) {
			printf("Narrow triangle\n");
		}
		else if (a * a > b * b + c * c) {
			printf("Obtuse angle triangle\n");
		}
		else {
			printf("A triangle cannot be formet with the entred  sides\n");
		}
	}
	else if (longestSide == 'b') {

		if (b * b == a * a + c * c) {
			printf("Right angle triangle\n");
		}
		else if (b * b < a * a + c * c) {
			printf("Narrow triangle\n");
		}
		else if (b * b > a * a + c * c) {
			printf("Obtuse angle triangle\n");
		}
		else {
			printf("A triangle cannot be formet with the entred  sides\n");
		}

	}
	else {
		if (c * c == b * b + a * a) {
			printf("Right angle triangle\n");
		}
		else if (c * c < b * b + a * a) {
			printf("Narrow triangle\n");
		}
		else if (c * c > b * b + a * a) {
			printf("Obtuse angle triangle\n");
		}
		else {
			printf("A triangle cannot be formet with the entred  sides\n");
		}

	}
	*/

	//****GİRİLEN 4 basamaklı  BİR SAYININ ÖZEL SAYI OLUP OLMADIĞINI ANLAYAN PROGRAM 
	//  abcd= (ab+cd)^2;
	/*
	int number, newnumber, remainder, section;

	while (1) {
		printf("Enter a 4-digit number:"); scanf_s("%d", &number);

		remainder = number % 100;
		section = number / 100;
		newnumber = (remainder + section) * (remainder + section);
		if (number > 9999 || number < 999) {

			printf("Please enter a 4-digit number!\n");

			continue;

		}
		else {

			if (number == newnumber) {

				printf("Your number is perfect\n");
			}
			else {
				printf("Your number is not perfect\n");
			}
		}
	}
	*/

//*******GİRİLEN BİR SAYININ KAREKOKUNUN TAM SAYI OLUP OLMADIĞINI BULAN PROGRAM

       int number, squareRoot;

	   while (1) {
		   printf("Enter a positive number:"); scanf_s("%d", &number);

		   if (number < 0) {
			   printf("Please enter a positive number!\n");

			   continue;
		   }
		   else {
			   squareRoot = sqrt(number);

			   if (squareRoot * squareRoot == number) {
				   printf("Your number is a intiger\n");

			   }
			   else {
				   printf("Your number is not a intiger\n");
			   }
		   }
	   }




	return 0;

	
}