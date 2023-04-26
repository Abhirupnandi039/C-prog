#include <stdio.h>
int main()
{
    char grade;
    float d;
    printf("Enter the marks:");
    scanf("%f", &d);
    if (d >=90)
        grade ='o';
    else if(d >=80)
        grade ='E';
    else if(d >=70)
        grade ='A';
    else if(d >=60)
        grade ='B';
    else if(d >=50)
        grade='C';
    else if(d>=40)
        grade='D';
    else
        grade='F';
    printf("Grade obtained by the sutend in exam=%c",grade);
    return 0;        
}