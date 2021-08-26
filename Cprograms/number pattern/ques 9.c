#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    printf("enter value of n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==1 || i==n)
            {
                if(j==1 || j==n)
                    printf("0");
                else
                    printf("1");
            }
            else
            {
                if(j==1 || j==n)
                printf("1");
                else
                    printf("0");
            }
        }
        printf("\n");
    }
}
