#include<stdio.h>
#include<conio.h>
void main()
{
    int size1,size2,count;
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

  printf("enter no.of elements you want to enter in 2nd array:");
    scanf("%d",&count);

int arr2[size2];
printf("enter elements:");
for(int i=0;i<count;i++)
    {
        scanf("%d",&arr2[i]);
    }


/*
arr1  10 20 30 40 50  -> 5
arr2  100 200 300 400 -> 9
100 200 300 400 10 20 30 40 50
**/
    printf("copying 1st elements array to 2nd array\n");
    int k=0;
    for(int i=count;i<size2;i++)
    {
        arr2[i]=arr1[k];
        k++;
    }
    printf(" now 2nd array is=\n");
    for(int i=0;i<size2;i++)
    {
        printf("%d ",arr2[i]);
    }
}

