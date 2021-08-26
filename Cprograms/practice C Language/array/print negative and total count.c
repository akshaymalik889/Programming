#include<stdio.h>
#include<conio.h>
void main()
{
     int n,count=0;
     printf("enter size of an array:\n");
     scanf("%d",&n);
     int arr[n];
     printf("enter elements:\n");
     for(int i=0;i<n;i++)
     {
         scanf("%d",&arr[i]);
     }
     printf("all negative no.s are:");
     for(int i=0;i<n;i++)
     {
         if(arr[i]<0)
         {
             count++;
             printf("%d ",arr[i]);
         }
     }
     printf("\ncount of negative nos are:%d",count);
}
