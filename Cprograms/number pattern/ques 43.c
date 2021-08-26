#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    printf("enter value of n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {

        int k=1;
        for(int j=1;j<=i;j++)
        {
                printf("%d",k);
                k++;

        }
        for(int j=1;j<i;j++)
        {

         k=k-1;
         printf("%d",k-1);


        }

        printf("\n");
    }
}

