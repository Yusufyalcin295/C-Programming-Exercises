#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node* next;
};

struct node* front = NULL;
struct node* rear = NULL;

void enqueue(int x) {
	struct node* newnode;

	newnode = (struct node*)malloc(sizeof(struct node));
    
	if (newnode == NULL) {
		printf("Memory is full");
		return -1;
	}
	
	newnode->data = x;
	newnode->next = NULL;
	
	if (front == NULL && rear == NULL) {
		front = rear = newnode;
	}
	else {
		rear->next = newnode;
		//newnode->next = NULL;
		rear = newnode;
	}
}

void display() {
	struct node* temp;
	temp = front;

	if (front == NULL && rear == NULL) {
		printf("Queue is empty");
	}
	else {
		printf("Queue:");
		while (temp != NULL) {
			printf("%d ", temp->data);
			temp = temp->next;
		}
		
	}
	printf("\n");
}

void dequeue() {
	struct node* temp;
	temp = front;

	if (front == NULL && rear == NULL) {

		printf("Queue is empty\n");
	}
	else {
		
		printf("\n%d was deleted!\n", front->data);
		front =front->next;
		free(temp);
		
		if (front == NULL) {
			rear == NULL;
		}
	}
	
}

void peek() {
	if (front == NULL && rear == NULL) {
		printf("Queue is empty");
	}
	else {
		printf("Front of queue is:%d", front->data);
	}
}


int main() 
{
	display();
	enqueue(5);
	enqueue(12);
	enqueue(24);
	display();
	peek();
	dequeue();
	display();
	enqueue(51);
	enqueue(14);
	display();
	peek();
	dequeue();
	dequeue();
	display();
	dequeue();
	display();
	dequeue();
	display();


	return 0;
}