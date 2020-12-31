#include<stdio.h>
void main()
{
    int i,j,num;
    for (i=5;i>=0;i--)
    {
        for(j=0;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
