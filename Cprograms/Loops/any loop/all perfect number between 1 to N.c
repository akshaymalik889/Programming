#include<stdio.h>
#include<conio.h>
void main()
{

    int n,i,sum=0,j;
    printf("enter value of n:");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {

        for(j=1;j<i;j++)
        {
            if(i%j==0)
            {
                sum=sum+j;
            }
        }
        if(sum==i)
            printf("%d ",i);
        sum=0;
    }

}
