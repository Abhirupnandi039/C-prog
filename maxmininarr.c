#include<stdio.h>
void main()
{
    int a[10],i,n,max=a[0],min=a[0];
    printf("Enter the array elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    max=a[0];
    min=a[0];
    for(i=1;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
        if(min>a[i])
        {
            min=a[i];
        }
    }
    printf("Maximum value from the array is=%d\n",max);
    printf("Minimum value of the array is=%d",min);
}