#include<stdio.h>
int main()
{

    int a[3][3],b[3][3],add[3][3],i,j;
    printf("Enter The Element of First Array:\n");
    for(i=0;i<=3;i++)
    {
        for(j=0;j<=3;j++)
        {
            scanf("%d\n",&a[i][j]);
        }
    }
    printf("The Elements of First Array:\n");
    for(i=0;i<=3;i++)
    {
        for(j=0;j<=3;j++)
        {
            printf("%d\n",a[i][j]);
        }
    }
printf("------------------------------\n");
printf("Enter The Element of Second Array:\n");
    for(i=0;i<=3;i++)
    {
        for(j=0;j<=3;j++)
        {
            scanf("%d\n",&b[i][j]);
        }
    }
    printf("The Elements of Second Array:\n");
    for(i=0;i<=3;i++)
    {
        for(j=0;j<=3;j++)
        {
            printf("%d\n",b[i][j]);
        }
    }
printf("------------------------------\n");
printf("The Elements of Third Array:\n");
for(i=0;i<=3;i++)
    {
        for(j=0;j<=3;j++)
        {
            add[i][j]=a[i][j]+b[i][j];
            scanf("%d\n",&add[i][j]);
        }
    }
for(i=0;i<=3;i++)
    {
        for(j=0;j<=3;j++)
        {
            printf("%d\n",add[i][j]);

        }
    }

    return 0;
}
