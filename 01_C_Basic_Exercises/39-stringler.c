#include <stdio.h>
#include <stdlib.h>
#include <string.h>

                           //********** STRINGLER ***********\\

int main() {
	
	char job[] = "Engineering";   // Stringleri böyle iki şekilde tanımlayabiliriz ama alttaki şekilde tanımlarsak sonuna "NULL" anlamına gelen "\0" koymak zorundayız.
    
	char job2[] = { 'T','e','a','c','h','e','r','\0' };
	int i, size;
	size = sizeof(job);

	printf("%lu:\t%s\n", sizeof(job),job);
	printf("%lu:\t%s\n", sizeof(job2),job2);      // burdaki işlem boyutu integer olarak veriyor

	

	for (i = 0; i < size; i++) {

		//printf("%c", job[i]); iki  şekilde de yazdırabiliriz

		printf("%c", *(job + i));
	}

	printf("\n");

	while (job[i] != '\0') {   // job dizinde "\0" karakterinin görene kadar yazdırma işlemi yapar

		printf("%c", job[i]);
		i++;
		printf("\n");
		break;

	}


	int j = 0;
    
	while (*(job2 + j) != '\0') {  // pointer şeklinde yazılmış hali

		printf("%c", *(job2 + j));
		j++;
	}

	char message[] = "String is \"very\" important."; 
	
	//Burda string içerisinde çift tırnaklı bir ifade kullanmak istiyorsak önüne backslash(\) ifadesini koymalıyız.
	//Ayrıca eğer backlash ifadesinin önüne backslash ifadesini getiririsek backslash ifadesinini de yazdırmış oluruz.

	printf("\n%s\n", message);
	
	/*

	//***Biz stringlelri pointerlara doğrudan atayabiliyoruz.

	char messi[] = "Lionel Messi is the best football player in the world."; // Burdaki hatayı sor?

	char* messiPtr="Lionel Messi is the best football player in the world.";
	int i = 0;

	while (*(messiPtr + i) != '\0') {

		printf("%c", *(messiPtr + i));
		i++;
	}

	*/






	return 0;
}