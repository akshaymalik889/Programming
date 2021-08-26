#include<stdio.h>
#include<conio.h>
void main()
{
    int size,count=0;
    printf("enter size");
    scanf("%d",&size);
    int arr[size];
    printf("enter elements");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size;i++)
    {
        for(int j=i;j<size;j++)
        {
            if(arr[i]==arr[j])
            {
                arr[j]='TRUE';
                count++;
            }
        }
        printf("%d is %d times\n",arr[i],count);
        count=0;
    }
}
