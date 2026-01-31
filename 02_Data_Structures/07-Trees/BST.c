#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct bTree {
    int info;
    char message[100];
    struct bTree* left;
    struct bTree* right;
} BTREE;

BTREE* root = NULL;

// Node oluşturma
BTREE* readNode() {
    BTREE* newNode;
    newNode = (BTREE*)malloc(sizeof(BTREE));
    if (newNode == NULL) return NULL;

    printf("Enter info: ");
    scanf_s("%d", &(newNode->info));
    printf("Enter message: ");
    scanf("%s", newNode->message);

    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Ekleme
void insert(BTREE* treeRoot, BTREE* newNode) {
    if (treeRoot == NULL) {
        root = newNode;
    }
    else {
        if (newNode->info < treeRoot->info) {
            if (treeRoot->left == NULL)
                treeRoot->left = newNode;
            else
                insert(treeRoot->left, newNode);
        }
        else {
            if (treeRoot->right == NULL)
                treeRoot->right = newNode;
            else
                insert(treeRoot->right, newNode);
        }
    }
}

// Traversal (Pre-order)
void traverse(BTREE* treeRoot) {
    if (treeRoot != NULL) {
        printf("%d %s\n", treeRoot->info, treeRoot->message);
        traverse(treeRoot->left);
        traverse(treeRoot->right);
    }
}

// Arama
BTREE* search(BTREE* treeRoot, int item) {
    while ((treeRoot != NULL) && (treeRoot->info != item)) {
        if (item < treeRoot->info)
            treeRoot = treeRoot->left;
        else
            treeRoot = treeRoot->right;
    }
    return treeRoot;
}

// Silme
BTREE* delete(BTREE* treeRoot, int item) {
    BTREE* qa, * q, * qc, * sa, * s;
    if (treeRoot == NULL) return NULL;

    q = treeRoot;
    qa = NULL;

    // Silinecek node'u bul
    while ((q != NULL) && (q->info != item)) {
        qa = q;
        if (item < q->info)
            q = q->left;
        else
            q = q->right;
    }

    if (q == NULL) {
        printf("Item to be deleted is not found\n");
        return NULL;
    }

    // 2 çocuğu varsa
    if ((q->left != NULL) && (q->right != NULL)) {
        s = q->left;
        sa = q;
        while (s->right != NULL) {
            sa = s;
            s = s->right;
        }
        q->info = s->info;
        strcpy(q->message, s->message);
        q = s;
        qa = sa;
    }

    // En fazla 1 çocuk
    if (q->left != NULL)
        qc = q->left;
    else
        qc = q->right;

    if (q == treeRoot)
        root = qc;
    else {
        if (q == qa->left)
            qa->left = qc;
        else
            qa->right = qc;
    }

    free(q);
    return q;
}

// Node sayısı
int countNodes(BTREE* treeRoot, int sum) {
    if (treeRoot == NULL) return sum;
    sum++;
    sum = countNodes(treeRoot->left, sum);
    sum = countNodes(treeRoot->right, sum);
    return sum;
}

// Ana program
int main() {
    BTREE* n, * a;
    int i, choice, count;

    while (1) {
        printf("\n1. Insert a node\n");
        printf("2. Delete a node\n");
        printf("3. List nodes\n");
        printf("4. Search for a node\n");
        printf("5. Count number of nodes\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            n = readNode();
            insert(root, n);
        }
        else if (choice == 2) {
            printf("Enter node to be deleted: ");
            scanf("%d", &i);
            a = delete(root, i);
            if (a != NULL)
                printf("Deleted\n");
            else
                printf("Item to be deleted is not found\n");
        }
        else if (choice == 3) {
            if (root != NULL)
                traverse(root);
            else
                printf("Tree is empty\n");
        }
        else if (choice == 4) {
            printf("Enter node to be searched for: ");
            scanf("%d", &i);
            a = search(root, i);
            if (a == NULL)
                printf("Item is not found\n");
            else
                printf("%d %s\n", a->info, a->message);
        }
        else if (choice == 5) {
            count = countNodes(root, 0);
            printf("Number of nodes in the tree = %d\n", count);
        }
        else {
            break;
        }
    }
    return 0;
}
