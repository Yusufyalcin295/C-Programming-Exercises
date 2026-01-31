#include <stdio.h>
#include <stdlib.h>



int main() {
	char string[100];
	FILE* dosyaYaz;
	dosyaYaz=fopen("deneme2.txt","w");
	printf("File could be created\n");
	
	printf("Enter your data:");
	gets(string);
	fprintf(dosyaYaz,string);
	printf("\n Data entry  completed\n");
	fclose(dosyaYaz);
	
	FILE* dosyaOku;
	dosyaOku=fopen("deneme2.txt","r");
	
	while(!feof(dosyaOku)){
		fputchar(fgetc(dosyaOku));
	}
	printf("\nFile reading completed\n");
	fclose(dosyaOku);
	
	int result=remove("deneme.txt");
	
	if(result==0){
		printf("File deleted");
		
	}
	else
	
	printf("File could not be deleted");
	
	return 0;
}
