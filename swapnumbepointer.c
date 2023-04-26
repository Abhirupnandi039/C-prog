#include<stdio.h>
void main()
{
    int a,b;
    int *x,*y,*c;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    x=&a;
    y=&b;
    printf("Value of a & b before swap=%d %d",*x,*y);
    *c=*x;
    *x=*y;
    *y=*c;
    printf("\nValue of a & b after swap=%d %d",*x,*y); 
    printf("\nValue of a & b after swap=%d %d",a,b); 
}