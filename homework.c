#include<stdio.h>
#include<math.h>
int main()
{
    int x,a,f,i,j,n;
    float sum=1.0;
    printf("Enter the value of x:");
    scanf("%d",&x);
    printf("Enter number of terms:");
    scanf("%d",&n);
    printf("%d",sum);
    for(i=1;i<=n-1;i++)
    {
        a=pow(x,i);
        f=1;
        for(j=1;j<=i;j++)
        {
            f=f*j;
        }
        if(i%2!=0)
        {
         sum=sum-((float)a/(float)f);
         printf("-%d/%d",a,f);
        }
        else
        {
         sum=sum+(a/f);
         printf("+%d/%d",a,f);
        }
    }
    printf("\nSum of the series=%d",sum);
    return 0;
    
}