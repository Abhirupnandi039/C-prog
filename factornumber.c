#include<stdio.h>
void main()
{
    int i,n,r;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("factors of the number:\n");
    for(i=1;i<=n;i++)
    {
        r=n%i;
        if(r==0)
        printf("%d\n",i);
    }
}