#include<stdio.h>
void main()
{

    int marks;
    printf("Enter Your Marks:");
    scanf("%d",&marks);
    if(marks>=35)
        {
        if(marks>=80)
        {
        printf("Grade A");
        }
        else
        {
        printf("You Pass");
        }
        }
    else
        {
        printf("You Fail");
        }
}
