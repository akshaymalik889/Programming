#include<stdio.h>
#include<conio.h>
void insert(int[],int);
void Displayarray(int[],int);
void Delete(int[],int);
void Binarysearch(int[],int);
void main()
{
    int arr[]={10,20,30,40,50,60};
    int i;
    int size=sizeof arr/sizeof arr[0];
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n%d",size);
   // insert(arr,size);
    //Displayarray(arr,size);
   // Delete(arr,size);
    // Displayarray(arr,size);
     Binarysearch(arr,size);
}
void insert(int arr[],int size)
{
    int pos;
    int val;
    printf("enter position\n");
    scanf("%d",&pos);
    printf("enter value to insert");
    scanf("%d",&val);
    for(int i=size-1;i>=pos;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[pos-1]=val;
    printf("\nvalue is inserted\n");
}
void Displayarray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
}
void Delete(int arr[],int size)

{
    int pos;

    printf("enter position to delete\n");
    scanf("%d",&pos);
    for(int i=pos-1;i<size;i++)
    {
        arr[i]=arr[i+1];
    }
    printf("element deleted\n");
}
void Binarysearch(int arr[],int size)
{
    int val,low=0,high=size-1,mid;
    printf("enter value to search\n");
    scanf("%d",&val);
    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==val)
        {
            printf("%dis found at%d",val,mid);
            break;
        }
        else if(arr[mid]>val)
        {
            high=mid-1;
        }
        else if(arr[mid]<val)
        {
            low=mid+1;
        }

    }
            if(high<low)
            printf("element not found\n");
}
