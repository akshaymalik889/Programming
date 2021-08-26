#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    printf("enter value of n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j<=n;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}
