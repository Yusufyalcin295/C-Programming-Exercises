#include <stdio.h>
#include <stdlib.h>



int main(void) {
   
   
 
 FILE *dosya=NULL;
 
 if(dosya=fopen("file.txt","w")==NULL){
 	printf("File could not be opened"); //puts
 	
 }
 else{
 	puts("Enter the your account, name and balance.");
 	puts("Enter EOF to end input");
 	printf("%s","?");
 	
 	
 	int account=0;
    char name [30];
    double balance=0.0;
    scanf("%d%29s%lf",&account,&name,&balance);
    // write account, name and balance into file with fprintf
    
    while (!feof(stdin)) { 
       fprintf(fPtr, "%d %s %.2f\n", account, name, balance);
       printf("%s", "? ");
       scanf("%d%29s%lf", &account, name, &balance);
    }
    fclose(dosya); 
 }	
 
}
	
	
	
	
	

