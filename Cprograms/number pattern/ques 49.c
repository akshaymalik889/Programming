#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    printf("enter value of n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int k=4,l=i;
        for(int j=i;j>=1;j-- )
        {

            printf("%d",l);
            l=l+k;
            k--;
        }
        printf("\n");
    }
}
