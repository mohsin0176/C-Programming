
#include<stdio.h>
int main()
{
    FILE *fptr1;FILE *fptr2;
    char ch;
    fptr1=fopen("myfile1.txt","r");
    if(fptr1==NULL)
    {
        puts("Unable to open the file");
        exit(1);
    }
    fptr2=fopen("myfile2.txt","w");
    if(fptr2==NULL)
    {
        puts("Unable to open the file");
        exit(2);
    }
    while(1)
    {
        ch=fgets(fptr1);
        if(ch==EOF)
            break;
        else
            fputs(ch,fptr2);
    }
    fclose(fptr1);
    fclose(fptr2);
    return 0;
}
