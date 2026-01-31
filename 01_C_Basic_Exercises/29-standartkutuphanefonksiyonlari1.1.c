#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//strcmp fonksiyonu iki tane karakter dizisini karþýlaþtýrýr.

int main() {
	/*
	strcmp(string1,string2)==0 //Her iki karakter dizisi birbirine eþittir  sýfýrdan deðerini gönderir
	strcmp(string1,string2)<0 // s1 s2'den önce gelir alfabetik olarak  sýfýrdan küçük bir deðer gönderir
	strcmp(string1,string2)>0 // s2 s1'den önce gelir alfabetik olarak sýfýrdan büyük bir deðer gönderir	
	*/
	/*
	char baskent[]="ANKARA", cevap[10];
	printf("Turkiyenin baskenti neresidir?:"); scanf("%s", &cevap);
	
	if(strcmp(baskent,cevap)==0)
	{
		printf("Tebrikler %s cevabi dogru", cevap);
	}
	else
	{
		printf("Verdiginiz cevap yanlis.");
	}
	*/
	
	/*
	//char veritipinde sýfýrdan 255 sayýsýna kadar sayýlarla kullanabiliriz
	char kullaniciadi[]="yusuf", sifre[]="1234", k_adi[10] ,sfr[10] ;
	
	printf("Kullanici adinizi girin:"); scanf("%s",&k_adi);
	
	printf("Sifrenizi girin:"); scanf("%s",&sfr);
	
	if(strcmp(kullaniciadi,k_adi)==0  && strcmp(sifre,sfr)==0)
	{
		printf("Merhaba %s giris basarili",k_adi);
	}
	else
	{
		printf("Kullanici adi ya da sifre yanlis");
	}
	
	*/
	/*
	char isim [7] [20]={"ALI","YUSUF","VOLKAN","MESSI","YALCIN","ALP","POYRAZ"}, gecicibellek[20];
	 
	int i, j;
	 
	 printf("\n\n*******Oncesi*********\n\n");
	 for(i=0 ; i<7 ; i++)
	 {
	 	printf("%s\n",isim[i]);
	 }
	 
	 
	for(i=0 ; i<7 ; i++) 
	{
		for(j=0 ; j<6 ; j++)
		{
			if(strcmp(isim[j],isim[j+1])>0)
			{
				strcpy(gecicibellek,isim[j]);
				strcpy(isim[j],isim[j+1]);
				strcpy(isim[j+1],gecicibellek);
			}
			
			
			
			
		}
	}
	
	printf("\n\n*******Sonrasi*********\n\n");
	for(i=0 ; i<7 ;i++)
	{
	
			printf("%s\n",isim[i]);
		
		
	}
	
	*/
	/*
	//strrev fonksiyonu string karakter dizilerini tersten yazdýrmaya yarar
	
	printf("****Dongu Yardimiyla****\n\n");
	char isim[20] ,isim1[20];
	printf("Isminizi girin:"); scanf("%s",&isim);
	int i , uzunluk;
	uzunluk = strlen(isim);
	
	for(i=strlen(isim) ; i>=0 ; i--)
	{
		printf("%c", isim[i]);
	}
	

	printf("\n\n****strrev fonkisoyunu yardimiyla****\n\n");
	
	printf("Isminizi girin:"); scanf("%s",&isim1);
	printf("%s", strrev(isim1));
	
	//NOT: döngü kullandýðýmýzda en son yazdýrmak için "%c" ,strrev fonksiyonunu kullandýðýmýzda ise "%s" kullanmalýyýz
	*/
	/*
	// strlwr fonksiyonu girilen bütün büyük karakterlerini küçük harfe çevirir.
	// strupr fonksiyonu ise girilen bütün küçük karakterlerini büyük harfe çevirir.
	
	char isim[20];
	printf("Buyuk Harfli Bir Isim Girin: "); scanf("%s",&isim);
	printf("Kucuk harfli hali: %s\n\n", strlwr(isim));
	
	
	
	char isim1[20];
	
	printf("Kucuk Harfli Bir Isim  Girin: "); scanf("%s",&isim1);
	printf("Buyuk Harfli Hali: %s\n\n", strupr(isim1));
	
	
	*/
	
	
	return 0;
}
