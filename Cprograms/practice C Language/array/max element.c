#include<stdio.h>
#include<conio.h>
#include<limits.h>
void main()
{
    int n,max=INT_MAX,min=INT_MIN,flag=0;
    printf("enter size:");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    printf("maximum=%d",max);
}
