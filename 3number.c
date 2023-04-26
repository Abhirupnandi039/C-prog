#include<stdio.h>
int main()
{
    int a,b,c,x;
    printf("enter three numbers:");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
    {
        x=a;
    }
    if(b>a && b>c)
    {
        x=b;
    }
    if(c>a && c>b)
    {
        x=c;
    }
    printf("Maximum value between a,b&c=%d",c);
    return(1);
}