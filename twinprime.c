#include<stdio.h>
int prime(int m);
int main()
{
    int a,b,x,y;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    x=prime(a);
    y=prime(b);
    if(x==1 & y==1)
    {
        if((a-b)==2|| (b-a)==2)
        printf("The numbers are twin prime");
        else
        printf("The numbers are prime but not twin prime");

    }
    else
    printf("any of the no. is not prime");
}
int prime(int m)
{
    int i,flag=1;
    for(i=2;i<m;i++)
    {
        if(m%i==0)
        {
            flag=0;
            break;
        }
    }
    return flag;
}