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
            if(i==j && j==(n/2)+1)
                printf("0");
            else
                printf("1");
        }
        printf("\n");
    }


}
