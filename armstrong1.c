#include<stdio.h>
int main()
{
    int n,m,r,q,sum=0;
    printf("Enter a number:");
    scanf("%d",&n);
    m=n;
    while(n!=0)
    {
        r=n%10;
        q=n/10;
        sum=sum+(r*r*r);
        n=q;
    
    }
    printf("Sum of cube of digits of the number=%d\n",sum);
    if(sum==m)
    printf("Armstrong");
    else
    printf("Not Armstrong");
}