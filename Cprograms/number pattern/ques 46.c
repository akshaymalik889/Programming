#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    printf("enter value of n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int k=i;
        for(int j=1;j<=i;j++)
        {

            if(i%2!=0)
            {
                printf("%d",j);
            }
            else
            {
                printf("%d",k);
                k--;
            }

        }
        printf("\n");
    }
}
