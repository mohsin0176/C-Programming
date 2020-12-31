#include<stdio.h>
int main()
{
    int num,result;
    printf("Enter The Number:\n");
    scanf("%d",&num);
    result=add(num);
    printf("The Result is %d",result);
    return 0;
}

int add(int num)
{
    if(num !=0)
    {
    return num+add(num-1);
    }
}
