#include <stdio.h>
#include <stdlib.h>



typedef struct linkedlist {

	int data;
	struct linkedlist* next;
}list;

list* first = NULL;
list* last = NULL;

void insertEnd(list*p){
	if (first == NULL) {
		first = p;
		last = p;
		p->next = NULL;

	}
	else {
		last->next = p;
		p->next = NULL;
		last = p;
	}
	return 0;
}
void displayList() {

	list* p = first;
	if (p == NULL) {
		printf("List is empty\n");
		return - 1;
	}
	else {
		while (p != NULL) {
			printf("%d \n", p->data);
			p = p->next;
		}
		return 0;
	}
}
list* searching(int key) {
	list*p;

	p = first;
	while (p) {
		if (p->data == key) {
			return p;
		}
		p = p->next;
	}
	return NULL;

}

list* delete(int key) {
	list* p = first;
	list* previous = NULL;

	while (p) {
		if (key == p->data) {
			break;
		}
		previous = p;
		p = p->next;
	}

	if (p != NULL) {
		if (previous == NULL) {
			first = first->next;
			if (first == NULL) {
				last = NULL;
			}
		}
		else {
			previous->next = p->next;
			if (p == last) {
				last = previous;
			}
		}
		free(p);
		return p;
	}
	return NULL;
}
int main() {
	list* temp;
	int i;
	for (i = 1; i <= 5; i++) {
		temp = (list*)malloc(sizeof(list));
		temp->data = i * 10;
		insertEnd(temp);
	}
	displayList();
	list* foundNode = searching(30);
	if (foundNode != NULL) {
		printf("Node with data %d found.\n", foundNode->data);
	}
	else {
		printf("Node not found.\n");
	}
	delete(30);
	printf("List after deletion:\n");
	displayList();
	return 0;
}
