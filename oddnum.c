#include<stdio.h>
int main()
{
    int r,n,x,i,sum=0;
    printf("Enter the number of terms");
    scanf("%d",&n);
    x=1;
    for(i=1;i<=n;i++)
    {
        printf("%d ",x);
        sum=sum+x;
        x=x+2;
    }
    printf("Sum of odd terms=%d",sum);
}