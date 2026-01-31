#include <stdio.h>
#include <stdlib.h>

int tersYaz(int sayi)
{
	int yenisayi=0;

     while(sayi>0)
   {
    yenisayi*=10;
    yenisayi+=sayi%10;
    sayi/=10;

   }
	return yenisayi;
}







int main() {
	int sayi;
	printf("Sayi Giriniz:"); scanf("%d",&sayi);
	
	printf("\n Girdiginiz sayinin tersi:%d",tersYaz(sayi));
	
	
	
	
	return 0;
}
