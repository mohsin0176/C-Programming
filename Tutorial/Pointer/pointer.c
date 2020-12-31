#include<stdio.h>
int main()
{
    int n,*ptr;
    scanf("%d",&n);
    ptr=&n;
    printf("Address of n is %d\n",ptr);
    printf("Value of n is %d",*ptr);
    return 0;
}
