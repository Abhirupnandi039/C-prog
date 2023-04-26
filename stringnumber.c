#include<stdio.h>
#include<string.h>
int main()
{
    char str[20],str1[20],x;
    int l,i,k=0;
    printf("Enter a string:");
    gets(str);
    l=strlen(str);
    for(i=0;i<l;i++)
    {
        x=str[i];
        if(x>='0' && x<='9')
        {
            str1[k]=str[i];
        }
    }
    str1[k]='\0';
    printf("New String=%s",str1);
    
    return 1;
}