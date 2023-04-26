#include<stdio.h>
#include<stdlib.h>
int main()
{
    int arr[10],i,top=-1,ch,n;
    while(1)
    {
        printf("\npress 1 to push");
        printf("\npress 2 to pop");
        printf("\npress 3 to display");
        printf("\npress 4 to terminate");
        printf("\nEnter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                    printf("\nEnter value to push:");
                    scanf("%d",&n);
                    top++;
                    if(top==10)
                        printf("\nOverflow");
                    else
                        {
                            arr[top]=n;
                        }
                        break;
            case 2:
                    if(top==-1)
                            printf("\nUnderflow");
                    else
                    {
                        printf("\npoped element=%d ",arr[top]);
                        top--;

                    }
            case 3:
                    printf("\nThe elements in stock=\n");
                    for(i=0;i<=top;i++)
                        printf("%d ",arr[i]);
                    break;
            case 4:
                    printf("\nprogram is terminnating:");
                    exit(1);
            default:printf("\nInvalid choice");
        }
    }
}