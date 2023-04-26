#include<stdio.h>
int main()
{
    int i,j,arr[20],t,n;
    printf("Enter no. of elements:");
    scanf("%d",&n);
    printf("Enter the array elements:\n");
    for( i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
    {
        if(arr[j]>arr[j+1])
        {
            t=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=t;
            }
    }
    }
    printf("\n")