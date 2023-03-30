#include<stdio.h>

void main()
{
    int a[10],i,s=0,f=1;
    printf("\nEnter 10 elements of 1D array: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        s+=a[i];
    }
    printf("1D array : ");
    for(i=0;i<10;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\nSum of elements of array = %d",s);
    i=2;
    while(i<=(s/2))
    {
        if(s%i==0)
        {
            f=0;
            break;
        }
        i++;
        f=1;
    }
    if(f==0)
    {
        printf("\nSum is not a prime mumber.");
    }
    else
    {
        printf("\nSum is not a prime number. ");
    }

}