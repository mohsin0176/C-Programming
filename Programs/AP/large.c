#include<stdio.h>
int main()
{
    int i,n;
    float arr[100];
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        scanf("%f",&arr[i]);
    }
    for(i=1;i<=n;i++)
    {
        if(arr[0]<arr[i])
        {
            arr[0]=arr[i];
        }
    }
    printf("largest is:%.2f",arr[0]);
    return 0;
}
