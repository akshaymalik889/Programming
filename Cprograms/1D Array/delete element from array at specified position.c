#include<stdio.h>
#include<conio.h>
void main()
{
    int size,pos;
    printf("enter size of an array:");
    scanf("%d",&size);
    int arr[size];
    printf("enter elements:");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter position of element you want to delete:");
    scanf("%d",&pos);
    for(int i=pos;i<size-1;i++)
    {
        arr[i]=arr[i+1];
    }
    printf("new array is:\n");
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
}
