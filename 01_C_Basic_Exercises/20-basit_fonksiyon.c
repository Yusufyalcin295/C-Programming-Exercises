#include <stdio.h>
#include <stdlib.h>

void kontrolet(int sayi){


  if(sayi%2==0){
  	printf("sayi cift bir sayidir",sayi);

  }
  else{
  	
  	printf("sayi tek bir sayidir",sayi);
  	
  }

}

void kutuciz(int boy , int en){
	int i, j;
	for(i=0 ; i<=boy ; i++){
		
		for(j=0 ; j<=en ; j++){
			
			printf("*");
		}
		printf("\n");
	} 
	
	
	
}








int main() {
	int sayi;
	printf("Bir sayi giriniz :");
	scanf("%d",&sayi);
	kontrolet(sayi);
	
     printf("\n");
	int boy,en;
	
	printf("boy bilgisi:");
	scanf("%d \n",&boy);
	printf("en bilgisi:");
	scanf("%d ",&en);
	
	 kutuciz(boy,en);
	
	
	
	
	

	

	return 0;
}

    
