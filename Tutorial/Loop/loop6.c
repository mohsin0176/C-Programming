#include<stdio.h>
void main()
{
    int i,num,mul=1;
    printf("Enter The number to up you want to Multiply:\n");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
      mul=mul*i;
    }
    printf("Your Result is:%d\n",mul);
}
