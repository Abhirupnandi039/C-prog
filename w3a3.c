#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,x1,x2,y;
    printf("Enter three numbers:");
    scanf("%f%f%f",&a,&b,&c);
    y=sqrt((b*b)-(4*a*c));
    if(y>0)
    {
    x1=(-b+y)/(2*a);
    x2=(-b-y)/(2*a);
    printf("Roots of the equation are=%f %f",x1,x2);
    }
    else if(y==0)
    {
        x1=-b/(2*a);
        x2=-b/(2*a);
        printf("Roots are equal=%f  & %f",x1,x2);
    }
    else
        printf("Roots are imaginary");

    
    return 0;
}
