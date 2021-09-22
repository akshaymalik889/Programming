#include<stdio.h>
#include<conio.h>
void main()
{
    int size1,size2,count,i;
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
printf("copy 1st array to 2nd:");
int k=0;
for(int i=count;i<size2;i++)
{
    arr2[i]=arr1[k];
    k++;
}
printf("now array is:\n");
for(int i=0;i<size2;i++)
{
    printf("%d",arr2[i]);
}
}
