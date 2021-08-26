#include<stdio.h>
#include<conio.h>
void main()
{
    int n,k=1;
    printf("enter value of n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d",k);
            k++;
        }
        printf("\n");
    }
}
