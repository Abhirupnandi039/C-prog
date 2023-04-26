#include<stdio.h>
int main()
{
    int i,j,arr[20],t,n,pos;
    printf("Enter no. of elements:");
    scanf("%d",&n);
    printf("Enter the array elements:\n");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {
        pos=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[pos])
            {
                pos=j;
            }
        }
        t=arr[i];
        arr[i]=arr[pos];
        arr[pos]=t;
 }
 printf("\n sorted Array:\n");
 for(i=0;i<n;i++)
 printf("%d ",arr[i]);
}