#include<stdio.h>
#include<conio.h>
void main()
{

    int n;
    printf("enter value of n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=n;j>=i;j--)
        {
            if(i==1 || j==n || j==i )
            printf("*");
            else
            printf(" ");
        }

        printf("\n");
    }
}
