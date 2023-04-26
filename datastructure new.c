#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};

int main()
{
   int data,ch,n;
   struct node *head=NULL;
   struct node *new1=NULL;
   struct node *temp=NULL;
   while(1)
   {
       printf("\nPress ! to add a node in the list");
       printf("\npress 2 to display the list");
       printf("\npress 3 to terminate the program");
       printf("\nEnter your choice");
       scanf("%d",&ch);
       switch(ch)
       {
           case 1:
                    new1=(struct node *)malloc(sizeof(struct node) );
                    printf("\nEnter value");
                    scanf("%d",&n);
                    new1->data=n;
                    new1->next=NULL;
                    if(head==NULL)
                        head=new1;
                    else
                    {
                        temp=head;
                        while(temp->next!=NULL)
                        {
                            temp=temp->next;
                        }
                        temp->next=new1;
                    }
                    break;
            case 2:
                    //struct node *temp;
                    temp=head;
                    while(temp!=NULL)
                    {
                        printf("%d",temp->data);
                        temp=temp->next;
                    }
                    break;
            case 3:
                    exit(1);
                default:printf("Invalid Input");
       }
   }
}
