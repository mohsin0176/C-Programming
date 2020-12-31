#include<stdio.h>
struct student {
char name[50];
int roll;
float marks;
};
int main()
{
    struct student s;
    printf("Enter Information About Student:\n\n");
    printf("Enter Name:\n");
    scanf("%s",&s.name);
    printf("Enter Roll:\n");
    scanf("%d",&s.roll);
    printf("Enter Marks:\n");
    scanf("%f",&s.marks);
    printf("Display Information:\n");
    printf("Name is :%s\n",s.name);
    printf("Roll is :%d\n",s.roll);
    printf("Marks id :%f\n",s.marks);

    return 0;
}
