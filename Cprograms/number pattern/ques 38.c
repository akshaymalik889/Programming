#include<stdio.h>
#include<conio.h>
void main()
{

    int n;
    printf("enter value of n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if(i==j || j==1 || i==n)
                printf("1");
                else
                    printf("0");
        }
        printf("\n");
    }
}
