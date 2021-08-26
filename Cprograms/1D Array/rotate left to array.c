#include<stdio.h>
#include<conio.h>
void main()
{
      int size,i=0;
    printf("enter size");
    scanf("%d",&size);
    int arr[size];
    printf("enter elements");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("rotating....");
    i=0;
    int k=arr[i];
    for(i=0;i<size-1;i++)
    {
        arr[i]=arr[i+1];
    }
    arr[size-1]=k;
    printf("left rotaion of array is:\n");
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
}
