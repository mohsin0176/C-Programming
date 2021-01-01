
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,count=0;
    char ch[20];
    gets(ch);
    for(i=0;ch[i]!='\0';i++)
    {
        count++;
    }
    for(i=count-1;i>=0;i--)
    {
        printf("%c",ch[i]);
    }
    getch();
    return 0;
}
