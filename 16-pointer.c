#include <stdio.h>
#include <stdlib.h>

//***DÝZÝLERÝN POÝNTERLA ÝLE KULLANIMI***

int main() {
	
	/*
	int dizi[]={6,8,10,12,14} ,i;
	
	for(i=0 ; i<5 ;i++)
	{
		printf("%d\n",dizi[i]);
	}
	Normalde dizinin elemanlarýný böyle gösteririz,þimdi ise bunu pointerlarla ile göstericeðiz
	*/
	
	int dizi[]={6,8,10,12,14} ,i;
	int *ptr;
	
	//ptr=&dizi[0]; biz burda dizinin ilk elemanýný pointerýa atadýðýmýz zaman pointer sayesinde dizinin diðer tüm elemanlarýný bulabiliriz.
	
    /* Biz burda pointera dizimizin ismini atadýðýmýz zaman da dizinin ilk elemanýn adresinini atamýþ oluruz.
	Çünkü dizimizin adý dizimizin o bellekteki baþlangýç adresini verir// 
        ==>	ptr=dizi bu daha çok kullanýlýr
	*/
	ptr=dizi;
 	printf("Dizinin birinci elemani:%d\n",dizi[0]);
 	printf("Dizinin birinci elamani:%d\n",*ptr);
 	printf("Dizinin ikinci elemani:%d\n",dizi[1]);
	printf("Dizinin ikinci elamani:%d\n",*(ptr+1));
	printf("Dizinin birinci elamani:%d-------Adresi:%p\n",*ptr,ptr);
	printf("Dizinin ikinci elamani:%d-------Adresi:%p\n",*(ptr+1),ptr+1);
	printf("Dizinin ücüncü elamani:%d-------Adresi:%p\n",*(ptr+2),ptr+2);
	printf("\n\n\n*****\n\n\n");
	for(i=0 ;i<5 ; i++)
	{
		
		printf("Dizi[%d]=:%d -- adresi:%p\n",i,*(ptr+i),(ptr+i));
		
	}
	return 0;
}
