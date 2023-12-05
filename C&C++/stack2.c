#include <stdio.h>
#include <stdlib.h>

// Node structure for the linked list
struct Node {
    int data;
    struct Node* next;
};

// Stack structure
struct Stack {
    struct Node* top;
};

// Function to initialize an empty stack
void initializeStack(struct Stack* stack) {
    stack->top = NULL;
}

// Function to check if the stack is empty
int isEmpty(struct Stack* stack) {
    return stack->top == NULL;
}

// Function to push a new element onto the stack
void push(struct Stack* stack, int value) {
    // Create a new node
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        exit(EXIT_FAILURE);
    }

    // Set data and next pointer
    newNode->data = value;
    newNode->next = stack->top;

    // Update top to point to the new node
    stack->top = newNode;

    printf("%d pushed to the stack.\n", value);
}

// Function to pop an element from the stack
int pop(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack underflow. Cannot pop from an empty stack.\n");
        exit(EXIT_FAILURE);
    }

    // Get the data from the top node
    int poppedValue = stack->top->data;

    // Move top to the next node
    struct Node* temp = stack->top;
    stack->top = stack->top->next;

    // Free the memory of the popped node
    free(temp);

    return poppedValue;
}

// Function to display the elements in the stack
void displayStack(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty.\n");
        return;
    }

    struct Node* current = stack->top;
    printf("Stack elements: ");
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main() {
    struct Stack stack;
    initializeStack(&stack);

    int choice, value;

    do {
        printf("\nStack Menu:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the value to push: ");
                scanf("%d", &value);
                push(&stack, value);
                break;
            case 2:
                if (!isEmpty(&stack)) {
                    printf("Popped value: %d\n", pop(&stack));
                }
                break;
            case 3:
                displayStack(&stack);
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
