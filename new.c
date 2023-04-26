#include<stdio.h>
int main()
{
    int k=1,n,j,i;
    printf("Enter no. of lines:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",k);
            k=k+1;
        }
        printf("\n");
    }
}