#include<stdio.h>
#include<conio.h>
void main()
{
    int arr[]={1,2,3};
    int size=sizeof(arr)/sizeof(arr[0]);
    int ts,ls=0,rs,flag=0;
    for(int i=0;i<size;i++)
    {
        ts=ts+arr[i];
    }
    //printf("%d",ts);
    rs=ts;
    for(int i=0;i<size;i++)
    {
        rs=rs-arr[i];
        if(rs==ls)
        {
            printf("index=%d",i);
            flag=1;
            break;
        }
        ls=ls+arr[i];
    }
    if(flag==0)
        printf("-1");
}
