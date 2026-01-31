#include <stdio.h>
#include <stdlib.h>



int main() {
	/*
	float sum=0.0;
	
	float numbers [5];
	int i;

	for( i=0 ; i<5 ; i++ ){
		
	printf("Enter the number :") ;
	scanf("%f", &numbers[i]);
		
		
	}
	 
	for( i=0 ; i<5 ; i++){
		
		sum+=numbers[i] ;
		
	}
	
	printf("Avarage of the numbers you entered :  %.2f" , sum/5);
	
	*/
	
	
	/*
	char name [20];
	
	printf("Enter the name:");
	scanf("%s",name); // burda "&" ifadesini kulllanmamıza gerek yok (stringlerde) ayrıca scanf boşluktan sonrasını almaz 
	
    printf("Your name: %s\n",name); 
    */
    
    
    /*
    1 2 3
    4 5 6
    7 8 9    
	*/
	
	/*
	int matrix[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	
	int i, j;
	
	for(i=0 ; i<3 ; i++){
		
		for(j=0 ; j<3 ; j++){
		
		printf("%d ", matrix[i][j]);
		
		}
		
		printf("\n");
	}
	*/
	
	
	/*
	int matrix[3][3];
	int i, j;
	
	for(i=0 ; i<3 ; i++){
		
		for(j=0 ; j<3 ; j++){
		
		scanf("%d", &matrix[i][j]);
		
		}
	
   } 
	for(i=0 ; i<3 ; i++){
		
		for(j=0 ; j<3 ; j++){
		
		printf("%d ", matrix[i][j]);
		
		}
		
		printf("\n");
	}
	
	*/
	/*
	int matrix[3][3][3];
	int i, j , k;
	
	
	for(i=0 ; i<3 ; i++){
		
		for(j=0 ; j<3 ; j++){
			
			
			for(k=0 ; k<3 ; k++){
				
				scanf("%d", &matrix[i][j][k]);
				
			}
		
		}
	
   } 
	
	
	
	for(i=0 ; i<3 ; i++){
		
		for(j=0 ; j<3 ; j++){
			
			
			for(k=0 ; k<3 ; k++){
				
				printf("%d ", matrix[i][j][k]);
				
			}
		     printf("\n");
		}
	
   } 
   */
	/* 15 sayı istenecek örnek  1 2 3 4 5 6 7 8 9 10 11 12 13 14 15
	3*5 lik 3 satırı 5 sütünü olan bir matrix yazdırma ve her sütündaki sayıları toplayıp altta yazdırıyor 
	
	1 2 3 4 5
	6 7 8 9 10
	11 12 13 14 15
	
	
	sum:
	
	18 21 24 27 30 
	
	*/
	
	int matrix[3][5];
	int i, j ;
	int sum=0;
	for(i=0 ; i<3 ; i++){
		
		for(j=0 ; j<5 ; j++){
			
			scanf("%d", &matrix[i][j]);
						
		}
		
		
	}
	
	
	for(i=0 ; i<3 ; i++){
		  
		  
		for(j=0 ; j<5 ; j++){
			
			printf("%d ", matrix[i][j]);
						
		}
		
		printf("\n");
		
		
	}
	for( j= 0 ; j <5 ; j++){
		
		for(i=0 ; i<3 ; i++){
			
			sum+=matrix[i][j];
		}
		 
		printf("%d ", sum);
	    sum=0;
	}
	
		
	
	
	
	
	
	
	
	
	
	
	return 0;
}
