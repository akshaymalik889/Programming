#include<stdio.h>
#include<conio.h>
void main()
{
    int arr[]={20,40,50,70,70,60};
    int size=sizeof(arr)/sizeof(arr[0]);
    int k=20,x=20,i,diff;
    for(i=0;i<size;)
    {
        if(arr[i]==x)
        {
            printf("%d ",i);
            break;
        }
        diff=abs(((arr[i]-x))/k);
        if(diff>1)
            i=i+diff;
        else
            i++;
    }

}
