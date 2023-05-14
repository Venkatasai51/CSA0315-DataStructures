#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* head = NULL;

void insert(int value) {
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
    } else {
        struct Node* currentNode = head;
        while (currentNode->next != NULL) {
            currentNode = currentNode->next;
        }
        currentNode->next = newNode;
    }
}

void delete(int value) {
    if (head == NULL) {
        return;
    }

    if (head->data == value) {
        struct Node* temp = head;
        head = head->next;
        free(temp);
        return;
    }

    struct Node* currentNode = head;
    while (currentNode->next != NULL) {
        if (currentNode->next->data == value) {
            struct Node* temp = currentNode->next;
            currentNode->next = temp->next;
            free(temp);
            return;
        }
        currentNode = currentNode->next;
    }
}

void printList() {
    struct Node* currentNode = head;
    while (currentNode != NULL) {
        printf("%d ", currentNode->data);
        currentNode = currentNode->next;
    }
    printf("\n");
}

int main() {
    insert(5);
    insert(10);
    insert(15);
    insert(20);
    printList();

    delete(10);
    printList();

    delete(5);
    printList();

    return 0;
}
