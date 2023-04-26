#include<stdio.h>
int main()
{
    int a,i,r;
    printf("Enter a number:");
    scanf("%d",&a);
    for(i=1;i<=10;i++)
    {
        r=a*i;
        printf("%dx%d=%d\n",a,i,r);
    }
    return(1);
}