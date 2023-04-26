#include <stdio.h>
int main()
{
    int fare, d;
    printf("Enter a distance:");
    scanf("%d", &d);
    if (d <= 10)
        fare = 80;
    elseif(d <= 20)
        fare = 80 + (d - 10) * 6;
    elseif(d <= 30)
        fare = 80 + 60 + (d - 20) * 5;
    else 
          fare = 80 + 60 +50+(d-30)*4;
          printf("Fair to be paid=%d",fare);
          return(1);
}