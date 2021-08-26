#include<stdio.h>
#include<conio.h>
void prime(int);
void perfect(int);
void armstrong(int);
void strong(int);
void main()
{
    int n;
    printf("enter value of n:");
    scanf("%d",&n);
     prime(n);
     perfect(n);
     armstrong(n);
     strong(n);

}
void prime(int n)
{
    int flag=0;
    printf("prime numbers upto %d are....\n",n);
    for(int i=2;i<=n;i++)
    {
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                flag=1;
                break;
            }
            else
                flag=0;
        }
        if(flag==0)
            printf("%d ",i);
    }
}

void perfect(int n)
{
    int sum=0;
    printf("\nperfect numbers upto %d are....\n",n);
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
            printf("%d ",i);
        sum=0;
    }
}

void armstrong(int n)
{
    int count=0,temp,rem=0,sum=0,mul=1;
    printf("\narmstrong numbers upto %d are.....\n",n);
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
            for(int j=1;j<=count;j++)
            {
                mul=mul*rem;
            }
            i=i/10;
            sum=sum+mul;
            mul=1;
        }
        if(sum==temp)
            printf("%d ",temp);
            sum=0;
            count=0;
            i=temp;
    }
}

void strong(int n)
{
    int temp,rem=0,fact=1,sum=0;
    printf("\nstrong numbers upto %d are....\n",n);
    for(int i=1;i<=n;i++)
    {
        temp=i;
        for(;i!=0;)
        {
            rem=i%10;
            i=i/10;
            for(int j=1;j<=rem;j++)
            {
                fact=fact*j;
            }
            sum=sum+fact;
            fact=1;
        }
        if(sum==temp)
            printf("%d ",sum);
        sum=0;
        i=temp;

    }
}


