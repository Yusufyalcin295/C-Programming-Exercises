#include <stdio.h>
#include <stdlib.h>
#include <math.h>

 void characterScrool(char*, int);

 int main() {

	 char character[] = { 'B','i','l','g','i','s','a','y','a','r' };

	 int size = sizeof(character) / sizeof(character[0]);

	 characterScrool(character, size);


	 return 0;
 }
	void characterScrool(char* character, int size) {

		int i, j;
		
		for (i = 0; i < size + 1; i++) {

			for (j = i; j < size; j++) {

				printf("%c", *(character + j));
			}

			for (j = 0; j < i; j++) {

				printf("%c", *(character + j));
			}


			printf("\n");
		}

	}
