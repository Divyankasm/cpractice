#include<stdio.h>
#define max 5
int front=-1;
int rear =-1;
int c=0;
void insert(int q[],int item) {
    if(rear==max-1)
        printf("Queue full");

    else{
        if(c==0){
            front=0;c++;
}
    rear=rear+1;
    q[rear]=item; }
}
int delete(int q[]) {
int item;
if(front==-1){
printf("Queue empty");
return -1;
}
else{
item=q[front];
front=front+1; }
return item;
}
void display(int q[]) {
    int i;
    printf("\n The queue is:\n");
    for(i=front;i<=rear;i++)
        printf(" %d",q[i]);

}
main()
{
    int ch,q[max],item,yn;
    printf("Prachi Srivastava\n");
    while(1){
        printf("Press 1. Insert 2. Delete 3. Display\n");
        printf("Enter your choice");
        scanf("%d", & ch);
        switch(ch){
            case 1:
             printf("\n Enter the item you want to insert:\n");
             scanf("%d",&item);
             insert(q,item);
             break;
            case 2:
             item=delete(q);
             if(item>-1){
                printf("\n The deleted item is: %d\n",item);}
             break;
            case 3: 
             display(q);
             break;
             
        }}}
