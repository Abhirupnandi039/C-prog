#include<stdio.h>
int main()
{
    int a,c=1,i,k=-1,m=1;
    printf("enter no: ");
    scanf("%d",&a);
    for(i=1;i<a;i++)
    {
        c=c*i;

    }
    printf("factorial=%d\n",c);
    c=1;
    for(i=1;i!=k;i++)
    {
        c=c*i;
        if(c/i!=m)
        {
            printf("this machine can printf factorial upto %d",i-1);
        }
        m=c;
    }
    return 0;
}