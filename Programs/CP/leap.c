
#include<stdio.h>
int main()

{
    int leap,result;
    scanf("%d",&leap);
    if((leap%4)==0)
    {
        printf("Year is Leap Year");
    }
    else
    {
        printf("Year is not Leap Year");
    }
    return 0;
}
