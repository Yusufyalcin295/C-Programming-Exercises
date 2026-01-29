#include <stdio.h>,
#include <stdlib.h>


typedef struct listNode {
	char data;
	struct listNode* nextPtr;
}node;

//prototypes

void insert(node** sPtr, char value);
char delete(node** sPtr, char value);
int isEmpty(node* sPtr);
void printList(node* currentPtr);
void instructions(void);

int main() {

	node* startPtr = NULL;
	int choice = 0;
	char item = 0;


	instructions();
	printf("?");
	scanf_s("%d", &choice);

	while (choice != 3) {
		
		switch (choice) {
			 
		case 1:
			printf("Enter a charachter: ");
			scanf_s("\n%c", &item);
			insert(&startPtr, item);
			printList(startPtr);

			break;
		case 2:

			    //if list is not empty
			if (!isEmpty(startPtr)) {
				printf("Enter character to be deleted: ");
				scanf_s("\n%c", &item);

				//if caharacter is found remove it
				if(delete(&startPtr,item)){
					printf("%c deleted.\n", item);
					printList(startPtr);
				
				}

				else {
					printf("%c not found.\n\n", item);

				}

			}
			else {
				printf("List is empty.\n");

			}
			break;

		default:
			printf("Invalid choice.\n");

			break;
		}
		instructions();
		printf("?");
		scanf_s("%d", choice);

	}

	printf("End of run.\n");

	return 0;
}
void instructions(void) {
	printf("Enter your choice:\n"
		" 1 to insert an element into the list.\n"
		" 2 to delete an element from the list.\n"
	    " 3 to end.\n");
}

void insert(node** sPtr, char value) {

	node* previous = NULL;
	node* new = NULL;
	node* current = NULL;

	new = malloc(sizeof(node));

	if (new != NULL) {
		new->data = value;
		new->nextPtr = NULL;

		previous = NULL;
		current = *sPtr;

		while (current != NULL && current->data < value) {
            
			previous = current;
			current = current->nextPtr;
		}

		if (previous == NULL) {

			new->nextPtr = *sPtr;
			*sPtr = new;

		}
		else {

			previous->nextPtr = new;
			new->nextPtr = current;
		}

	}
	else {
		if ("%c is not inserted.Memory is not avaliable", value);
	}

}

char delete(node** sPtr, char value) {

	node* temp = NULL;
	node* previous = NULL;
	node* current = NULL;

	if (value == (*sPtr)->data) {
		 
		temp = *sPtr;
		*sPtr = (*sPtr)->nextPtr;
		free(temp);

		return value;
	}

	else {
		previous = *sPtr;
		current = (*sPtr)->nextPtr;

		while (current != NULL && value != current->data) {

			previous = current;
			current = current->nextPtr;
		}

		if (current != NULL) {
			temp = current;
			previous->nextPtr = current->nextPtr;

			free(temp);
			return value;

	    }
	}

}
int isEmpty(node* sPtr) {

	return sPtr = NULL;

}

void printList(node* currentPtr) {

	if (currentPtr == NULL) {

		printf("List is empty.\n");

	}
	else {

		printf("List:");

		while (currentPtr != NULL) {

			printf("%c--->", currentPtr->data);
			currentPtr = currentPtr->nextPtr;

		}

		printf("NULL\n\n");
	}

}


