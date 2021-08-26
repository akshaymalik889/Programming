#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    printf("enter value of n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i+1;j++)
        {
            printf("%d",j+i-1);
        }
        for(int j=1;j<=i;j++)
        {
            printf("%d",n);
        }
        printf("\n");
    }
}
