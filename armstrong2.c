#include<stdio.h>
int main()
{
    int n,i,m,r,q,sum=0;
    printf("Enter the series:");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        sum=0;
        m=i;
        while(m!=0)
        {
            r=m%10;
            q=m/10;
            sum=sum+(r*r*r);
            m=q;
        }
        if(sum==i)
        printf("Armstrong numbers are=%d\n",i);
    }
}

