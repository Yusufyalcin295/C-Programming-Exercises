/*
#include <stdio.h>
#include <stdlib.h>

int myStrlen(char*p){
	int lenght;
	int i;
	for(i=0; p[i]!='\0' ;i++){
		
		lenght++;
	}
	
	return lenght;
}


int main() {
	
	
	char sentence[100];
	printf("Enter a sentence:");
	fgets(sentence,100,stdin);
	printf("%d",myStrlen(sentence));
	
	 
	 char array[5][20];
	 int i ;
	 for(i=0 ; i<4d ; i++){
	 	printf("Please enter a string:\n");
	 	fgets(&array[i][0],20,stdin);
	 	//scanf("%19s",&array[i][0]);
	 }
	 for(i=0 ;i<5 ;i++){
	 	if(array[i][0]=='T'&& array[i][0]=='h'){
	 		
	 		printf("%s\n",&array[i][0]);
		 }
	 	
	 }
	
	
	/*
	char array[]={'a','e','i','o','u',};
	char sentence[100];
	printf("Enter a sentence:");
	fgets(array,100,stdin);
	
	printf("%s",array);
	*/
/*	
		#include <stdio.h>
int main()
{
	char alph[27]; 
	int x;
	char *ptr;
	printf("\n\n Alfabeyi yazdir:\n");
	printf("----------------------------------------\n");
	ptr = alph;

	for (x = 0; x<26; x++)
	{
		*ptr = x + 'A';
		ptr++;
	}
	ptr = alph;

	printf(" Harfler : \n");
	for (x = 0; x<26; x++)
	{
		printf(" %c ", *ptr);
		ptr++;
	}
	printf("\n\n");
	return(0);
}
*/	
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int find(char *a, char *b) {

	int i, cnt = 0;
	int length = strlen(b);

	for (i = 0; i < length; i++) {

		if (a[i] == b[i])
			cnt++;
	}

	if (length == cnt)
		return 1;
	else
		return 0;
}
int main() {

	int i;
	char str1[100];
	char str2[100];

	gets_s(str1);
	gets_s(str2);

	for (i = 0; i < strlen(str1); i++) {
		if (find((str1 + i), str2)) {
			printf("sub");
			return 0;
		}

	}
	printf("not sub");
	return 0;
}

