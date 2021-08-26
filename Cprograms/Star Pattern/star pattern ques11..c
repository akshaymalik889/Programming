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
            if(j==n-1 || i==n-1 || j==n-1-i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
