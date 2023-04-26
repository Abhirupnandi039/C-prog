#include<stdio.h>
int main()
{
    int rev=0,r,n;
    printf("Enter a number:");
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    printf("Reverse=%d",rev);
    return(1);
}