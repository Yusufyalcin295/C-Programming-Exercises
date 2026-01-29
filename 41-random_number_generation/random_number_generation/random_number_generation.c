#include <stdio.h>
#include <stdlib.h>
#include <time.h>

unsigned long long int factorial(int n);
unsigned long long int fibbonaci(int n);

/*
---C Dilinde Rastgele Sayı Üretimi(Random Number Generation)----
C dilinde rastgele sayılar üretmek için standart kütüphane işlevleri olan rand() ve srand() kullanılır.
Bu işlevler, C dilinin <stdlib.h> başlık dosyasına dahildir.İşte detaylı bir açıklama :

---rand() Fonksiyonu----
Amaç : Rastgele bir tam sayı üretir.
Kapsam : Varsayılan olarak, 0 ile RAND_MAX(genellikle 32767) arasında bir tam sayı döndürür.
Kullanım :
	
	int randomNumber = rand();
printf("Random number: %d\n", randomNumber);

Özelleştirme
Belirli bir aralıkta rastgele sayı üretmek için şu formülü kullanabilirsiniz :

int randomNumber = rand() % (max - min + 1) + min;
Bu, [min, max] aralığında bir sayı üretir.

srand() Fonksiyonu
Amaç : Rastgele sayı üreteçlerini yeniden başlatmak için bir "tohum" (seed)değeri belirler.
Kullanım :
	
	srand(seed);
Eğer srand() kullanılmazsa, rand() her çalıştırıldığında aynı sayıları üretir.
Genellikle time(NULL) fonksiyonu kullanılarak farklı bir tohum değeri belirlenir :
,
srand(time(NULL));
*/


//1 ile 100 arasında rastgele sayılar üreten bir program

int main(){
	/*
	srand(time(NULL)); //her çalıştırdığımızda farklı bir sayı üretmemizi sağlar
	int min = 1;
	int max = 100;

	int randomNumber = rand()%100 +1;
	printf("RandomNumber is between %d and %d: %d", min, max, randomNumber);
	*/

	//Random-Number Generation—Rolling a Six Sided dice
     /*
	for (int i = 0; i < 10; i++) {
		 
		printf("%d ", rand() % 6 + 1);
	 }
	 */
	//Altı Yüzlü Zarın 60,000,000 Kez Atılması
	/*
	int frequency1 = 0;
	int frequency2 = 0;
	int frequency3 = 0;
	int frequency4 = 0;
	int frequency5 = 0;
	int frequency6 = 0;

	srand(time(NULL));
	int face;

	for (int i = 0; i < 60000000; i++) {
		 face = rand() % 6 + 1;
		 switch (face) {

		 case 1:frequency1++; break;
		 case 2:frequency2++; break;
		 case 3:frequency3++; break;
		 case 4:frequency4++; break;
		 case 5:frequency5++; break;
		 case 6:frequency6++; break;


		 }
	}
	
	printf("%s%13s\n", "Face", "Frequency");
	printf("1%13d\n", frequency1);
	printf("2%13d\n", frequency2);
	printf("3%13d\n", frequency3);
	printf("4%13d\n", frequency4);
	printf("5%13d\n", frequency5);
	printf("6%13d\n", frequency6);
	*/
	/*
	int randomN, i;
	int seed ;

	printf("Enter a seed:"); scanf_s("%d", &seed);
	srand(seed);
	for (i = 0; i < 9; i++) {
		randomN = rand() % 19 + 12;
		printf("%d ", randomN);
	}
	*/
	//recursiv function 
	int number, number1;;
	int i;

	printf("enter a number :"); scanf_s("%d", &number);
	printf("factoial of number:%llu\n", factorial(number));
	for (i = 0; i < 21; i++) {
		printf("%d!=%llu\n", i, factorial(i));
	}
	printf("enter a number:"); scanf_s("%d", &number1);
	printf("Fibbonaci(%d):%llu\n",number1, fibbonaci(number1));

	for (i = 0; i < 10; i++) {
		printf("Fibbonaci(%d)=%d\n", i, fibbonaci(i));
	}
	
	return 0;
}
unsigned long long int factorial(int n) {

	if (n <= 1) {
		return 1;
	}
	else {
		return n * factorial(n - 1);
	}
}
unsigned long long int fibbonaci(int n) {
	if (n == 0 || n == 1) {
		return n;
	}
	else {
		return fibbonaci(n - 1) + fibbonaci(n - 2);
	}
}