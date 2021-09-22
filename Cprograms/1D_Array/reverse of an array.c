#include<stdio.h>
#include<conio.h>
void main()
{
     int size;
printf("enter size of an array:");
scanf("%d",&size);
int arr[size];
printf("enter elements:");
for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("array is reversing\n");
    int k=size-1;
    for(int i=0;i<size/2;i++)
    {
        int temp=arr[i];
        arr[i]=arr[k];
        arr[k]=temp;
        k--;
    }
    printf("reverse array is:\n");
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
}
