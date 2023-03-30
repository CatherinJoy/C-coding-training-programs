#include<stdio.h>
#include<stdlib.h>

void main()
{
    int *n=(int*) malloc (4*sizeof(int));
    int i;
    n[0]=1;
    n[1]=2;
    n[2] =3;
    printf("\nStored integers are\n");
    for(int i=0;i<4;i++)
    {
        printf("n[%d] = %d\n",i,n[i]);
    }   
}
