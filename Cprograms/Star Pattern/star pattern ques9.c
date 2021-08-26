#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    printf("enter value of n:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(j<i)
                printf("-");
           // else if(i==0)
               // printf("*");
            else
                printf("*");
        }
        printf("\n");
    }
}
