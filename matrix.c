#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],c[10][10],i,j,m,n;
    printf("Enter no. of row of the matrix:");
    scanf("%d",&m);
    printf("Enter no. of column of the matrix:");
    scanf("%d",&n);
    printf("Enter the 1st matrix elements:");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Entered first matrix:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    
    printf("Enter the 2nd matrix elements:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    
    printf("Entered second matrix:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    
    printf("Addition Matrix:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",c[i][j]);
        }
            printf("\n");
    }
    return (1);
}
