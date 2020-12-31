#include<stdio.h>
int main()
{
    char ch='#';
    char name[15]="Bangladesh";
    printf("Character:\n");
    printf("%c\n",ch);
    printf("Right Justification=%3c %3c\n",ch,ch);
    printf("Left Justification=%-3c %-3c\n\n",ch,ch);
    printf("String:\n");
    printf("Main String=%s \n",name);
    printf("Right Justification:%30s\n",name);
    printf("Left Justification :%-30s\n",name);

    return 0;
}
