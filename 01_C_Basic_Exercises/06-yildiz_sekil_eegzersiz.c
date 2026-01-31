#include <stdio.h>
#include <stdlib.h>



int main() {
	/*
	*     1 yýldýz 	+\n
	**     2 yýldýz +\n
	***     3 yýldýz  +\n
	****     4 yýldýz   +\n
	*****     5 yýldýz   +\n
	******    6 yýldýz   +\n
	*/
	/*
	int i ,j , giris;
	int yildiz=1;
	
	printf("Giris:"); scanf("%d",&giris);
	
	for(i=0 ; i<giris ; i++)
	{
		for(j=0 ; j<yildiz ; j++)
		{
			printf("*");
		}
		
	printf("\n");
	yildiz++;
	}
	*/
	/*
	giris:3                                                      
	                                                                       
	
	..*   2 boþluk 1 yýldýz +\n
	.**   1 boþluk 2 yýldýz +\n                        BOÞLUKLAR GÝRÝÞ EKSÝ BÝRDEN BAÞLIYOR YILDIZLAR ÝSE BÝRDEN BAÞLAYIP GÝRÝÞE KADAR YAZILIYOR 
    ***   0 boþluk 3 yýldýz
	

	giris: 6
	
    .....*  5 boþluk 1 yýldýz
    ....**  4 boþluk 2 yýldýz
	...***  3 boþluk 3 yýldýz
	..****  2 boþluk 4 yýldýz
	.*****  1 boþluk 5 yýldýz
	******  0 boþluk 6 yýldýz                          
	
	
	*/
	
	int i,j;
	int yildiz, giris, bosluk;
	printf("Giris:"); scanf("%d",&giris);
	
	yildiz=1;
	bosluk=giris-1;
	
	for(i=0 ; i<giris ; i++)
	{
		for(j=0 ; j<bosluk ; j++)
		{
			printf(" ");
	    }
	    
		for(j=0 ; j<yildiz ; j++)
		{
			printf("*");
		}
	       printf("\n");
		    yildiz++;
		    bosluk--;
		    
		  
			
		
		
		
		
		
	}
	
	
	
	
	
	
	
	
	
	return 0;
}
