#include <stdio.h>
#include <stdlib.h>

//iki sýnýfýn isimleriyle birlikte notlarýný hesaplama 

int main() {
	/*
	char isim[2][5][20] ;
	int vize [2][5] ;
	int final[2][5] ;
	int i, j;
	float ortalama[2][5];
	for(i=0 ; i<2 ; i++)
	{
		for( j=0 ; j<5 ; j++)   
		{
			
			printf("%d.siniftaki %d.ogrencinin ismi :", i+1,j+1); scanf ("%s", isim[i][j]);
			printf("%d.siniftaki %d.ogrencinin vizesi :", i+1,j+1); scanf ("%d", vize[i][j]);
			printf("%d.siniftaki %d.ogrencinin finali :", i+1,j+1); scanf ("%d", final[i][j]);
			ortalama[i][j]=(float)vize[i][j]*0.4 + (float)final[i][j]*0.6;
		
		
		}
	}
	
	
	printf("\n************************\n");
	for( i=0 ; i<2 ; i++)
	{
		
		printf("\n %d.siniftaki ogrencinin notlarý:\n",i+1);
		
		for( j=0 ; j<5 ; j++)
		{
			
			printf("%s'nin notu: %2.f\n",isim[i][j], ortalama[i][j] );
			
		}
	}
	
	*/
	
	// iki þirkette çalýnlanlarýn isimleriyle beraber ürettikleri ürüne baðlý maaþlarý 
	
	char calisan [2][5][10];
	int maas [2][5];
	int urun [2][5];
	int i, j ;
	
	for(i=0 ; i<2 ; i++)
	{
		for(j=0 ; j<5; j++)
		{
			
			printf("%d.sirketteki %d.calisanin ismi:", i+1 ,j+1);  scanf("%s",& calisan [i][j]) ;  
			printf("%d.sirketteki %d.calisanin urettigi urun :", i+1 ,j+1);  scanf("%d",& urun [i][j]) ; 
			printf("%d.sirketteki %d.calisanin maasi:", i+1 ,j+1);  scanf("%d", &maas [i][j]) ; 
			// 1-5 arasý üretilen ürünler için 5TL ,  6-10 arasý üretilen ürünler için 10 TL ödeme 
			if(urun [i][j]>=0 && urun [i][j]<=5)
			{
				maas [i][j]+=urun [i][j]*5;
				
			}
			else if(urun [i][j]>=6 && urun [i][j]<=10)
			{
					maas [i][j]+=urun [i][j]*10;
			}
			
				
				
			
		}
    }
    
    printf("\n\n ****************\n\n");
	for(i=0 ; i<2 ; i++)
	{
		
		for(j=0 ; j<5; j++)
		{
			printf("%d.sirketteki %s calisaninin maasi:%d\n", i+1,calisan [i][j], maas [i][j] );
			
		}
		

		
		
	}
	
	
	
	
	return 0;
}
