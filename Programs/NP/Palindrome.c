#include<stdio.h>
int main()
{
int z,rev=0,temp;
scanf("%d",&z);
temp=z;
while(temp!=0)
{
    rev=rev*10;
    rev=rev+temp%10;
    temp=temp/10;
}
if(z==rev)
{
    printf("Number is Palindrome.");
}
else
{
    printf("Number is not Palindrome.");
}

return 0;
}
