#include<stdio.h>
int main()
{
    int a,r;
    printf("Enter a year:");
    scanf("%d",&a);
    r=a%4;
    if(r==0)
    {
        printf("The year is lypeyear");
    }
    else
    {
        printf("The year is not lypeyear");
    }
    return(1);
}