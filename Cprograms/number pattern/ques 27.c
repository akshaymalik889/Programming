#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    printf("enter value of n:");
    scanf("%d",&n);
    /**
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i+1;j++)
        {
            printf("%d",n-i-j+2);
        }
        printf("\n");
    }*/

    for(int i=n;i>=1;i--)
    {
      for(int j=i;j>=1;j--)
        printf("%d",j);
      printf("\n");
    }
}
