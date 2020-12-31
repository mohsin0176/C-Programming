#include<stdio.h>
#include <string.h>
    struct student{
    int roll;
    char name[20];
    char dept[20];
    };

int main()
{


struct student s1,s2,s3;
    s1.roll=120;
    strcpy(s1.name,"suman");
    strcpy(s1.dept,"cse");
    s2.roll=565;
    strcpy(s2.name,"munim");
    strcpy(s2.dept,"iit");
    s3.roll=320;
    strcpy(s3.dept,"eco");
    strcpy(s3.name,"naima");
    printf("%s\n",s1.name);
    printf("%d\n",s1.roll);
    printf("%s\n",s1.dept);
    printf("%s\n",s2.name);
    printf("%d\n",s2.roll);
    printf("%s\n",s2.dept);
    printf("%s\n",s3.name);
    printf("%d\n",s3.roll);
    printf("%s\n",s3.dept);

    return 0;
}
