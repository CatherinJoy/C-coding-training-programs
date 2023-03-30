#include<stdio.h>

int stringvalid(char s[]);

void main()
{
    char s[50];
    int n;
    printf("Enter a string : ");
    scanf("%s",s);
    n=stringvalid(s);
    if(n==0)
    {
        printf("\nString is valid\n");
    }
    else
    {
        printf("\nString is invalid\n");
    }
}

int stringvalid(char s[])
{
    int v=0;
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]=='*')
            v++;
        if(s[i]=='#')
            v--;
        if(s[i]!='*'|| s[i]!='*')
        {
            v=-1;
            break;
        }
    }
    return v;
}