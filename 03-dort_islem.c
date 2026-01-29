#include<stdio.h>

int main(){
	
	
	int sayi1, sayi2, secim;
	float sonuc ;
	
	printf("Toplam icin : 1\n") ;
	printf("Cikarma icin : 2\n ");
	printf("Carpma icin : 3\n ");
	printf("Bolme icin : 4\n ") ;
	
	printf("Secim yapiniz :");
	scanf("%d" ,& secim);
	   

     switch(secim){
     	
     	case1: {
		 
		    printf("iki  sayi giriniz:");
     	    scanf("%d %d", &sayi1, &sayi2);
     	    sonuc= sayi1+sayi2;
			
			break;
		 }
		 
		case2: 
		{
		 
		    printf("iki  sayi giriniz:");
     	    scanf("%d %d", &sayi1, &sayi2);
     	    sonuc= sayi1-sayi2;
			break;
		 }
		 
		 case3: 
		 {
		 
		    printf("iki  sayi giriniz:");
     	    scanf("%d %d", &sayi1, &sayi2);
     	    sonuc= sayi1*sayi2;
			break;
		 }
		 
		 case4: 
		 {
		 
		    printf("iki  sayi giriniz:");
     	    scanf("%d %d", &sayi1, &sayi2);
     	    sonuc= sayi1/sayi2;
			break;
		 }
     	
    
     	    default:
	        printf(" Lutfen 1-4 arasinda secim yapiniz :");
	 }
	 
	 printf("sonuc: %.1f", sonuc);
	 
	    
	
	return 0 ;
}
