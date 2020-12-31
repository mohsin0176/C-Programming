#include<stdio.h>
int main()
{
    int num1,num2,result;
    printf("Enter Two Number:\n");
    scanf("%d",&num1);
    scanf("%d",&num2);
    result=add(num1,num2);
    printf("The Result is %d",result);
    return 0;
}

int add(int a,int b)
{
    int sum;
    sum=a+b;
    return sum;
}

