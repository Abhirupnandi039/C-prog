#include<stdio.h>
int pronic(int n);
int main()
{
    int n,k;
    printf("Enter a number:");
    scanf("%d",&n);
    k=pronic(n);
    if(k==1)
    printf("The number is pronic");
    else
    printf("The number is not pronic");
}
int pronic(int n)
{
    int r,i,flag=0;
    for(i=1;i<n;i++)
    {
        r=i*(i+1);
        if(r==n)
        {
            flag=1;
            break;
        }
    }
    return flag;
}