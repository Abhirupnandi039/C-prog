#include<stdio.h>
int main()
{
    int n,f=1,i;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n<10)
    {
        for(i=1;i<n;i++)
        {
            f=f*i;
        }    
            printf("factorial of the number:%d",f);
    }
        else
        {
            printf("Te program is not eligble for 2 digits number:");
        }
    return 0;
}