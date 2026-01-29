#include <stdio.h>
#include <stdlib.h>



int main() {
	 int dizi[]= { 12, 8 ,14 , 100, 45 ,91, 3,8,4 ,28};
	 
	 int i, j , temp ;
	 for(i=0 ; i<10 ; i++){
	 	
	 	for(j = 0 ; j<i ;j++){
	 		if(dizi[i]< dizi[j] ){
	 			 
	 			temp=dizi[i];
				 dizi[i]=dizi[j];
				 dizi[j]=temp;
				  
	 			 
	 			
			 }
		 }
	 	
	 }
	
	for(i=0; i<10; i++){
		printf("%d ", dizi[i]);
		
	}
	
	
	
	
	
	return 0;
}
