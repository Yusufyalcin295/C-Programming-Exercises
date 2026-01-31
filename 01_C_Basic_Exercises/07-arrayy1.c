#include <stdio.h>
#include <stdlib.h>


int main() {
/*	
	int ogr_not[10];
	int i;
	int aanotu=0 , bbnotu=0 , ccnotu=0 , ddnotu=0 , ffnotu=0;
	for(i=0 ; i<10 ; i++)
	{
		printf("%d. ogrencinin notu:", i+1); scanf("%d", &ogr_not[i]);
		
		if(ogr_not[i]<=100 &&  ogr_not[i]>=90)
	{
		
	    aanotu++;
	}
	
	else if(ogr_not[i]<=89 &&  ogr_not[i]>70)
	{
		
	    bbnotu++;
	}		
	else if(ogr_not[i]<=69 &&  ogr_not[i]>50)
	{
		
	    ccnotu++;
	}
	
	else if(ogr_not[i]<=49 &&  ogr_not[i]>30)
	{
		
	    ddnotu++;
	}
	
	else
	{
		
	    ffnotu++;
	}
	
		
    }	 
	
	
	
	
	printf("%d adet AA notu\n" ,aanotu);
	printf("%d adet BB notu\n" ,bbnotu);
	printf("%d adet CC notu\n" ,ccnotu);
	printf("%d adet DD notu\n" ,ddnotu);
	printf("%d adet FF notu\n" ,ffnotu);
	
*/	
	
	int ogr_vize[10] , ogr_final[10];
	int i;
	float ortalama[10];
	int aanotu=0, bbnotu=0 ,ccnotu=0, ddnotu=0, ffnotu=0;
	for(i=0 ; i<10 ; i++)
	
	{
		printf("%d. ogrencinin vize notu:",i+1); scanf("%d",& ogr_vize[i]);
		printf("%d. ogrencinin final notu:",i+1); scanf("%d",& ogr_final[i]);
	    ortalama[i]=ogr_vize[i]*0.4+ogr_final[i]*0.6 ;
		printf("ORTALAMA:%.2f\n",ortalama[i]);
		
		
		if(ortalama[i]<=100 && ortalama[i]>=90)	
	{
		aanotu++;	
	}
	 else if(ortalama[i]<90 && ortalama[i]>=70)
	{
		
		bbnotu++;
	}
		
	else if(ortalama[i]<70 && ortalama[i]>=50)
	{
		
		ccnotu++;
	}	
		
	else if(ortalama[i]<50 && ortalama[i]>=30)
	{
		
		bbnotu++;
	}	
		
	else
	{
		ffnotu++;
		
	}	

	
	}
	printf("-----------------------------");
	
	
	printf("%d adet AA \n", aanotu);	
	printf("%d adet BB \n", bbnotu);	
	printf("%d adet CC \n", ccnotu);	
	printf("%d adet DD \n", ddnotu);	
	printf("%d adet FF \n", ffnotu);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
