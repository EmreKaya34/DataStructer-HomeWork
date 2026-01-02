#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int value;
    struct node *next;
} Node;

Node *first = NULL;

Node* create(int value) {
    Node *n = (Node*) malloc(sizeof(Node));
    n->value = value;
    n->next = NULL;
    return n;
}

Node* readNode() {
    int val;
    printf("Yeni veri giriniz: ");
    scanf("%d", &val);
    return create(val);
}

void insertFront() {
    Node *n = readNode();

    if (first == NULL) {
        first = n;
        n->next = first;
    } else {
        Node *tmp = first;
        while (tmp->next != first)
            tmp = tmp->next;

        tmp->next = n;
        n->next = first;
        first = n;
    }
}

void insertBack() {
    Node *n = readNode();

    if (first == NULL) {
        first = n;
        n->next = first;
    } else {
        Node *tmp = first;
        while (tmp->next != first)
            tmp = tmp->next;

        tmp->next = n;
        n->next = first;
    }
}

void printCircular() {
    if (first == NULL) {
        printf("Liste bos!\n");
        return;
    }

    Node *p = first;
    int i = 1;
    do {
        printf("%d. node -> %d\n", i++, p->value);
        p = p->next;
    } while (p != first);
}

int main() {
    int secim;

    do {
        printf("-----------\n");
        printf("1- Basa ekle\n");
        printf("2- Sona ekle\n");
        printf("3- Listele\n");
        printf("0- Cikis\n");
        printf("Secim: ");
        scanf("%d", &secim);

        if (secim == 1)
            insertFront();
        else if (secim == 2)
            insertBack();
        else if (secim == 3)
            printCircular();
        else if (secim == 0)
            printf("Program sonlandiriliyor...\n");
        else
            printf("Hatali secim!\n");

    } while (secim != 0);

    return 0;
}
