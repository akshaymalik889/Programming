#include<stdio.h>
#include<conio.h>
void main()
{
    int size,counte=0,counto=0,arr2[20],arr3[20],k=0,j=0;
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
        if(arr[i]%2==0)
        {
            arr2[k]=arr[i];
            k++;
            counte++;
        }
        else
        {
            arr3[j]=arr[i];
            j++;
            counto++;
        }
    }
    printf("even array is:\n");
    {
        for(int i=0;i<counte;i++)
        {
            printf("%d ",arr2[i]);
        }
    }
     printf("\nodd array is:\n");
    {
        for(int i=0;i<counto;i++)
        {
            printf("%d ",arr3[i]);
        }
    }
}
