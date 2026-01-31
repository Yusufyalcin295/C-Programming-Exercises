#include <stdio.h>
#include <stdlib.h>

//FONKSÝYONLARIN POÝNTERLARLA GÖSTERÝMÝ

void Mesajyaz(int *x)
{
  int i;
  for(i=1 ; i<=*x ; i++)
 {
	printf("%d - Beceriksiz Ahmet Tas Yeter Artik Bir Seyi de Tut\n",i);
 }
	
}

int carp(int *a,int *b)
{
	
	return *a*(*b);
}

void degistir(int *x, int *y)
{
	int gecicibellek=*x;
	*x=*y;
	*y=gecicibellek;
	
	
	
}

int f(int *x)
{
	int factoriel=1 , i;
	for(i=*x ; i>=1 ; i--)
	{
		factoriel=factoriel*i;
	}
	
	return factoriel;
}



int main() {
	/*
	int deger;
	printf("Bir deger giriniz:"); scanf("%d",&deger);
	
    Mesajyaz(&deger);
	*/
	
	/*
	int sayi1,sayi2 ,sonuc;
	
	printf("Iki adet sayi giriniz:"); scanf("%d %d",&sayi1,&sayi2);
	sonuc=carp(&sayi1,&sayi2);
	
	printf("%d x %d= %d",sayi1,sayi2,sonuc);
	
	*/
	
 /*  int sayi1,sayi2;
   printf("Iki sayi giriniz:"); scanf("%d %d",&sayi1,&sayi2);
   printf("ONCESI:%d %d\n",sayi1,sayi2);
   
   degistir(&sayi1,&sayi2);
   
   printf("SONRASI:%d %d\n",sayi1,sayi2);
*/
	int sayi;
	printf("Sayi giriniz:"); scanf("%d",&sayi);
	int sonuc=f(&sayi);
	
	printf("%d sayisinin factorieli:%d ",sayi,sonuc);
	
	
	
	
return;	
}
