#include<stdio.h>
void main()
{

    int marks;
    printf("Press 1 for grater then 80\n");
    printf("Press 2 for grater then 70\n");
    printf("Press 3 for grater then 60\n");
    printf("Press 0 for fail\n");
    printf("Enter your Marks:\n");
    scanf("%d",&marks);
    switch(marks)
    {

    case 1:
        printf("You got 80");
        break;
    case 2:
        printf("You got 70");
        break;
    case 3:
        printf("You got 60");
        break;
    case 0:
        printf("You got less than 33");
        break;
    default:
        printf("You got 0");
        break;
    }
}
