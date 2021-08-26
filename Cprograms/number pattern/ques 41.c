#include<stdio.h>
#include<conio.h>
void main()
{
    int n,k=0;
    printf("enter value of n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {

        int l=1;
        for(int j=1;j<=i+k;j++)
        {
            if(j<=i)
            {
                printf("%d",l);
                l=l+2;

            }
            else
            {
               l=l-2;
                printf("%d",l-2);
            }

        }
        k++;
        printf("\n");
    }
}
