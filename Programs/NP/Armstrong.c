#include<stdio.h>
int main()
{
    int num,r,temp,sum=0;
    scanf("%d",&num);
    temp=num;
    while(num !=0)
    {
        r=num%10;
        num=num/10;
        sum=sum+(r*r*r);

    }
    if(sum==temp)
    {
        printf("You Entered Armstrong Number");
    }
    else
    {
        printf("Your Entered number is not Armstrong");
    }
    return 0;
}
