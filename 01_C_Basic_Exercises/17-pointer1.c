#include <stdio.h>
#include <stdlib.h>

//Karakter dizilerin pointerlarla gösterimi

int main() {
	
	/*
	char isim[]="Yusuf";
	
	// Aslýnda karakter dizileri bellekte böyle saklanýr ve sonunda karakter dizisinin bittiðini gösteren "\0" (NULL) karakteri bulunur.
	
	char isim1[]={'Y','u','s','u','f','\0'};
	
	printf("%s\n",isim);
	printf("%s\n",isim1);
	
	printf("%c\n",isim[3]);
	printf("%c\n",isim1[3]);
	
	char *ptr;
	ptr=isim;
	
	printf("%s\n",ptr);
	printf("%c\n",ptr[0]);	
	
	
	char *sehir="istanbul"; // bu þekilde de pointer tanýmlyabiliriz.
	printf("%s\n",sehir);     printf("%c",sehir[5]);
	*/
	
	/*
	char *sehir="Osmaniye";
	int i=0;
	
	while(sehir[i]!='\0')
	{
		printf("%c--- adresi:%p \n",*(sehir+i),(sehir+i));
		i++;
	
	}
	printf("\n\n");	
	//BUNU DA YAPABÝLÝRÝZ.
	while(*sehir!=NULL)
	{
			printf("%c--- adresi:%p \n",*(sehir),(sehir));
			sehir++;
	}
	*/
	/*
	char *sehirler[]={"Batman","Bursa","Adana","Istanbul","Ankara"};
	int i;
	
	for(i=0 ; sehirler[i]!=NULL ;i++)
	{
		printf("%s - %p\n",*(sehirler+i),(sehirler+i));
	}
	
	*/
	
	
	
	
	
	return 0;
}
