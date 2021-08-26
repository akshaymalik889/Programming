#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,newe,pos;
    printf("enter size:");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter position you want to enter:");
    scanf("%d",&pos);
    printf("enter new element:");
    scanf("%d",&newe);
    for(i=n;i>pos;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[pos]=newe;
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}

