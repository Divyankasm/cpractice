#include <stdio.h>
#include <stdlib.h>

// Node structure for circular singly linked list
struct Node {
    int data;
    struct Node* next;
};

// Function to insert a new node at the end of the circular singly linked list
struct Node* insertEnd(struct Node* head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = head;

    if (head == NULL) {
        newNode->next = newNode; // For the first node, make it point to itself
        head = newNode;
    } else {
        struct Node* temp = head;
        while (temp->next != head) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    return head;
}

// Function to print the circular singly linked list
void printList(struct Node* head) {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct Node* temp = head;
    do {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("\n");
}

int main() {
    struct Node* head = NULL;
    printf("Prachi Srivastava\n");

    head = insertEnd(head, 1);
    head = insertEnd(head, 2);
    head = insertEnd(head, 3);
    head = insertEnd(head, 4);

    printf("Circular Singly Linked List: ");
    printList(head);

    return 0;
}
