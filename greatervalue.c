#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    if(a>b)
 {
     c=a;
      }  
    if(b>a)
    {
        c=b;
    }
    printf("Maximum value between a and b=%d",c);
    return(1);
}