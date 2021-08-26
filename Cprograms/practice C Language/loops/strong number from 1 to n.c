#include<stdio.h>
#include<conio.h>
void main()
{
    int n,rem,fact=1,sum=0,temp;
    printf("enter value of n:");
    scanf("%d",&n);
    printf("strong numbers are...\n");
    for(int i=1;i<=n;i++)
    {
        temp=i;
        for(;i!=0;)
        {
            rem=i%10;
            for(int j=1;j<=rem;j++)
            {
                fact=fact*j;
            }
            sum=sum+fact;
            i=i/10;
            fact=1;
        }
        if(sum==temp)
        {
            printf("%d is %d\n",temp,sum);
        }

        sum=0;
        i=temp;

    }

}

