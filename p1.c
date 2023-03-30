// Program to check whether we are able to frame a triangle or not given three sides 
#include<stdio.h>

void main()
{
    int a,b,c;
    printf("Enter length of three sides of the triangle : ");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b>=c && b+c>=a && a+c>=b)
        printf("\nWe are able to frame the triangle\n");
    else
        printf("\nWe are not able to frame the triangle\n");
}