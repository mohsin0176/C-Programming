
#include<stdio.h>
int main()

{
    int i,sum=0,num[10];
    for(i=0;i<=9;i++)
    {
        scanf("%d",&num[i]);
        sum=sum+num[i];
    }


    printf("Average is:%d",sum/9);
    return 0;
}
