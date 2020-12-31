#include<stdio.h>
int main()
{
    int i,a[4],b,c;
    for(i=0;i<=3;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter The Number You Want to search:\n");
    scanf("%d",&b);
   for(i=0;i<=3;i++)
    {
        if(a[i]==b)
        {
            printf("location is:%d",i);
        }
        else
        {
        continue;
        }
    }
    return 0;
}
