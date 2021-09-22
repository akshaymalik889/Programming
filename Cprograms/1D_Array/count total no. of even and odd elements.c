#include<stdio.h>
#include<conio.h>
void main()
{
    int size,even=0,odd=0;
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
        if(arr[i]%2==0)
            even=even+1;
        else
            odd=odd+1;
    }
    printf("even are=%d,odd are=%d",even,odd);
}
