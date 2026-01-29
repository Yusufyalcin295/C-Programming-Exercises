#include <stdio.h>
#include <stdlib.h>

///Bir üçgenin açýýlarýný girdi olarak alan ve bu üçgenin çeþidini(eþkenar ,ikizkenar,çeþitkenar) bulan program yazalým



int main() {
	int a,b,c;
	
	printf("Enter angle of  triangle: ");   scanf("%d %d %d",&a,&b,&c);
	
	if(a+b+c==180){
		
		if(a==60 && b==60 && c==60){
			printf("Bu eskaner ucgendir\n");
		}
		else if(a==b || a==c ||b==c){
			printf("bu ikizkenar ucgendir\n ");
		}
		else if(a==90 ||b==90||c==90){
			printf("Bu dik ucgendir\n");
		}
		
		else{
			printf("Bu bir cesitkenar ucgendir");
		}
	}
	else{
		printf("Bu bir ucgen olusturmaz\n");
	}
	
	
	
	
	
	return 0;
}
