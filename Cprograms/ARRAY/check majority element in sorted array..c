#include<stdio.h>
#include<conio.h>
void main()
{
    int arr[]={1,2,3,3,3,3,10};
    int size=sizeof(arr)/sizeof(arr[0]);
    int x=3,low=0,high=size-1,mid;
    while(low<=high)
    {
        mid=low+high/2;
        if(mid==0 && arr[mid]==x)
            {
                printf("true and first index is:%d",mid);
                break;
            }
        else if((mid>0 && arr[mid]==x) && (mid>0 && arr[mid-1]!=x))
            {
                printf("TRUE first index=%d",mid);
                break;
            }
        else if((mid>0 && arr[mid]==x)&& (mid>0 && arr[mid-1]==x))
        {
            high=mid-1;
        }
        else if(arr[mid]<x)
            low=mid+1;
    }
}
