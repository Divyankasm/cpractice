#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
void transm( struct node *p){
    while (p!=NULL)
    {
        printf("%d\n",p->data);
        p=p->next;
    }
    
}
struct node * insertinbetween( struct node* head, int data, int index){
    struct node *t=(struct node *)malloc(sizeof(struct node));
    struct node *p=head;
    int i=0;
    t->data=data;
    while (i!=index-1)
    {
        p=p->next;
        i++;
    }
    t->next=p->next;
    p->next= t;
    return head;
    
    
}
int main()
{
   struct node *head;
   struct node *second;
   struct node *third;
   head=(struct node *)malloc(sizeof(struct node));
   second=(struct node *)malloc(sizeof(struct node));
   third=(struct node *)malloc(sizeof(struct node));
   // head and 2nd node
   head->data=7;
   head->next=second;
   // 2nd and 3rd node
   second->data=14;
   second->next=third;
   // 3nd  node
   third->data=70;
   third->next=NULL;
  transm(head);
  head = insertinbetween(head,100,2);
  printf("\n");
  transm(head);
 
   
   return 0;


}
