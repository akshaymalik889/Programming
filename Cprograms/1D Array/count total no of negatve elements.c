#include<stdio.h>
#include<conio.h>
void main()
{
    int size,count=0;
printf("enter size of an array:");
scanf("%d",&size);
int arr[size];
printf("enter elements:");
for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size;i++)
    {
        if(arr[i]<0)
            count=count+1;
    }
    printf("total no of negative no.s are=%d",count);
}
