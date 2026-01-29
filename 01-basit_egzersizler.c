#include <stdio.h>
#include <stdlib.h>



int main() {
	//ÝSTENÝLEN ÝKÝ SAYÝYLA 4 ÝÞLEM  YAPMAK
	/*
	int sayi1, sayi2 ;
	int islem;
	printf("Birinci sayiyi giriniz:"); scanf("%d",& sayi1);
	printf("Ikinci sayiyi giriniz:") ; scanf("%d",& sayi2);
     
    printf("\n\n1.islem : Toplama\n");
	printf("2.islem: Cikarma\n");
	printf("3.islem:Bolme\n");
	printf("4.islem:Carpma");
	
	printf("\n Lutfen bir islem seciniz:"); scanf("%d",&islem);
	
	
	if(islem==1)
	{
	   printf("Sayilarin toplami: %d", sayi1+sayi2);	
	} 
	else if(islem==2)
	{
		printf("Sayilarin farki: %d", sayi1-sayi2);
		
	}
	else if(islem==3)
	{
		printf("Sayilarin bolumu: %.2f",(float)sayi1/(float)sayi2);
		
	}
	else if(islem==4)
	{
		
		printf("Sayilarin carpimi: %d",sayi1*sayi2);
    }
	else	
	{
		
		printf("Lutfen gecerli bir sayi giriniz.");
	}	
		
	*/	
	//TEK ÇÝFT TOPLAMA
	/*
	int osum=0 , esum=0;
	int i, sayi;
	printf("Enter the number :"); scanf("%d",&sayi);
	
	for(i=0 ; i<=sayi ; i++)	
	{
		if(i%2==0)
		{
			esum+=i ;
		}
		
		else
		{
			osum+=i ;
		}
	}
		
	printf("Sum of odd number:%d\n",osum);
	printf("Sum of even number:%d\n",esum);	
	*/
	//****FÝBONACCÝ****
	
/*
	int term1=0 ,term2=1, nextTerm, i, n;
	
	printf("Terim sayisini girin:"); scanf("%d",&n);
	
	printf("****Fibonacci Dizisi****\n");
	
	for(i=1 ; i<=n ; i++)
	{
		printf("%d\n", term1);
		nextTerm=term1+term2;
		term1=term2;
		term2=nextTerm;
		
		
	}	
	*/
	/*
	int number1 = 1, number2 = 1, sum = 1,num ,i;
	printf("Enter the number: "); scanf_s("%d", &num);


	for ( i = 1; i < num - 1; i++) {


		if (num == 1 || num == 2) {
			sum = 1;
			break;
		}

		number1 = number2;
		number2 = sum;
		sum = number1 + number2;
		printf("%d\n", sum);
	}

	*/
	




	return 0;
}
