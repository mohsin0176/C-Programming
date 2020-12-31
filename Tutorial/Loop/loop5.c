#include<stdio.h>
void main()
{
    int i,num,sum=0;
    printf("Enter the number up to u want to add:\n");
    scanf("%d",&num);
    for(i=0;i<=num;i++)
    {
        sum=sum+i;

    }
     printf("The Result is:%d\n",sum);
}
