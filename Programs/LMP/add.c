#include<stdio.h>
int main()
{
    int m,n,i,j;
    int a[10][10],b[10][10],sum[10][10];
    scanf("%d%d",&m,&n);
    for(i=0;i<=m;i++)
    {
        for(j=0;j<=n;j++)
        {
            scanf("%d",a[i][j]);
        }
    }
    for(i=0;i<=m;i++)
    {
        for(j=0;j<=n;j++)
        {
            scanf("%d",b[i][j]);
        }
    }
    for(i=0;i<=m;i++)
    {
        for(j=0;j<=n;j++)
        {
            sum[i][j]=a[i][j]+b[i][j];
        }
    }
    for(i=0;i<=m;i++)
    {
        for(j=0;j<=n;j++)
        {
            printf("%d",a[i][j]);
        }
    }
    return 0;
}
