#include<stdio.h>
int main()
{
    int i;int add=0;int n[5];
    for(i=0;i<=5;i++)
    {
        scanf("%d",(n+i));
        add=add+(*(n+i));
    }
    printf("%d",add);
    return 0;
}
