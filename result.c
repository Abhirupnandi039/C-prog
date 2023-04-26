#include <stdio.h>
int main()
{
    char grade;
    float d;
    printf("Enter the marks:");
    scanf("%f", &d);
    if (d >= 90)
        grade = '0';
    else if (d >= 80)
        grade = 'E';
    else if (d >= 70)
        grade = 'A';
    else if (d >= 60)
        grade = 'B';
    else if (d >=50)
    grade= 'D';
    else
    grade= 'f';
    printf("grade obtained by the student in exam=%c",grade);
    return 0;
}