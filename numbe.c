#include<stdio.h>
#include<string.h>
int main()
{
    char str[20],x;
    int l,i,v=0,a=0,s=0,c=0,sp=0,d=0;
    printf("Enter a string:");
    gets(str);
    l=strlen(str);
    for(i=0;i<l;i++)
    {
        x=str[i];
        if((x=='a'||x=='e'||x=='i'||x=='o'||x=='u')||(x=='A'||x=='E'||x=='I'||x=='O'||x=='U'))
        {
            v=v+1;
        }
        if((x>='a'&&x<='z')||(x>='A'&&x<='Z'))
        {
            a=a+1;
        }
        c=a-v;
        if(x==' ')
        {
            s=s+1;
        }
        if(x>='1' && x<='9')
            d=d+1;
    }
    sp=l-(a+d+s);
    printf("Length=%d\n",l);
    printf("No. of vowel=%d\n",v);
    printf("No. of Alphabet=%d\n",a);
    printf("No. of digit=%d\n",d);
    printf("No. of space=%d\n",s);
    printf("No. of special character=%d\n",sp);
}