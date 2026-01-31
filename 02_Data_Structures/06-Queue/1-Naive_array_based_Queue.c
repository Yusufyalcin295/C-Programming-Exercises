#include <stdio.h>
#include <stdlib.h>
#define N 120
/*
int Q[N];
int last = 0;
int front = 0;
int counter = 0;
*/
typedef struct queue {
    int item;
    struct queue* next;
}qu;

qu* last = NULL;
qu* front = NULL;

//Naive Array based queue

/*
void enqueue(int item) {
    
    if (last == N) {
        printf("Queue is full");
        return -1;
    }
    else {

        Q[last] = item;
        last++;
        return 0;
    }
}

int dequeue() {
    int item, i;

    item = Q[0];

    if (last == 0) {
        printf("Queue is empty");

        return -1;
    }
    else {

        for (i = 1; i < last; i++) {
            Q[i - 1] = Q[i];
        }
        last--;

        return item;
    }

}
void reset(){
    last = 0;
}

/*
  enqueu()->O(1);
  dequeue()->O(n); ---->kaydırma işlemi
  reset()->O(1)

*/

//-----circuler Queue(with counter)----
/*
void enqueue(int item) {

    if (counter >= N) {
        printf("Queue is full");
        return -1;
    }
    else {
        Q[last] = item;
        last = (last + 1) % N;
        counter++;
        return 0;
    }
}

int dequeue() {

    int item;

    if (counter== 0) {
        printf("Queue is empty");
        return -1;
    }
    else {
        item= Q[front]  ;
        front = (front + 1) % N;
        counter--;
        return item;
    }
    
}
void reset() {
    last = 0;
    front = 0;
    counter = 0;

}
/* 
----circuler queue
    enqueu()->O(1);
    dequeue()->O(1); 
    reset()->O(1)
   



void display() {

    int i;
    printf("Queue is:");
    for (i = 0; i < last; i++) {
        printf("%d ", Q[i]);
    }
    printf("\n");
}
*/
int pEnqueue(int item) {

    qu* p; 
    p = (qu*)malloc(sizeof(qu));
    
    if (p == NULL) {

        printf("Memory is full,location error");
        return -1;
    }
    p->item = item;
    p->next = NULL;

    if (front == NULL) {
        front = p;
        last = p;
    }
    else {
        last->next = p;
        last = p;


    }

    return 0;
}

int pDequeue() {
    int item;
    qu* p;

    if (front == NULL) {
        printf("Queue is empty!");
        return -1;
    }

    p = front;
    front = front->next;
    if (front == NULL) {
        last = NULL;
    }
    item = p->item;
    free(p);
    return item;

}

void pReset() {
    
    qu* p;
    p = front; 
              
    while (p) {
        front=front->next;

        free(p);
        p = front;
    }
    last = NULL;
}

void pDisplay() {

    qu* p;
    p = front;
    printf("pQueue is:");

    while (p) {
        printf("%d ", p->item);
        p = p->next;
    }
    printf("\n");
}

int main() {

    
  /*  enqueue(5);
    display();
    enqueue(3);
    display();
    enqueue(8);
    display();
    enqueue(34);
    enqueue(52);
    display();
    dequeue();
    display();
    dequeue();
    display();
    reset();
    display();
    */

    
    pEnqueue(8);
    pDisplay();
    pEnqueue(12);
    pDisplay();
    pEnqueue(6);
    pEnqueue(42);
    pEnqueue(30);
    pDisplay();
    pDequeue();
    pDisplay();
    pDequeue();
    pDisplay();
    pDequeue();
    pDisplay();
    pReset();
    
    pDisplay();

}