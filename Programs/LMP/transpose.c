#include<stdio.h>
int main()
{
    int m,n,i,j,a[10][10],b[10][10];
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
            b[j][i]=a[i][j];
        }
    }
    for(i=n;i<=n;i++)
    {
        for(j=0;j<=m;j++)
        {
            printf("%d",b[i][j]);

        }
        printf("\n");
    }

    return 0;
}
