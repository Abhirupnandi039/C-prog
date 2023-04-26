#include <stdio.h>
int main()
{
    int i, n, flag, r;
    printf("Enter a range:");
    scanf("%d",&n);
    flag=0;
    for(i=1;i<=n;i++)
    {
        r=i%4;
        if(r==0)
        {
            flag=1;
            break;
    
        }
    }
    if(flag=0)
    printf("%d ",&i);
    return(1);
    }    
