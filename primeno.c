#include<stdio.h>
int main()
{
    int n,i,r,flag;
    printf("Enter a number:");
    scanf("%d",&n);
    flag=0;
    for(i=2;i<=(n-1);i++)
    {
        r=n%i;
        if(r==0)
        {
            printf("The number is non prime");
            flag=1;
            break;
        }
    }
    if(flag==0)
     printf("The number is prime");
     return(1);
}
