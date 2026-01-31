#include <stdio.h>
#include <stdlib.h>

typedef struct queue {
	int data;
	struct queue* next;
}q;

q* front = NULL;
q* last = NULL;

int enqueue(int data) {
	
	q* p;
	p = (q*)malloc(sizeof(q));
	p->data = data;
	p->next = NULL;

	if (p == NULL) {
		printf("Memory is full");
		return - 1;
	}
	
	else {
		if (front == NULL) {
			front = p;
			last = p;
		}
		else {
			last->next = p;
			p->next = NULL;
			last = p;
		}
		return 0;
	}

}
int dequeue() {
	int data;
	q* p;
	if (front == NULL) {
		printf("Queue is empty");
	}
	else {
		p = front;
		front = front->next;
		if (p->next == NULL) {
			front = NULL;
			last = NULL;

		}
		data = p->data;

		free(p);
		return data;

	}
}
void print() {
	q* p;
	p = front;

	while (p) {
		printf("%d \n", p->data);
		p = p->next;

		
	}
}
int main() {

	enqueue(15);
	enqueue(12);
	enqueue(11);
	enqueue(13);
	print();
	dequeue();
	print();
	dequeue();
	print();
	dequeue();
	print();


	return 0;
}