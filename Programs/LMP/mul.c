#include<stdio.h>
int main()
{
    int m,n,p,q;
    int i;
    int j,k,sum=0;
    int a[10][10],b[10][10],c[10][10];
    scanf("%d",&m);
    scanf("%d",&n);
    printf("Enter The Element of First Matrix\n");
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
             for(k=0;k<m;k++)
             {
                 sum=sum+a[i][k]*b[k][j];
             }
             c[i][j]=sum;
             sum=0;
         }
     }
     for(i=0;i<=m;i++)
     {
         for(j=0;j<=n;j++)
         {
             printf("%d",&c[i][j]);
         }
     }
     return 0;
}
