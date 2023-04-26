#include<stdio.h>
void swap(int *n1,int *n2);
int main()
{
    int a,b;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    printf("Before swap value of A& B=%d %d",a,b);
    swap(&a,&b);
    printf("After swap value of A& B=%d %d",a,b);

}
void swap(int *n1,int *n2 )
{
    int temp;
    temp=*n1;
    *n1=*n2;
    *n2=temp;
}