#include<stdio.h>
#include<conio.h>
void main()
{

    int n,i,temp,rem,j,fact=1,sum=0;
    printf("enter value of n:");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        temp=i;
        for(;temp!=0;)
        {
            rem=temp%10;
            temp=temp/10;
            for(j=rem;j>=1;j--)
            {
                fact=fact*j;
            }
            sum=sum+fact;
            fact=1;
        }
        if(sum==i)
            printf("%d ",i);
        sum=0;
       // fact=1;
    }
}
