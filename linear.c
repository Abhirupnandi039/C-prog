#include<stdio.h>
int main()
{
    int arr[20],n,i,s,flag=0;
    printf("Enter no. of array elements:");
    scanf("%d",&arr[i]);
    printf("Enter the array elements: /n");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("Enter the search element:");
    scanf("%d",&s);
    for(i=0;i<n;i++)
    {
        if(arr[i]==s)
        {
            flag=1;
            printf("Search element found at position=%d",(i+1));
            break;
        }
    }
    if(flag==0)
    printf("Element not found in the list");
}