#include<stdio.h>
int gcd(int a,int b);
int main()
{
    int m,n,x,k;
    printf("Enter two numbers:");
    scanf("%d%d",&m,&n);
    x=gcd(m,n);
    printf("\nGCD=%d",x);
    k=(m*n)/x;
    printf("\nLCM=%d",k);

}
int gcd(int a,int b)
{
    int t,r;
    if(b>a)
    {
        t=a;
        a=b;
        b=t;
    }
    while(b!=0)
    {
        r=a%b;
        a=b;
        b=r;

    }
    return a;

}