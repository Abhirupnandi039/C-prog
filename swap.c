#include<stdio.h>
int main()
{
    int a,b,t;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    t=a;
    a=b;
    b=t;
    printf("After swapping the values of a & b=%d %d",a,b);
    return(1);
}