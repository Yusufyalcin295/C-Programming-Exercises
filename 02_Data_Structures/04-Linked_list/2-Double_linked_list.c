#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct doubly_list {
    int info;
    char message[100];
    struct doubly_list* previous;
    struct doubly_list* next;
} DLIST;

DLIST* first = NULL;
DLIST* last = NULL;

// Yeni düğüm oluşturma
DLIST* createNode(int info, const char* msg) {
    DLIST* p = (DLIST*)malloc(sizeof(DLIST));
    if (!p) {
        printf("Bellek ayrilamadi!\n");
        exit(1);
    }
    p->info = info;
    strcpy(p->message, msg);
    p->previous = NULL;
    p->next = NULL;
    return p;
}

// Ekleme (sona ekleme)
int insert(DLIST* p) {
    if (first != NULL) {  // liste boş değilse
        last->next = p;
        p->previous = last;
        p->next = NULL;
        last = p;
    }
    else {              // liste boşsa
        first = p;
        last = p;
        first->previous = NULL;
        last->next = NULL;
    }
    return 0;
}

// Listeyi görüntüleme
int display() {
    DLIST* p = first;
    if (p == NULL) {
        printf("Liste bos\n");
        return -1;
    }
    while (p) {
        printf("%d %s\n", p->info, p->message);
        p = p->next;
    }
    return 0;
}

// Arama
DLIST* search(int key) {
    DLIST* p = first;
    while (p) {
        if (key == p->info)
            return p;
        p = p->next;
    }
    return NULL;
}

// Silme
DLIST* deleteNode(int key) {
    DLIST* p = search(key);
    if (p == NULL) {
        printf("Silinecek eleman listede yok\n");
        return NULL;
    }
    if (p == first) { // ilk eleman siliniyor
        if (first == last) { // tek eleman varsa
            first = NULL;
            last = NULL;
        }
        else {
            first = p->next;
            first->previous = NULL;
        }
    }
    else {
        if (p == last) { // son eleman siliniyor
            last = p->previous;
            last->next = NULL;
        }
        else { // ortadan siliniyor
            p->previous->next = p->next;
            p->next->previous = p->previous;
        }
    }
    free(p);
    return p;
}

// main fonksiyonu
int main() {
    insert(createNode(1, "Birinci"));
    insert(createNode(2, "Ikinci"));
    insert(createNode(3, "Ucuncu"));

    printf("Liste:\n");
    display();

    printf("\nArama: 2\n");
    DLIST* found = search(2);
    if (found) {
        printf("Bulundu: %d %s\n", found->info, found->message);
    }

    printf("\nEleman siliniyor: 2\n");
    deleteNode(2);
    display();

    printf("\nEleman siliniyor: 1\n");
    deleteNode(1);
    display();

    printf("\nEleman siliniyor: 3\n");
    deleteNode(3);
    display();

    return 0;
}
