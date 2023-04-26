#include<stdio.h>
int prime(int x);
int main()
{
    int r,n,k;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("Prime digits are:\n");
    while(n>0)
    {
        r=n%10;
        k=prime(r);
        if(k==1)
        printf("%d\n",r);
        n=n/10;

    }

}
int prime(int x)
{
    int flag=1,i;
    for(i=2;i<x;i++)
    {
        if(x%i==0)
        {
            flag=0;
            break;
        }
    }
    return(flag);
}

