#include<stdio.h>
#include<conio.h>
void main()
{
    int arr[]={1,1,2,3,3,3,4,4,5};
    int sizearr=sizeof(arr)/sizeof(arr[0]);
    int x=5;
    for(int i=0,j=sizearr-1;i<j;)
    {
        if(arr[i]+arr[j]==x)
        {
            printf("%d %d\n",arr[i],arr[j]);
            i++;
            j--;
        }
        else if(arr[i]+arr[j]<x)
            i++;
        else if(arr[i]+arr[j]>x)
            j--;
    }
}
