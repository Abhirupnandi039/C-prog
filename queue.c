#include<stdio.h>
#include<stdlib.h>
#define maxsize 60

int main()
{
    int arr[maxsize];
    int front=-1,rear=-1,n,ch,i;
    while(1)
    {
        printf("\npress 1 to enque:");
        printf("\npress 2 to deque");
        printf("\npress 3 to display");
        printf("\npress 4 to terminate");
        printf("\nenter your choice");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                    if(rear==maxsize-1)
                        printf("Queue is Full");
                    else
                    {
                        printf("\nEnter the element:");
                        scanf("%d",&n);
                        if(front==-1)
                            front=0;
                        rear++;
                        arr[rear]=n;
                        printf("Element inserted successfully");
                    }
                    break;
            case 2:
                    if(front==-1|| front>=rear)
                        printf("Queue is Empty");
                    else
                    {
                        printf("Element dequeued=%d",arr[front]);
                        front++;
                    }
                    break;
            case 3:
                    if(front==-1 || front>rear)
                        printf("Queue is Empty");
                    else
                    {
                        for(i=front;i<=rear;i++)
                        printf("%d ",arr[i]);
                    }
                    break;
            case 4:
                    printf("Program is Terminating");
                    exit(1);
                    default:printf("Invalid Choice");
                    

        }
    }
}