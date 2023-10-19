#include<stdio.h>
#include<stdlib.h>
void inserbag();
void display();
struct node
{
    int info;
    struct node *link;
};

void inserbag()
{ 
    struct node **start;
    int info;
    printf("\nEnter Element for Insert Linked List : \n");
    scanf("%d", &info);

    struct node *newnode =(struct node*) malloc(sizeof(struct node*));
    newnode -> info = info;
    newnode -> link = *start;
    *start = newnode;
}
void display(){
    struct node *node;
    while(node != NULL){
        printf("%d", node->info);
        node=node->link;
    }
    printf("\n");
}

int main(){
     while (1){
        printf("options\n");
        printf("1.Insert\n");
        printf("2.Display\n");
        printf("enter option\n");
        int choice;
        scanf("%d",&choice);
        switch(choice){
            case 1:
            inserbag();
            break;
            case 2:
            display();
            break;
            default:
            printf("wrong choice");
            break;
            }}
    return 0;
                    }
