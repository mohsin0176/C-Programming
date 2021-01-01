#include<stdio.h>
#include<conio.h>

int main()
{
    int arr[30],num,i;
    printf("\nEnter No of Element:\n");
    scanf("%d",&num);
    printf("\nEnter array Elements:\n");
    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    bubble_sort(arr,num);
    getch();
    return 0;
}
int bubble_sort(int barr[],int num)
{
    int i,j,k,temp;
    printf("Before Sort:\n");
    for(k=0;k<num;k++)
    {
        printf("%5d",barr[k]);
    }
    for(i=1;i<num;i++)
    {
        for(j=0;j<(num-1);j++)
        {
            if(barr[j]>barr[j+1])
            {
                temp=barr[j];
                barr[j]=barr[j+1];
                barr[j+1]=temp;
            }
        }
        printf("\n After Pass:%d",i);
        for(k=0;k<num;k++)
        {
            printf("%5d",barr[k]);
        }
    }
}
