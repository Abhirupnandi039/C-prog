#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int main()
{
    int data, ch, n;
    struct node *new1 = NULL;
    struct node *head = NULL;
    struct node *temp = NULL;
    while (1)
    {
        printf("\nPress 1 to add a node in the data structure:");
        printf("\nPress 2 to display the list:");
        printf("\npress 3 to delete a node from the list:");
        printf("\npress 4 to insert a node at the begining:");
        printf("\npress 6 to terminate the program");
        printf("\nEnter your choice");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            new1 = (struct node *)malloc(sizeof(struct node));
            printf("\nEnter the value:");
            scanf("%d", &n);
            new1->data = n;
            new1->next = NULL;
            if (head == NULL)
                head = new1;
            else
            {
                temp = head;
                while (temp->next != NULL)
                {
                    temp = temp->next;
                }
                temp->next = new1;
            }
            break;
        case 2:
            temp = head;
            while (temp != NULL)
            {
                printf("%d", temp->data);
                temp = temp->next;
            }
            break;
        case 3:
            if (head == NULL)
            {
                printf("Empty List");
            }
            else
            {
                temp = head;
                while (temp->next->next != NULL)
                {
                    temp = temp->next;
                }
                temp->next = NULL;
            }
            break;
        case 4: 
            new1 = (struct node *)malloc(sizeof(struct node));
            printf("\nEnter the value for new node:");
            scanf("%d", &n);
            new1->data = n;
            new1->next = NULL;
            
            new1->next=head;
            head=new1;
            printf("%d",new1->data);
            break;
        case 6:
            exit(1);
        default:
            printf("Invalid Input");
        }
    }
}
