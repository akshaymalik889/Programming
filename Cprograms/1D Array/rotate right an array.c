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
    printf("rotating....\n");
 int k=arr[size-1];

    for(int i=size-1;i>0;i--)
    {
        arr[i]=arr[i-1];

    }
    arr[i]=k;

    printf("right rotation of array is:");
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
}
