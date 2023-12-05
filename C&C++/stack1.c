#include <stdio.h>

#define MAX_SIZE 10

// Structure to represent the stack
struct Stack {
    int top;
    int items[MAX_SIZE];
};

// Function to initialize the stack
void initializeStack(struct Stack* stack) {
    stack->top = -1;
}

// Function to check if the stack is empty
int isEmpty(struct Stack* stack) {
    return stack->top == -1;
}

// Function to check if the stack is full
int isFull(struct Stack* stack) {
    return stack->top == MAX_SIZE - 1;
}

// Function to push an element onto the stack
void push(struct Stack* stack, int value) {
    if (isFull(stack)) {
        printf("Stack Overflow. Cannot push %d.\n", value);
        return;
    }

    stack->items[++stack->top] = value;
    printf("%d pushed to the stack.\n", value);
}

// Function to pop an element from the stack
void pop(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack Underflow. Cannot pop.\n");
        return;
    }

    printf("%d popped from the stack.\n", stack->items[stack->top--]);
}

// Function to display the elements in the stack
void display(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty.\n");
        return;
    }

    printf("Stack elements: ");
    for (int i = 0; i <= stack->top; i++) {
        printf("%d ", stack->items[i]);
    }
    printf("\n");
}

int main() {
    struct Stack stack;
    initializeStack(&stack);
    printf("Prachi Srivastava\n");

    int choice, value;

    do {
        printf("\nStack Operations:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Quit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the value to push: ");
                scanf("%d", &value);
                push(&stack, value);
                break;
            case 2:
                pop(&stack);
                break;
            case 3:
                display(&stack);
                break;
            case 4:
                printf("Quitting the program.\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }

    } while (choice != 4);

    return 0;
}
