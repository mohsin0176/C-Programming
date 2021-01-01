
#include<stdio.h>
#include<conio.h>
int main()
{
    char ch[10];
    int i,count=0;
    getch(ch);
    for(i=0;ch[i]!='\0';i++)
    {
        if(ch[i]==' ')
        {
            count++;
        }
    }
    printf("%d",count);
    getch();
    return 0;
}
