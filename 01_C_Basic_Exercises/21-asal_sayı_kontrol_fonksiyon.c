#include <stdio.h>
#include <stdlib.h>

int asal_mi(int sayi){
	int i;
	
	for(i = 2; i<sayi ; i++){
		if(sayi%1==0){
			return 0 ;
		}
		
	}
	return 1;
}

int main() {
	int n ;
	printf("bir sayi giriniz:") ;
	scanf("%d", &n);
	  
	  if(asal_mi(n)==0){
	  	printf("bu sayi asal sayi degildir");
	  	
	  }
	   else {
	   	printf("bu sayi asal sayidir");
	   } 
	return 0;
}
