#include<stdio.h>
#include<conio.h>
void main()
{
    int n,temp,count=0,rem,pow=1,sum=0,i;
    printf("enter value of n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {

        temp=i;
        for(;i!=0;)
        {
            count++;
            i=i/10;
        }
        i=temp;
        for(;i!=0;)
        {
            rem=i%10;
            i=i/10;
            for(int j=1;j<=count;j++)
            {
                pow=pow*rem;
            }
            sum=sum+pow;
            pow=1;

        }
        if(sum==temp)
        {
            printf("%d ",sum);
        }
        sum=0;
        count=0;
        i=temp;
    }
}
