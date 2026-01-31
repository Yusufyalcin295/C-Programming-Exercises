#include <stdio.h>
#include <stdlib.h>


//******LİNKED LİST BASED STACK*************

typedef struct s {
	int data;
	struct s* next;

}stack;

stack* sp = NULL;

int push(int data) {
	stack* p;

	p = (stack*)malloc(sizeof(stack));

	if (p == NULL) {
		printf("Error,memory is full");
		return - 1;
	}
	else {
		p->data = data;
		p->next = sp;
		sp = p;

		return 0;
	}

}
int pop() {
	stack* p;
	int i;

	if (sp == NULL) {

		printf("Stack is empty");
		return -1;
	}
	else {
		p = sp;
		i = sp->data;
		sp = sp->next;
		free(p);
		return i;
	}
	
}
int stackSize() {

	stack* p;
	int i = 0;
	p = sp;
	while (p) {
		i++;
		p = p->next;
	}

	return i;
}
void reset() {
	stack* p;

	while (sp != NULL) {
		p = sp;
		sp = sp->next;
		free(p);
      
	}

}
stack* top() {

	return sp;

 }

void printStack() {
	stack* p;
	p = sp;
	if (p == NULL) {
		printf("Stack is empty");
	}
	else {
		while (p) {
			printf("%d\n", p->data);
			p = p->next;
		}
	}
}

int main(){
	push(10);
	push(20);
	push(30);
	printStack();
	printf("Stack size: %d\n", stackSize());
	printf("Top element: %d\n", top()->data);
	printf("Popped element: %d\n", pop());
	printStack();
	printf("Stack size after pop: %d\n", stackSize());
	reset();
	printf("Stack size after reset: %d\n", stackSize());
	printStack();
	return 0;
}
