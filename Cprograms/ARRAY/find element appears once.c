#include<stdio.h>
#include<conio.h>
void main()
{
    int arr[]={7,3,5,4,5,3,4};
    int flag=0;
    for(int i=0;i<sizeof(arr);i++)
    {
        for(int j=i+1;j<sizeof(arr);j++)
        {
            if(arr[i]==arr[j])
            {
                flag=1;
                break;
            }
        }
             if(flag==0)
                printf("%d ",arr[i]);
    }
}
