#include <stdio.h>
#include <stdlib.h>



int main() {
	
	FILE*dosya1;
	FILE*dosya2;
	FILE*dosya3;
	
	char name[20];
	char surname[20];
	int age;
	
	dosya1=fopen("bilgi.txt","a");
	dosya2=fopen("bigi.txt","r");
	dosya3=fopen("yedek.txt","w");
	if(dosya1!=NULL){
		
		
		
		printf("Enter your name:"); scanf("%s",name);
		printf("\nEnter your surname:"); scanf("%s",surname);
		printf("\nEnter your age:"); scanf("%d",&age);
		
		
		fprintf(dosya1,"%s\t%s\t%d\n",name,surname,age);
		printf("Registration completed\n");
		
		
	fclose(dosya1);
		
	}
	
	
	
	if(dosya2!=NULL &&dosya3!=NULL){

		while( dosya2=!feof){
			
			
		fscanf(dosya2,"%s %s %d",&name,&surname,&age);
		printf("%s\t%s\t%d",name,surname,age);
		
		fprintf(dosya3,"%s\t%s\t%d",name,surname,age);
				
		}
		
	printf("Yedekleme tamam");	
	fclose(dosya2);	
	
	}

	
	
	
	
	
	
	return 0;
}
