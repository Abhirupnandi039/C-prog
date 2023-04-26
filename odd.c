#include <stdio.h>
int main()
{
    int a, r;
    printf("Enter a number:");
    scanf("%d", &a);
    r = a%2;
    if(r==0)
    {
        printf("The number is even");
    }
    else
    {
        printf("The number is odd");
    }
    return(1);
}