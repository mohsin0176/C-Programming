#include<stdio.h>
int main()
{
    int i,num[10],sum=0;
    for(i=0;i<=10;i++)
    {
        scanf("%d",&num[i]);
        sum=sum+num[i];
    }
    printf("Total is:%d",sum);
    return 0;
}
