#include<stdio.h>

int main()
{
    FILE *fptr;
    char ch;
    int n;
    fptr=fopen("myfile.txt","w");
    scanf("%c%d",&ch,&n);
    fprintf(fptr,"%c%d",ch,n);
    fclose(fptr);

    return 0;
}
