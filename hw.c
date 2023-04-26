#include<stdio.h>
void main()
{
    int a[]={2,4,6,8,10}
    int c;
    a[0]=23;
    a[3]=a[1];
    c=a[0]+a[1];
    printf("sum=%d",c);
}