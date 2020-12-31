#include<stdio.h>
#include<string.h>
int main()
{
    FILE *fptr;
    char str[100];
    fptr=fopen("print.txt","w");
    printf("Enter String:\n");
    while(strlen(gets(str)>0)
          {
              fputs(str,fptr);
              puts("\n\n");
          }
    fclose(fptr);
    fptr=fopen("print.txt","r");
    while(fgets(str,100,fptr)!=NULL)
        {
            puts(str);
            puts("\n\n");
        }
        fclose(fptr);
    return 0;
}
