#include<stdio.h>
int main()
{
    int n,m,i,j,k,x;
    printf("Enter line no:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(j=0;j<=n-i;j++)
        {
            printf(" ");
        }
        for(k=i;k<=x;k++)
        {
            printf("%d",k);

        }
        for(m=x-1;m>=i;m++)
        {
            printf("%d",m);
        }
        x=x+2;
        printf("\n");
    
    return 0;
}