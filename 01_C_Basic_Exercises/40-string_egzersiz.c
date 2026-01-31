#include <stdio.h>
#include <stdlib.h>

void reverseWord(char* start, char* end) {

	while (start < end) {
		char temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;

	}

}
void reverseEachWord(char* str) {
	char *current = str;
	char *startword = NULL;
	while (*current != '\0') {

		if (*current != ' ' && startword == NULL) {
			startword = current;
		}
		if ((*current == ' ' || *(current + 1) == '\0') && startword != NULL) {

			char* endword = (*current == ' ') ? current - 1 : current;
			reverseWord(startword, endword);
			startword = NULL;
		}
		current++;
	}
	

}



int main() {
	
	char sentence[102];
	printf("ENter sentence:"); 
	fgets(sentence, sizeof(sentence), stdin);
	printf("%s", sentence);
	reverseEachWord(sentence);

	return 0;
}