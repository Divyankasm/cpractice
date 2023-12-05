#include <stdio.h>
#include <stdlib.h>

struct node {
    int info;
    struct node* link;
};

struct node* start = NULL; // Initialize the start pointer to NULL

void inserbag() {
    int info;
    printf("Enter Element for Insert Linked List: ");
    scanf("%d", &info);

    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->info = info;
    newnode->link = start;
    start = newnode;
}

void display() {
    struct node* Node = start; // Initialize Node with the start pointer
    while (Node != NULL) {
        printf("%d ", Node->info); // Add space after each number
        Node = Node->link;
    }
    printf("\n");
}

int main() {
    while (1) {
        printf("Options\n");
        printf("1. Insert\n");
        printf("2. Display\n");
        printf("Enter option: ");
        int choice;
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                inserbag();
                break;
            case 2:
                display();
                break;
            default:
                printf("Wrong choice\n");
                break;
        }
    }
    return 0;
}
