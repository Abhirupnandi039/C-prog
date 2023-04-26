#include <stdio.h>
int main()
{
    float sp, d, t, p;
    printf("Enter the retail price:");
    scanf("%f", &p);
    sp = p+(p*0.15);
    d=sp*0.05;
    t=sp-d;
    printf("\nSell price=%f\n",sp);
    printf("Total discount price=%f\n",d);
    printf("Total price that customer has to pay=%f\n",t);
    return 0;
}