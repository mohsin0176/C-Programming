
#include<stdio.h>

int main()
{
    int amount,rate,time,interest,TI;
    scanf("%d",&amount);
    scanf("%d",&rate);
    scanf("%d",&time);
    interest=(time*rate*amount)/100;
    printf("%d\n",interest);
    TI=((time*rate*amount)/100)+amount;
    printf("%d",TI);

    return 0;
}
