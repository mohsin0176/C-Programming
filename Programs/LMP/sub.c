#include<stdio.h>
int main()
{
    int m,n,i,j,a[10][10],b[10][10],sub[10][10];
    scanf("%d",&m);
    scanf("%d",&n);
    for(i=0;i<=m;i++)
    {
        for(j=0;j<=n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
        for(i=0;i<=m;i++)
    {
        for(j=0;j<=n;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
        for(i=0;i<=m;i++)
    {
        for(j=0;j<=n;j++)
        {
            sub[i][j]=a[i][j]-b[i][j];
        }
    }

        for(i=0;i<=m;i++)
    {
        for(j=0;j<=n;j++)
        {
            printf("%d",sub[i][j]);
        }
    }
    return 0;
}
