#include<stdio.h>
int sum(int x,int y);
int diff(int x,int y);
int mul(int x,int y);
int div(int x,int y);

int main()
{
    int a,b,s,d,m,div1;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    s=sum(a,b);
    d=diff(a,b);
    m=mul(a,b);
    div1=div(a,b);
    printf("Sum=%d\n",s);
    printf("Difference=%d\n",d);
    printf("Multiplication=%d\n",m);
    printf("Divison=%d\n",div1);
}
int sum(int x,int y)
{
    int z;
    z=x+y;
    return(z);
}
int diff(int x,int y)
{
    int z;
    z=x-y;
    return(z);

}
int mul(int x,int y)
{
    int z;
    z=x*y;
    return(z);
}
int div(int x,int y)
{
    int z;
    z=x/y;
    return(z);
}