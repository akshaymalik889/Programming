#include<stdio.h>
#include<conio.h>
void main()
{
      int size,pos,e;
    printf("enter size");
    scanf("%d",&size);
    int arr[size];
    printf("enter elements");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter position at which you want to insert:");
    scanf("%d",&pos);
    printf("enter element to insert");
    scanf("%d",&e);

    for(int i=size-1;i>pos;i--)
    {

        arr[i]=arr[i-1];
    }
    arr[pos]=e;
    printf("new array is:\n");
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }


}
