#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *top=NULL;
void push(int n)
{
    struct node *temp=(struct node *)malloc(sizeof(struct node));
    temp->data=n;
    temp->next=NULL;
    if(top==NULL)
            top=temp;
    else
    {
        temp->next=top;
        top=temp;
    } 
}
void pop()
{
    if(top==NULL)
            printf("Empty list");
    else
    {
        printf("%d",top->data);
        top=top->next;
    }
}
void display()
{
    struct node *temp=top;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
int main()
{
    int ch,n;
    while(1)
    {
        printf("\nPress 1 to push");
        printf("\npress 2 to pop");
        printf("\npress 3 to display");
        printf("\npress 4 to terminate:");
        printf("\nEnter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
           case 1:
                printf("\nEnter element to insert:");
                scanf("%d",&n);
                push(n);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("\nProgram is terminnating");
                exit(1);
            default:
                    printf("Invalid choice"); 
        }
    }
}