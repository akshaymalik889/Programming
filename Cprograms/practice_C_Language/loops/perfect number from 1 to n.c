#include<stdio.h>
#include<conio.h>
void main()
{
    int n,sum=0;
    printf("enter value of n:");
    scanf("%d",&n);
    printf("perfect numbers are:....\n");
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<i;j++)
        {
            if(i%j==0)
            {

                sum=sum+j;
            }
        }
        if(sum==i)
            printf("%d=%d\n",i,sum);
            sum=0;


    }
}
