#include<stdio.h>
#include<string.h>
int main()
{
   char s1[100];
   char s2[100];
   char s3[100];
   char s4[100];
   printf("Enter A String:\n");
   gets(s2);
   printf("\n Copied string is:");
   strcpy(s1,s2);
   puts(s1);
   gets(s3);
   strncpy(s4,s3,3);
   puts(s4);
   return 0;
}
