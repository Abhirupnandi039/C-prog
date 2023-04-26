#include<stdio.h>
int armstrong(int n);
int main()
{
    int n,k;
    printf("Enter a number:");
    scanf("%d",&n);
    k=armstrong(n);
    if(k==1)
    printf("The number is armstrong");
    else
    printf("The number is not armstrong");

}
int armstrong (int n)
{
    int sum=0,r,m=n;
    while(n>0)
    {
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;
    }
    printf("Sum of cube of digits of the number=%d\n",sum);
    if(m==sum)
    return 1;
    else
    return 0;

}