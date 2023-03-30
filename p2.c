// Program to check whether the number is a perfect number or not

#include<stdio.h>

void main()
{
    int x,s=0;
    printf("Enter a number : ");
    scanf("%d",&x);
    for(int i=1;i<x;i++)
    {
        if(x%i==0)
        {
            s+=i;
        }
    }
    if(x==s)
    {
        printf("\n%d is a prefect number.\n\n",x);
    }
    else
    {
        printf("\n%d is not a prefect number.\n\n",x);
    }
}