#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int main()
{
    int ch;
    struct node *head=NULL;
    while(1)
    {
        printf("\nPress 1 to add a node");
        printf("press 2 to display the list");
        printf("press 3 to terminate the program");
        printf("Enter your choice");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                    struct node* new1;
                    struct node* temp;
                    int n;
                    new1=(struct node *)malloc(sizeof(struct node));
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
                            temp=temp->next;
                        }
                         temp->next=new1;
                    
                    }
                    break;
            case 2:
                    struct node *temp;
                    temp=head;
                    while(temp->next!=NULL)
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