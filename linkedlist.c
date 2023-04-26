#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;

};
struct node *head=NULL;

int main()
{
    int ch,n;
    while(1)
    {
    printf("press 1 to add a node to the list");
    printf("press 2 to display the list");
    printf("press 3 to terminate the program");
    printf("Enter your choice");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
            struct node *new;
            struct node *temp;
            new=malloc(sizeof(struct node));
            temp=malloc(sizeof(struct node));
            printf("Enter value:");
            scanf("%d",&n);
            new->data=n;
            new->next=NULL;
            if(head==NULL)
                head=new;
            else
                {
                    temp=head;
                    while(temp->next!=NULL)
                        {
                            temp=temp->next;

                        }
                        temp->next=new;
                }
                break;
        case 2:
                    //struct node *temp;
                    temp=head;
                    while(temp->next!=NULL)
                    {
                        printf("%d",temp->data);
                        temp=temp->next;
                    }
                    break;
        case 3: exit(1);
        default: printf("Invalid Choice");
    }
    }

}