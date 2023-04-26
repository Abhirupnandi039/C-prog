#include <stdio.h>
void main()
{
    int x =50;
    int *y;
    y=&x;
    printf("Value of x=%d\n",x);
    printf("Address of x=%x\n",y);
    printf("Value stores in y=%d\n",*(y));
}