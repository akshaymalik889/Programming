#include<stdio.h>
#include<conio.h>
void main()
{
    int arr[]={10,20,30,40,50,60};
    int size=sizeof(arr)/sizeof arr[0];
    int low=0,high=size-1,mid,val,pos;
    printf("enter value to  be inserted:");
    scanf("%d",&val);
    while(low<=high)
    {
        mid=(low+high)/2;
        if(low==high && arr[low]<val)
        {
            pos=low+1;
            break;
        }
        else if(low==high && arr[low]>val)
        {
            pos=low;
            break;
        }
        else if(arr[mid]==val)
        {
            pos=mid;
            break;
        }
        else if(arr[mid]>val)
        {
            high=mid-1;
        }
        else if(arr[mid]<val)
        {
            low=mid+1;
        }
    }
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    //printf("%d",size);
    printf("\npos =%d\n",pos);
    for(int i=size-1;i>=pos+1;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[pos]=val;
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }

}

