
#include<stdio.h>
int main()
{
    char s1[100];
    char s2[100];
    char s3[100];
    char s4[100];
    gets(s1);
    gets(s2);
    puts(strcat(s1,s2));
    gets(s3);
    gets(s4);
    puts(strncat(s3,s4,2));

    return 0;
}
