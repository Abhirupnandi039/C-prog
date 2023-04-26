#include <stdio.h>
int main()
{
    int a, b, c, d, Grade;
    printf("Enter four numbers:");
    scanf("%d%d%d%d", &a, &b, &c, &d);
    Grade = (a + b + c + d) / 4;
    if (Grade < 50)
    {
        printf("FAIL");
    }
    if (Grade >50)
    {
        printf("PASS");
    }
    return(1);
}