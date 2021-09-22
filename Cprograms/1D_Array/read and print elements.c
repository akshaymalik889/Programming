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
    printf("elements are:");
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
}
