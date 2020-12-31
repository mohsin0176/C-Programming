#include<stdio.h>
void main()
{
    int i,num;
    printf("Enter The number you want to check:\n");
    scanf("%d",&num);
    i=2;
    while(i<=(num-1))
    {
        if(num%i==0)
        {
            printf("Not A Prime Number");
            break;
        }
        i++;
        if(i=num)
        {
            printf("Prime Number");
        }
    }

}
