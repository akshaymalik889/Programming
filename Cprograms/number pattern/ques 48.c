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
            if(j<=i)
            printf("%d",j);
            else
            printf(" ");
        }
        for(int j=n;j>=1;j--)
        {
            if(j>i)
                printf(" ");
            else
                printf("%d",j);
        }


        printf("\n");
    }
}
