#include<stdio.h>
#include<conio.h>
void main()
{
    int s;
    printf("enter size of array:");
    scanf("%d",&s);
    int arr[s];
    printf("enter elements:");
    for(int i=0;i<s;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("negative elements are:");
    for(int i=0;i<s;i++)
    {
        if(arr[i]<0)
        {
            printf("%d ",arr[i]);
        }
    }

}
