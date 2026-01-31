#include <stdio.h>
#include <stdlib.h>
#define N 120

//*****Array Based Stack*****
int S[N];
int sp = 0;


int main() {

	char c;
	while ((c = getchar()  )!= '\n') {
		push(c);
	}
	while (sp > 0) {
		printf("%c", pop());
	}
	printf("\n");
	return 0;

}

void push(int item) {

	if (sp >= N) {
		printf("Insertion is not possible,stack is full");
		return -1;

	}
	else {

		S[sp] = item;
		sp++;
		return 0;

	}

	
}
void pop() {

	if (sp <= 0) {
		printf("List is empty");
	
		return -1;
	}
	else {
		return S[sp - 1];
		sp--;
	}

}
void StackEmpty() {
	if (sp == 0) {
		return 1;

	}
	else
		return 0;
}
void Reset() {
	sp = 0;
}
void top() {

	return (sp - 1);
}
void Size() {
	return sp;
}