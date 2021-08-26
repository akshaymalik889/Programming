#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i;
    printf("enter size:");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("rotating left...\n");
    int temp=arr[0];
    for(i=0;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
    printf("now arrray is:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
