#include <stdio.h>
#include <stdlib.h>


int main() {
	
	//DÝZÝLERDE ARAMA ÝÞLEMLERÝ
	/*
	int sayilar[]={15, 78 , 95 ,65, 2, 45, 13,8, 66,100 };
	int sayi, bulundu=0, i ;
	
	printf("Bir sayi giriniz:"); scanf("%d",&sayi);
	
	for(i=0 ; i<10 ;i++)
	{
		if(sayilar[i]==sayi)
		{
			bulundu=1;
			break;
			
		}
	}
	
	if(bulundu==1)
	{
		printf("Girdiginiz %d sayisi dizinin %d. elemanidir.",sayi,i);
		
	}
	else
	{
		printf("Sayi bulunamadi");
		
	}
	
	*/
	
	int sayilar[10];
	int i,sayi;
	int bulundu=0;
	
	printf("10 Adet sayi giriniz:\n");
	
	for(i=0 ; i<10 ; i++)
	{
		printf("%d.Sayi:",i+1); scanf("%d",&sayilar[i]);
		
	}
	
	system("CLS");//ekranýn temizlenmesini saðlar kütüphanesi stdlib.h
	printf("Aranmasi istenen sayiyi giriniz:"); scanf("%d",&sayi);
	for(i=0 ; i<10 ; i++)
	{
		
		if(sayilar[i]==sayi)
		{
			bulundu=1 ;
			break;
		}
	}
	
	if(bulundu==1)
	{
		printf("Girdiginiz %d sayisi dizinin %d.elemanidir",sayi,i);
	}
	else
	{
		printf("Sayi bulunamadi");
	}
	
	
	
	return 0;
}
