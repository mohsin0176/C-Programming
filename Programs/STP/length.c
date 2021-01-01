#include<stdio.h>
#include<conio.h>
int main()
{
    char ch[10];
    int i;
    int count=0;g
    getch(ch);
    for(i=0;ch[i]!='\0';i++)
    {
        count++;
    }
    printf("%d",count);
    getch();
    return 0;
}
