#include <stdio.h>
#include <stdlib.h>
#define pi 3.14
	//FONKSÝYON YARDIMIYLA DAÝRENÝN ÇEVRE VE ALAN HESAPLAMASI 

 float alan( float cap)
{
	float sonuc;
	sonuc =pi*cap*cap;
	return sonuc;
}
 float cevre( float cap)
{
	float sonuc;
	sonuc=2*pi*cap;
	return sonuc;
}


int main() {
	/*
	//DAÝRENÝN ÇEVRE VE ALNININ HESAPLANMASI
	float pi=3.14, alan,cevre;
	int r;
	
	printf("yaricap giriniz:"); scanf("%d",&r);
	cevre=2*pi*r;
	printf("Dairenin cevresi:%.2f\n",cevre);
	alan=pi*r*r;
	printf("Dairenin alani:%.2f",alan);
	*/
/*	
  int r ,secim;
  printf("Yaricap giriniz:"); scanf("%d",&r);
  printf("\nHangi islemi yapacaksiniz?\n");
  printf("Dairenin alani icin 1 \nDairenin cevresi icin 2 \nSeciminiz:"); scanf("%d",&secim);
   
  printf("\n\n");
  if(secim==1)
  {
  	printf("Dairenin alani:%.2f",alan(r));
  }
 else  if(secim==2)
  {
  	printf("Dairenin cevresi:%.2f",cevre(r));
  }
  else
  {
  	printf("Lutfen gecerli bir sayi giriniz.");
  }
*/	
	
	int n, r, i;
int a[4];
printf("Sayýyý giriniz ");
scanf("%d",&n);
for(r=0;r<4;r++)
{
 a[r] = n%10;
 printf("%d " ,a[r]);
 n = n/10;
 }
 printf("Sayýnýn tersi = %d: ", (a[0]*1000 + a[1]*100 + a[2]*10 + a[3] ) );

	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
