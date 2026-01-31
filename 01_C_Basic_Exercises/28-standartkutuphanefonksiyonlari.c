/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// KARAKTER DÝZÝLERÝNDE KULLANILAN FONKSÝYONLAR 1.:"strlen"  2.:"strcpy" 3.:"strcat"


//strlen fonksiyonunun kütüphanesi string.h bu fonksiyon bir dizinin kaç karakter olduðunu ölçüp integer olarak döndürür 
//strcpy fonksiyonu karakter dizilerinde bbir dizideki karakterin diðer paramtreye veya diziye kopyalmanmasýný saðlar
//strcat fonksiyonu karakter dizilerinde bir parametreyi diðerine ekleyerek birlikte çalýþmasýný saðlar

int main() {
	/*
	char name[]="YALCINKO" ;
	int lenght;
	lenght=strlen(name);
	printf("%s ismi %d karakterden olusur\n",name,strlen(name));
	
	printf("%d\n",strlen(name));
	printf("%d", strlen("YUSUF YALCINKO"));
	//böyle 3 farklý þekilde göstreilebilr
	*/
	/*
	//-----GÝRÝDÝÐÝN KARAKTERÝN UZUNLUÐUNU BULMA-----
	char name[50];
	printf("Enter the a character:"); scanf("%s",&name);
	printf("The lenght of the you entered : %d ",strlen(name));
	*/
	
	//------KARAKTERLERÝ TEK TEK YAZDIRMA---------
	/*
	char name[]="COMPUTER";
	int i;
	for(i=0 ; i<strlen(name) ; i++)
	{
		printf("%c\n",name[i]);
	}
	*/
	
	//----GÝRDÝÐÝN KARAKTERÝ TERSTEN YAZDIRMA 
	/*
	char book []="JACK LANDON" ;
	
	int i;
	
	for(i=strlen(book) ; i>=0 ; i--)// BURDA KARAKTER UZUNLUÐUNU ÖLÇEN FONKSÝYONDAN BAÞLAR Ý SIFIRA EÞÝT OLANA KADAR AZALIRSA TERSTEN YAZMA ÝÞLEMÝ YAPILIR
	{
		printf("%c", book[i]);
	}
	
   */
	/*
	char k_adi[15];
	printf("Enter the your username:"); scanf("%s",&k_adi);
	
	if(strlen(k_adi)<8)
	{
		printf("Your username must consist of at least 8 characters! ");

	}
	else 
    {
    	printf("Registration Successful %s ",k_adi);
	}	
	
	*/
	
	
	//strcpy(parametre1 ,parametre2);
	/*
	char isim[10]="MELEK", isim2[10];
	
	printf("%s\n",strcpy(isim2,isim)); //kopyalanacak adres ilk baþta , kopyasý alýnan sonra yazýlýr
	
	char mesaj[10];
	printf("%s",strcpy(mesaj,"YUSUF"));  // bu þekilde de olabilir
	*/
	
	
	/*
	char isim [10]="YUSUF";
	int i;
	char isim1[10];
	for(i=0 ; i<strlen(isim) ; i++)
	{
		printf("MERHABA %s\n",strcpy(isim1,isim));
	}
	*/
	
	/*
	char mesaj1[]="Merhaba ";
	char mesaj2[]="Dunya" ;
	strcat(mesaj1,mesaj2);
	printf("%s\n",mesaj1);
	*/
	/*
    char mesaj1[]="Merhaba ";
	char mesaj2[]="Dunya" ;
	printf("%s",strcat(mesaj1,mesaj2));
	*/
	/*
	char isim[10] , isimkopya[10], mesaj[]="MERHABA,";
	printf("Isminiz girin:"); scanf("%s",&isim);
	strcpy(isimkopya,isim);
	int uzunluk=strlen(isimkopya);
	printf("%s ismi %d karakterden olusmustur.",strcat(mesaj,isimkopya),strlen(isimkopya));
	
	*/
	
	
#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int myStrlen(char* p);
void upperToLower(char* ptr);
void lowerToUpper(char* ptr);


int main(){

	char sentence[100];

	printf("Enter a sentence:");

	fgets(sentence, 100, stdin);

	printf("Sentence:%s\n", sentence);

	printf("Lenght of sentence:%d\n", myStrlen(sentence));
	int i;
	for ( i = myStrlen(sentence); i >= 0; i--) {
		printf("%c", sentence[i]);
	}

	printf("%s\n", upperToLower(sentence));

	printf("%s\n", lowerToUpper(sentence));


	return 0;
}
int myStrlen(char* p) {
	int lenght = 0;
	int i;

	for (i = 0; p[i] != 0; i++) {

		lenght++;
	}
	return lenght;
}
void lowerToUpper(char* ptr) {

	for (; *ptr != '\0'; ptr++) {

		if (*ptr >= 'a' && *ptr <= 'z') {

			putchar(*(ptr - 32));
		}
		else {

			putchar(*ptr);
		}
	}
}
void upperToLower(char* ptr) {

	for (; *ptr != '\0'; ptr++) {

		if (*ptr >= 'A' && *ptr <= 'Z') {
			putchar(*(ptr + 32));

		}
		else {
			putchar(*ptr);
		}
	}

}
	
	
	
	
	
