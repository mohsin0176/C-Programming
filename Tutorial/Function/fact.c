#include<stdio.h>
int main()
{

    int i,factorial,num;
    printf("Enter The number:\n",num);
    scanf("%d",&num);
    factorial=fact(num);
    printf("The Result is:%d",factorial);
    return 0;
}

int fact(int num)
{
    int i,f=1;
    for(i=1;i<=num;i++)
    {
        f=f*i;

    }
    return f;
}
