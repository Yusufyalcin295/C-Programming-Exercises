#include <stdio.h>
#include <stdlib.h>

//****POÝNTER****
/*
Gösterici demek.Bir pointer bir tane bellek yerini yani adresini gösterir.
Hangi deðerin adresini tutacaksak pointer o deðerin veri tipi ile tanýmlanýr.
Pointerler da iki byte olmasý gerekiyor.Ayrýca pointer olduðunu belirtmek için baþýna yýldýz "*" koymalýyýz.
Ayrýca pointerlar deðerin baþþlangýç adresþnþ tutar.
Pointerýn deðerini bastýrmak için printfte "%p" fortmat belirleyicisini kullanýrýz.


*/
int main() {
	
	// & iþareti deðiþkenin adres bilgisini verir
	// * iþareti deðiþkenin adresteki deðerini verir.
	
	/*
	int i=10;
	
	int *p=&i;
	
	printf("%p\n",p);
	
	printf("%d",*p);
	*/
	/*
	int a=5, *ap;
	float b=3.5 ,*bp;
	double c =4.564 ,*cp;
	char d ='z',*dp;
	
	int sayilar[4]={1,2,3,4};
	int *sayilarp;
	 
	ap=&a;
	bp=&b;
	cp=&c;
	dp=&d;
	sayilarp=&sayilar[1];
	
	
	
	
	printf("%p adresindeki int degeri %d\n",ap,*ap);
	printf("%p adresindeki float degeri %f\n",bp,*bp);
	printf("%p adresindeki double  degeri %lf\n",cp,*cp);
	printf("%p adresindeki char degeri %c\n",dp,*dp);
	printf("%p adresindeki sayilarin degeri %d\n",sayilarp,*sayilarp);
	*/

	/*
	int i,j=1;
	int *jp1, *jp2=&j;
	
	jp1=jp2;
	
	i= ++(*jp2);
	
	*jp2= *jp1 + i;
	
	
	printf("i=%d j=%d *jp1=%d *jp2=%d",i,j,*jp1,*jp2);
	*/
	
	return 0;
}
