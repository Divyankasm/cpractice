#include <stdio.h>
#include <stdlib.h>

// Node structure for doubly linked list
struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

// Function prototypes
void insertNode(struct Node** head, int newData);
void displayList(struct Node* head);
void deleteNode(struct Node** head, int key);

int main() {
    struct Node* head = NULL;
    int choice, data;
    printf("Prachi Srivastava\n");

    while (1) {
        printf("\nDoubly Linked List Operations:\n");
        printf("1. Insert\n");
        printf("2. Display\n");
        printf("3. Delete\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter data to insert: ");
                scanf("%d", &data);
                insertNode(&head, data);
                break;
            case 2:
                displayList(head);
                break;
            case 3:
                printf("Enter data to delete: ");
                scanf("%d", &data);
                deleteNode(&head, data);
                break;
            case 4:
                // Exit the program
                exit(0);
            default:
                printf("Invalid choice! Please enter a valid option.\n");
        }
    }

    return 0;
}

// Function to insert a new node at the end of the doubly linked list
void insertNode(struct Node** head, int newData) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = newData;
    newNode->next = NULL;

    if (*head == NULL) {
        newNode->prev = NULL;
        *head = newNode;
        return;
    }

    struct Node* last = *head;
    while (last->next != NULL)
        last = last->next;

    last->next = newNode;
    newNode->prev = last;
}

// Function to display the elements of the doubly linked list
void displayList(struct Node* head) {
    printf("Doubly Linked List: ");
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

// Function to delete a node with a given key from the doubly linked list
void deleteNode(struct Node** head, int key) {
    struct Node* current = *head;

    while (current != NULL && current->data != key)
        current = current->next;

    if (current == NULL) {
        printf("Element not found in the list.\n");
        return;
    }

    if (current->prev != NULL)
        current->prev->next = current->next;
    else
        *head = current->next;

    if (current->next != NULL)
        current->next->prev = current->prev;

    free(current);
    printf("Node with data %d deleted successfully.\n", key);
}
