#include<stdio.h>

int main()
{
    int n;
int factorial;
    printf("Enter The Number of factorial:\n");
    scanf("%d",&n);
    factorial=fact(n);
    printf("The result is:%d",factorial);
    return 0;
}
int fact(int n)
{
        if (n>=1)
        {
            return n*fact(n-1);
        }
        else

        {
            return 1;
        }

}
