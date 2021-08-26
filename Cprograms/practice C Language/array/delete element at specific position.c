#include<stdio.h>
#include<conio.h>
void main()
{
     int i,n,pos;
    printf("enter size:");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter position you want to delete:");
    scanf("%d",&pos);
    for(i=pos;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }
    printf("array is:");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
