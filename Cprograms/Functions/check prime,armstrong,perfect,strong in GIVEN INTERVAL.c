#include<stdio.h>
#include<conio.h>
void prime(int,int);
void armstrong(int,int);
void perfect(int,int);
void strong(int,int);
void displayPrime(int);
void displayArmstrong(int);
void displayPerfect(int);
void displayStrong(int);
void main()
{
    int x,y;
    printf("enter starting point:");
    scanf("%d",&x);
    printf("enter ending point:");
    scanf("%d",&y);
    prime(x,y);
    armstrong(x,y);
    perfect(x,y);
    strong(x,y);
}
void prime(int x,int y)
{
    printf("prime no. are:");
    int i,j,flag=0;
    for(i=x+1;i<y;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            displayPrime(i);
        }
        flag=0;
    }
}
void armstrong(int x,int y)
{
    printf("\nArmstrong  no. are:");
    int i,j,count=0,temp,rem,power=1,sum=0;
    for(i=x+1;i<y;i++)
    {
        temp=i;
        for(;temp!=0;)
        {
            count++;
            temp=temp/10;
        }
        temp=i;
        for(;temp!=0;)
        {
            rem=temp%10;
            temp=temp/10;
            for(j=1;j<=count;j++)
            {
                power=power*rem;
            }
            sum=sum+power;
            power=1;
        }
        if(sum==i)
        {
            displayArmstrong(i);
        }
        sum=0;
        count=0;
        //power=1;
    }
}
void perfect(int x,int y)
{
    printf("\nperfect no. are:");
    int i,j,sum=0;
    for(i=x+1;i<y;i++)
    {
        for(j=1;j<i;j++)
        {
            if(i%j==0)
            {
                sum=sum+j;
            }
        }
        if(sum==i)
            displayPerfect(i);
        sum=0;
    }
}
void strong(int x,int y)
{
    printf("\nstrong no. are:");
    int i,j,temp,rem,fact=1,sum=0;
    for(i=x+1;i<y;i++)
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
            displayStrong(i);
        sum=0;
       // fact=1;
    }
}
void displayPrime(int ans)
{
    printf(" %d",ans);
}
void displayArmstrong(int ans)
{
    printf(" %d",ans);
}
void displayPerfect(int ans)
{
    printf(" %d",ans);
}
void displayStrong(int ans)
{
    printf(" %d",ans);
}
