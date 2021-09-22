#include<stdio.h>
#include<conio.h>
void main()
{
    int size,search,flag;
    printf("enter size");
    scanf("%d",&size);
    int arr[size];
    printf("enter elements");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("eneter element you want to search:");
    scanf("%d",&search);
    for(int i=0;i<size;i++)
    {
        if(search==arr[i])
        {
           flag=1;
            break;
        }
        else
           flag=0;
    }
    if(flag==1)
        printf("%d element is found",search);
    else
        printf("%d element is not found",search);
}
