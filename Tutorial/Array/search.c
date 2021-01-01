#include<stdio.h>

int main()
{
    int num[5];
    int i,target;
    printf("Enter 5 Number:\n");
    for(i=0;i<=5;i++)
    {
        scanf("%d",&num[i]);
    }
    printf("Enter The Number You want to search:\n");
    scanf("%d",&target);
    for(i=0;i<=5;i++)
    {
        if(num[i]==target)
        {
            printf("The Location Of Number is :%d\n",i);
            printf("The Number is: %d\n",num[i]);
            break;
        }
        else
        {
            printf("Number Not found.\n");
            continue;
        }
    }
    return 0;
}
