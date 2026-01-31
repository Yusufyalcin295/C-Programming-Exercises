#include <stdio.h>
#include <stdlib.h>

//DÝZÝ SIRALAMA
int main() {
	//öncelikle yer deðiþtime 
	/*
	int a=5 , b= 7;
	int temp;
	//burada önce a deðerini yani 5 geçici bellek dediðimiz tempe atýyoruz,daha sonra b deðerini a'ya atýyoruz a 7 oluyor daha sonra geçici bellekte tuttuðumuz a deðerini b'ye atýyoruz
	
	printf("Oncesinde: a=%d  b=%d\n",a ,b);
	temp=a;
	a=b;
	b=temp;
	printf("Sonrasinda: a=%d  b=%d\n",a,b);
	*/
	
	
	int dizi[]={15, 65, 98, 23, 12, 74, 81, 72};
	int temp, i ,j;
	
	for(i=0 ; i<8 ; i++)
	{
		for(j=0 ; j<7 ; j++)
		{
			if(dizi[j]<dizi[j+1])
			{
				temp=dizi[j];
				dizi[j]=dizi[j+1];
				dizi[j+1]=temp;
				
			}
		}
	}
	
	for(i=0 ; i<8 ; i++)
	{
		printf("%d ",dizi[i]);
	}
	
	
	/*
	int  i, j;
	int dizi[8];
	int temp;
	
    
    	for(i=0 ; i<8 ;i++) 
	{
		printf("%d.eleman:",i+1); scanf("%d",&dizi[i]);
	}
    
    
    for(i=0 ; i<8 ; i++)
	{
		for(j=0 ; j<7 ; j++)// burda eðer 7-i yaparsak program daha hýzlý çalýþacak unutma
		{
			if(dizi[j]<dizi[j+1])
			{
				temp=dizi[j];
				dizi[j]=dizi[j+1];
				dizi[j+1]=temp;
				
			}
		}
	}
	printf("\n\n **********Dizinin buyukten kucuge siralanmis hali*********\n\n");
	for(i=0 ; i<8 ; i++)
	{
		printf("%d ",dizi[i]);
	}
	*/
	return 0;
}
