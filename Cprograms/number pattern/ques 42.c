
#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    printf("enter value of n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {

        int l=2;
        for(int j=1;j<=i;j++)
        {
                printf("%d",l);
                l=l+2;

        }
        for(int j=1;j<i;j++)
        {
         l=l-2;
         printf("%d",l-2);

        }

        printf("\n");
    }
}
