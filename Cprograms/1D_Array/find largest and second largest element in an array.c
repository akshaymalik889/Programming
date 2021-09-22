#include<stdio.h>
#include<conio.h>
#include <limits.h>
void main()
{
     int s,max=INT_MIN,l,second=0;
     printf("%d %d",INT_MIN,INT_MAX);
    printf("enter size of array:");
    scanf("%d",&s);
    int arr[s];
    printf("enter elements:");
    for(int i=0;i<s;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<s;i++)
    {
        if(arr[i]>max)
            max=arr[i];
    }
    l=max;
    max=0;

    for(int i=0;i<s;i++)
    {
        if(arr[i]>max && arr[i]!=l)
        max=arr[i];
    }
    printf("largest=%d\n second largest=%d",l,max);
}
