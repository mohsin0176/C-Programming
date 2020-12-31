
#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr=fopen("project.txt","r");
    if(fptr==NULL)
    {
        puts("Unable to open file");
        exit(1);
    }
    return 0;
}
