#include <stdio.h>
#include <stdlib.h>


typedef  struct node {
	int data;
	struct node* next;
}node_t;

//Top  en üstteki eleman göstericisi

node_t* top = NULL;

//Eleman ekleme 

int push(int data) {
	//eğer boş ise 
	if (top == NULL) {
		node_t* new = (node_t*)malloc(sizeof(node_t));
		new->data = data;
		new->next = NULL;

		top = new;
	}
	
	//boş değilse
	else {
		node_t* new = (node_t*)malloc(sizeof(node_t));
		new->data = data;
		new->next = top;

		top = new;
	}

	return 1;
}

//yazdırma
int display() {

	node_t* current=top;
	//eğer boş ise

	if (current == NULL) {
		printf("Stack is empty");
		return 1;
	}
	printf("Stack:");

	while (current != NULL) {
		printf("%d - ", current->data);
		current = current->next;

	}

	printf("\n");

	return 1;
}
//sildirme POP

int pop() {
	//eğer stack boş ise
	if (top == NULL) {
		printf("Stack is empty\n");
	}
	else {
		node_t* temp = top;
		top = top->next;
		free(temp);

	}

	return 1;

}




int main() {



	push(15);
	push(8);
	push(12);
	push(6);
	display();
	pop();
	display();
	pop();
	display();
	push(11);
	display();


	return 0;
}