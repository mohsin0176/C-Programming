#include<stdio.h>
int main()
{
    float celcius,farenhite,c;
    scanf("%f",&farenhite);
    c=farenhite-32;
    celcius=c*(5/9);
    printf("celcius is:%f",celcius);
    scanf("%f",&celcius);
    farenhite=(celcius*(9/5))+32;
    printf("Farenhite is:%f",farenhite);
    return 0;
}
