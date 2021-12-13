#include<stdio.h>
#include<stdlib.h>
typedef struct mynode{
    int data;
    struct mynode* next;
} node;
void addLast(node **head, int data);
void addFirst(node **head, int data);
void addSorted(node **head, int data);
void addAt(node **head, int val, int pos);
int getLength(node*head);
void traverse(node *head);
int main()
{
    node *head=NULL;
    int x,pos;
    while(1)
    {
    printf(" 0-exit\n 1-AddFirst\n 2-AddLast,\n 3-AddSorted\n 4-AddAt\n 5-Length 8-Traverse \n");
    int opt;
    scanf("%d",&opt);
    switch (opt)
    {
    case 0:
        return 0;
        break;
    case 1:
        printf("Enter the number :\n");
        
        scanf("%d",&x);
        addFirst(&head,x);
        //printf("Hi\n");
        break;
    case 2:
        printf("Enter the number :\n");
        scanf("%d",&x);
        addLast(&head,x);
        break;
    case 3:
        printf("Enter the numver :\n");
        scanf("%d",&x);
        addSorted(&head,x);
        break;
    case 4:
        printf("Enter the number :\n");
        scanf("%d",&x);
        printf("Enter the position :\n");
        scanf("%d",&pos);
        addAt(&head,x,pos);
        break;
    case 5:
        printf("Length of LinkedList %d\n",getLength(head));
        break;
    case 8:
        traverse(head);
        break;

    
    default:
        break;
    }
    }
    return 0;
}
void addFirst(node **head, int val)
{
    node *p = (node*)malloc(sizeof(node));
    p->data=val;
    p->next=NULL;
    
    
    p->next=*head;
    *head=p;


}
void addLast(node **head, int val)
{
    node *p = (node*)malloc(sizeof(node));
    p->data=val;
    p->next=NULL;
    if (*head ==NULL)
    {
        *head=p;
        return;
    }

    node *temp;
    temp=*head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=p;

}
void addSorted(node **head, int val)
{
    node *p = (node*)malloc(sizeof(node));
    p->data=val;
    p->next=NULL;
    if (*head==NULL)
    {
        *head=p;
        return;
    }
    node * temp1;
    temp1=*head;
    node* temp2;
    temp2=(*head)->next;
    if ((*head)->data > val)
    {
        p->next= (*head);
        *head=p;
        return;
    }

    
    while(temp2 !=NULL && temp2->data < val)

    {
        printf("hi");
        temp1=temp1->next;
        temp2=temp2->next;

    }
    temp1->next=p;
    p->next=temp2;
    
    
}
void traverse(node *head)
{
    while(head!=NULL)
    {
        printf("%d  ",head->data);
        head=head->next;
    }
    printf("\n");
}
int getLength(node* head)
{
    int length =0;
    
    while(head !=NULL)
    {
        length++;
        head=head->next;
    }
    return length;
}
void addAt(node ** head,int val, int pos)
{
    node *p = (node*)malloc(sizeof(node));
    p->data=val;
    p->next=NULL;
    int length=getLength((*head));
    printf("%d lenght",length);
    if (length<pos)
    {
        printf("Can't add to linked lisnt");
        return;
    }
    if(pos == 0)
    {
        p->next=*head;
        *head=p;
        return;
    }
    node *temp1;
    temp1=*head;
    node * temp2;
    temp2 =(*head)->next;
    int count=1;
    while(count < pos)
    {
        count++;
        temp1=temp1->next;
        temp2=temp2->next;

    }
    temp1->next=p;
    p->next=temp2;

    
}