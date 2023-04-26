#include<stdio.h>
int main()
{
    int ch;
    float a,b,c;
    printf("\nPress 1 to add two numbers:");
    printf("\npress 2 to subtract two numbers:");
    printf("\n press 3 to multiply two numbers:");
    printf("\npress 4 to divide two numbers:");
    printf("\nEnter your choice:");
    scanf("%d",&ch);
    if(ch<1 || ch>4)
    printf("Invalid input");
    else
    {
    printf("\nEnter two numbers:");
    scanf("%f%f",&a,&b);
    switch(ch)
    {
        case 1:
                  c=a+b;
                  printf("Addition of two numbers=%.2f",c);
                  break;
        case 2:
                 c=a-b;
                 printf("Subtraction of two numbers:%.2f",c);
                 break;
        case 3:
                 c=a*b;
                 printf("Multiplication of two numbers:%.2f",c);
                 break;
        case 4:
                if(b==0)
                printf("divison not possible");
                else
                  { c=a/b;
                   printf("divison of two numbers=%.2f",c);
                   }
                   break;
                   
                default :printf("Invalid choice");

    }
}
    return 0;
}