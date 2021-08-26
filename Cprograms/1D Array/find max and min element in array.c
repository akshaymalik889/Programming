#include<stdio.h>
#include<conio.h>
void main()
{

      int s,max=0,min=0;
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
        min=max;
     for(int i=0;i<s;i++)
    {
        if(arr[i]<min)
            min=arr[i];
    }
        printf("max=%d and min=%d",max,min);

}
