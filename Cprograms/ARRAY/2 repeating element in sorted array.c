#include<stdio.h>
#include<conio.h>
void main()
{
    int arr[]={1,2,2,3,3,4,4,5};
    int sizearr=sizeof(arr)/sizeof(arr[0]);
    int count=1;
    for(int i=0,j=i+1;i<sizearr && j<sizearr;)
    {
        if(arr[i]!=arr[j])
        {
            i=j;
            j++;
        }
        else
        {
            count++;
            j++;
            if(count>=2)
            {
                printf("%d\n",arr[i]);
                count=1;
            }
        }
    }
}
