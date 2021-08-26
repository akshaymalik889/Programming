#include<stdio.h>
#include<conio.h>
#include<limits.h>
void main()
{
    int arr1[]={1,5,10,20,40,80},arr2[]={6,7,20,80,100},arr3[]={3,4,15,20,30,70,80,120};
    int s1=sizeof(arr1)/sizeof arr1[0];
    int s2=sizeof(arr2)/sizeof arr2[0];
    int s3=sizeof(arr3)/sizeof arr3[0];
    int size;
    if(s1>s2 && s1>s3)
        size=s1;
    else if(s2>s1 && s2>s3)
        size=s2;
    else
        size=s3;
    int i=0,j=0,k=0;
    for(i=0;i<size&&j<size&&k<size;)
    {
        if(arr1[i]==arr2[j]&& arr1[i]==arr3[k])
        {
            printf("%d ",arr1[i]);
            i++;
            j++;
            k++;

        }
        else if(arr1[i]<arr2[j]&& arr1[i]<arr3[k])
        {
            i++;
        }
        else if(arr2[j]<arr1[i] && arr2[j]<arr3[k])
        {
            j++;
        }
        else if(arr3[k]<arr1[i]&&arr3[k]<arr2[j])
        {
            k++;
        }
    }
}
