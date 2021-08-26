#include<stdio.h>
#include<conio.h>
#include<stdbool.h>
void main()
{
    int n,i,temp=0,count=0;
    bool a;
    a=true;
    printf("enter value of n:");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("finding freq of each element:");
    {
        for(i=0;i<n;i++)
        {
                for(int j=0;j<n;j++)
                {
                    if(arr[i]==arr[j] && arr[j]!=a)
                    {
                        count++;
                        arr[j]=a;

                    }

                }
                printf("%d is %d times\n",arr[i],count);
            count=0;
        }
    }
}
