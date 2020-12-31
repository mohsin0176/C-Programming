#include<stdio.h>
int main()
{
    int i,sum=0,a[4];
    for(i=0;i<=3;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=3;i++)
    {
        sum=sum+a[i];
    }
    printf("%d",sum);

return 0;

}
