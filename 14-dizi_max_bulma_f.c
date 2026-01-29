#include <stdio.h>
#include <stdlib.h>
#define n 5
void maximumbul(int dizi[], int boyut){
	int max=0;
	int i;
	for( i =0 ; i<= boyut ; i++){
		
		printf("%d. deger :", i+1) ; scanf("%d",&dizi[i] );
		if(max<dizi[i]){
			
			max=dizi[i]; 
		}
		
		
	}
	printf("Dizinin maximumu: %d", max);
}
int main() {
	
	int diziadi [n ];
	maximumbul( diziadi , n);
	
	
	
	
	
	
	
	return 0;
}
	

		
	
	
	
	
	

