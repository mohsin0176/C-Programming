#include<stdio.h>
void main()
{
    int i,num,sum;
    printf("Enter The number you want to check:\n");
    scanf("%d",&num);
    for(i=2;i<=(num-1);i++)
    {
        sum=num%i;
        if(sum==0)
        {
            printf("Entered Number is Not Prime\n");
            break;
        }
        else
        {
            printf("Entered Number is Prime\n");
            break;
        }

    }

}
