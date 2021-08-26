#include<stdio.h>
#include<conio.h>
void main()
{
     int n;
     printf("enter size of an array:\n");
     scanf("%d",&n);
     int arr[n];
     printf("enter elements:\n");
     for(int i=0;i<n;i++)
     {
         scanf("%d",&arr[i]);
     }

    printf("entered elements are:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
