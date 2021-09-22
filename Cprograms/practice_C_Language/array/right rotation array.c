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
    printf("rotating right...\n");
    int temp=arr[n-1];
    for(i=n-1;i>0;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[0]=temp;
     printf("now arrray is:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
