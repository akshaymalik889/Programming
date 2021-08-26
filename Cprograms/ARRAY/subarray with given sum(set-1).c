#include<stdio.h>
#include<conio.h>
void main()
{
    int arr[]={1,4,0,0,3,10,5};
    int sizearr=sizeof(arr)/sizeof(arr[0]);
    int sum=7,cur_sum=0,flag=0;
    cur_sum=arr[0]+arr[1];
    for(int i=0,j=i+1;i<sizearr && j<sizearr;)
    {
        if(sum==arr[i])
        {
            printf("0 to 0");
            flag=1;
            break;
        }
        else if(cur_sum==sum)
        {
            printf("%d to %d",i,j);
            flag=1;
            break;
        }
        else if(cur_sum<sum)
        {
             j++;
            cur_sum=cur_sum+arr[j];
        }
        else
        {
            cur_sum=cur_sum-arr[i];
            i++;
        }
    }
    if(flag==0)
        printf("no sub array");
}
