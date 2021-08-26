#include<stdio.h>
#include<conio.h>
void main()
{
    int arr[]={-10,-5,0,3,7,};
    int sizearr=sizeof(arr)/sizeof(arr[0]);
    int low=0,high=sizearr-1,mid,flag=0;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==mid)
        {
            printf("%d",arr[mid]);
            flag=1;
            break;
        }
        else if(arr[mid]<mid)
        {
            low=mid+1;
        }
        else //(arr[mid]>mid)
            high=mid-1;
    }
    if(flag==0)
        printf("-1");
}
