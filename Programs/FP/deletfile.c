#include<stdio.h>
int main()
{
    int status;
    char file_name[25];
    printf("Enter The Name of The file You Wish to delete:\n");
    gets(file_name);
    status=remove(file_name);
    if(status==0)
    {
        printf("%s File Deleted Success.",file_name);
    }
    else
    {
    printf("Unable to Delete File.\n");
    perror("Error");
    }

    return 0;
}
