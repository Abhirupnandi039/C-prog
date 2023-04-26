#include<stdio.h>
void main()
{
    int r,i,n,flag;
    for(i=100;i<=200;i++)
    {
    n=i;
    flag=1;
    {
        while(n>0)
        {
            r=n%10;
            if(r==0)
            {
                flag=0;
                break;
            }
            n=n/10;

        }
        if(flag==1)
        printf("%d\n",i);
    }
    }
}