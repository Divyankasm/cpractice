#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node in the linked list
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a node at the end of the linked list
void insertNode(struct Node** head, int value) {
    struct Node* newNode = createNode(value);

    if (*head == NULL) {
        *head = newNode;
    } else {
        struct Node* temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    printf("Node with data %d inserted successfully.\n", value);
}

// Function to display the linked list
void displayList(struct Node* head) {
    if (head == NULL) {
        printf("The linked list is empty.\n");
        return;
    }

    printf("Linked list elements: ");
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

// Function to delete a node with a specific value from the linked list
void deleteNode(struct Node** head, int value) {
    if (*head == NULL) {
        printf("The linked list is empty. Deletion failed.\n");
        return;
    }

    struct Node* temp = *head;
    struct Node* prev = NULL;

    // If the node to be deleted is the first node
    if (temp != NULL && temp->data == value) {
        *head = temp->next;
        free(temp);
        printf("Node with data %d deleted successfully.\n", value);
        return;
    }

    // Search for the node to be deleted
    while (temp != NULL && temp->data != value) {
        prev = temp;
        temp = temp->next;
    }

    // If the node with the given value was not found
    if (temp == NULL) {
        printf("Node with data %d not found. Deletion failed.\n", value);
        return;
    }

    // Unlink the node from the linked list
    prev->next = temp->next;

    // Free the memory of the deleted node
    free(temp);

    printf("Node with data %d deleted successfully.\n", value);
}

int main() {
    struct Node* head = NULL;
    int choice, value;
    printf("Prachi Srivastava\n");

    do {
        printf("\n1. Insert\n2. Display\n3. Delete\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the value to insert: ");
                scanf("%d", &value);
                insertNode(&head, value);
                break;
            case 2:
                displayList(head);
                break;
            case 3:
                printf("Enter the value to delete: ");
                scanf("%d", &value);
                deleteNode(&head, value);
                break;
            case 4:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != 4);

    return 0;
}
