#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    printf("enter value of n:");
    scanf("%d",&n);
    for(int i=n;i>=1;i--)
    {
        for(int j=i;j<=n;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}
