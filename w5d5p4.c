#include<stdio.h>
int main()
{
    int r,n,sum=0,count =0,rev=0,q,m;
    printf("Enter a number:");
    scanf("%d",&n);
    m=n;
    while(n>0)
    {
        r=n%10;
        q=n/10;
        sum=sum+r;
        count ++;
        rev=rev*10+r;
        n=q;


    }
    printf("\nno of digits=%d",count);
    printf("\nsum of digit=%d",sum);
    if(rev==m)
    printf("/n the number is palindrome");
    else
    printf("\n not palindrome");
    return 0;
}