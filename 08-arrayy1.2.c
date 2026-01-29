#include <stdio.h>
#include <stdlib.h>



int main() {
	/*
	int fabrika[2][5];
	int i, j ;
	for (i= 0 ; i<2 ; i++)
	{
		for(j=0 ; j<5 ; j++)
		{
			printf("%d.fabrikanin %d.elemaninin maasini giriniz:", i+1, j+1);  scanf("%d", &fabrika[i][j]);
			
			if(fabrika[i][j]<1000)
            {
            	
            	fabrika[i][j]+=fabrika[i][j]*0.2;
            }
            if(fabrika[i][j]<3000 && fabrika[i][j]>1000)	
			{
				
				fabrika[i][j]+=fabrika[i][j]*0.1;
			}			
		}
	
		
		
	}
	printf("\n\n-----------------------------\n");
	
	for(i=0 ; i<2 ; i++)
	{
		for(j=0 ; j<5 ; j++)
		{
			printf("%d.fabrikanin %d.elemaninin maasini : %d TL\n", i+1, j+1, fabrika[i][j]);
			
		}
		
	}
	
	*/
	//iki okullun iki sýnýfýndaki 5 öðrencinin dizi hali
	
	int okul[2][2][5];
	int i,j,k;
	int say;
	for(i=0 ; i<2 ; i++)
	{
		for(j=0 ; j<2 ; j++)
		{
			for(k=0 ; k<5 ; k++)
			{
				printf("%d. okulun %d.sinifintaki %d.ogrencinin notu : ",i+1, j+1 ,k+1); scanf("%d", &okul[i][j][k]);
				if(okul[i][j][k]>70)
				{
					say++;
				}
			}
		}
		
	}
	printf("\n\n**************************\n");
	
	for(i=0 ; i<2 ; i++)
	{
		for(j=0 ; j<2 ; j++)
		{
			for(k=0 ; k<5 ; k++)
			{
				printf("%d. okulun %d.sinifintaki %d.ogrencinin notu :%d\n",i+1, j+1 ,k+1,okul[i][j][k]); 
			}
		}
		
	}
	
	
	printf("\n\n Sinifi gecenlerin sayisi:%d ", say);
	
	
	
	
	return 0;
}
