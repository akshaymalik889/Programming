#include<stdio.h>
#include<conio.h>
void main()
{
    int size,count,newe;
    printf("enter size of an array:");
    scanf("%d",&size);
    int arr[size];
    printf("enter no. of  elements you want to enter");
    scanf("%d",&count);
    printf("enter elements:");
    for(int i=0;i<count;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter no elements you want to insert:");
    scanf("%d",&newe);
    printf("enter elements:\n");
    for(int i=count;i<(count+newe);i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("new array is:\n");
    for(int i=0;i<(count+newe);i++)
    {
        printf("%d ",arr[i]);
    }


}

