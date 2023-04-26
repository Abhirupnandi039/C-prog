#include<stdio.h>
int main()
{
    int i,n,flag,r,j;
    printf("Enter the range:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       flag=1;
       for(j=2;j<=(i-1);j++)
       {
           r=i%j;
           if(r==0)
           {
               flag=0;
               break;
           }
       }
       if(flag==1)
       printf("%d ",i);

    }
    return(1);
}