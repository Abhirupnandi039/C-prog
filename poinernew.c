#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,i,*ptr,sum=0;
    printf("Enter number of elements:");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int) );
    if(ptr==NULL)
    {
        printf("Memory allocation failed");
        exit(0);
    }
    printf("Enter elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",ptr+i);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+*(ptr+i);
    }
    printf("sum=%d",sum);
    free(ptr);
    return 0;
}