#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int z=n-1;
    int i;
    for(i=2;i<=z;i++)
    {
        if(n%i==0)
        {
            printf("Number is not Prime");
            break;
        }
        else
        {
            continue;
        }
    }

    return 0;
}
