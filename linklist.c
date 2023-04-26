#include<stdio.h>
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
        printf("Press 1 to add a node to the list:");
        printf("press 2 to display the list:");
        printf("press 3 to add a node before the list:");
        printf("press 4 to delete a node from the list:");
        printf("press 6 to terminate the program:");
        printf("Enter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                    new1=(struct node *)malloc(sizeof (struct node) );
                    printf("Enter value:");
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
                            temp->temp=next;
                        }
                        temp->next=new1;
                    }
                    break;
            case 2:
                    {
                        temp=head;
                        while(temp->next!=NULL)
                        {
                            printf("%d",temp->data);
                            temp=temp->next;
                        }
                     
                    
                    }
                    break;
            case 3:
                    {
                        temp=head;
                        while(temp->next->next!=NULL)
                        {
                            temp=temp->next;
                        }
                        temp->next=NULL;
                    }
                    break;
            case 4:
                    {
                        new1=(struct node *)malloc(sizeof (struct node));
                        printf("Enter value of the new node:");
                        scanf("%d",&n);
                        new1->next=head;
                        head=new1;
                    }
                    break;
            case 6:
                    exit(1);
                    default:printf("Invalid input");
        }
    }
}