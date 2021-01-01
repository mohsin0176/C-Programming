#include<stdio.h>
int main()
{
    int a,b,sum=0;
    scanf("%d",&a);
    for(b=1;b<a;b++)
    {
        if(a%b==0)
        {
            sum=sum+b;
            sum++;
        }
    }
    if(sum==a)
    {
        printf("Number is  Perfect");
    }
    else

    {
        printf("Number is not Perfect");
    }
    return 0;
}
