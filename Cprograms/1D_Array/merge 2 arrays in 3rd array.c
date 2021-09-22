#include<stdio.h>
#include<conio.h>
void main()
{
    int size1,size2,size3,k=0;
    printf("enter size of 1st array:");
    scanf("%d",&size1);
    int arr1[size1];
    printf("enter elements:");
    for(int i=0;i<size1;i++)
    {
        scanf("%d",&arr1[i]);
    }
     printf("enter size of 2nd array:");
    scanf("%d",&size2);
    int arr2[size2];
    printf("enter elements:");
    for(int i=0;i<size2;i++)
    {
        scanf("%d",&arr2[i]);
    }
    size3=size1+size2;
    int arr3[size3];
    for(int i=0;i<size1;i++)
    {
        arr3[i]=arr1[k];
        k++;
    }
    k=0;
    for(int i=size1;i<size3;i++)
    {
        arr3[i]=arr2[k];
        k++;
    }
    printf("array 3 is:\n");
    for(int i=0;i<size3;i++)
    {
        printf("%d ",arr3[i]);
    }
}
