#include<stdio.h>
#include<conio.h>
void main()
{

      int s,sum=0;
    printf("enter size of array:");
    scanf("%d",&s);
    int arr[s];
    printf("enter elements:");
    for(int i=0;i<s;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<s;i++)
    {
        sum=sum+arr[i];
    }
    printf("sum of elements are:%d",sum);
}
