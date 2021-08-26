#include<stdio.h>
#include<conio.h>
#include<limits.h>
void main()
{
    int arr[]={16,17,4,3,5,2};
    int max=INT_MIN,size=sizeof(arr)/sizeof(arr[0]);
    //printf("%d",size);
    for(int i=size-1;i>=0;i--)
    {
        if(arr[i]>max)
        {
            max=arr[i];
            printf("%d ",arr[i]);
        }

    }


}

