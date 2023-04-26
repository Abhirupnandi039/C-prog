#include<stdio.h>
int main()
{
    int ch;
    float a,b,c;
    printf("press 1 to add two numbers:");
    printf("press 2 to subtract two numbers:");
    printf("press 3 to multiply two numbers:");
    printf("press 4 to divide two numbers:");
    printf("Enter your choice:");
    scanf("%d",&ch);
    printf("Enter two numbers:");
    scanf("%f%f",&a,&b);
    switch(ch)
    {
        case 1:
                c=a+b;
                printf("Add of two numbers:%f",c);
                break;
        case 2:
                c=a-b;
                printf("Subtraction of two numbers:%f",c);
                break;
        case 3:
                c=a*b;
                printf("Multiply of two numbers:%f",c);
                break;
         case 4:
                if(b==0)
                printf("divison not posible:");
                else{         
                c=a/b;
                printf("Divison of two numbers:%f",c);
                }
                break;
         default:printf("Invalid choice:");
         }
         return 0;                              
    }
