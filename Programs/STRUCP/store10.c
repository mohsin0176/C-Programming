#include<stdio.h>
struct student
{
 char name[50];
 int roll;
 float marks;
};
int main()
{
    struct student s[10];
    int i;
    printf("Enter Information about Student:\n");
    for(i=0;i<10;i++)
    {
        s[i].roll=i+1;
        printf("\nFor Roll Number %d\n",s[i].roll);
        printf("Enter Name:\n");
        scanf("%s",s[i].name);
        printf("Enter Marks:\n");
        scanf("%f",&s[i].marks);
        printf("\n");
    }
    printf("Display Information About Student:\n");
    for(i=0;i<10;i++)
    {
        printf("Roll:%d\n",s[i].roll);
        printf("Name:%s\n",s[i].name);
        printf("Marks:%f\n",s[i].marks);
    }
    return 0;
}
