#include<stdio.h>
#include<conio.h>
int sumofdigits(int,int);
void display(int,int);
void main()
{
    int num,temp,sum=0;
    printf("enter any number:");
    scanf("%d",&num);
    temp=num;
    int ans=sumofdigits(temp,sum);
        display(num,ans);
}
int sumofdigits(int temp,int sum)
{
    int rem;
    if(temp!=0)
    {
        rem=temp%10;
        sum=sum+rem;
        temp=temp/10;
        sumofdigits(temp,sum);

    }
    else
        return sum;
}
void display(int num,int ans)
{
    printf("sum of digits of %d is %d",num,ans);
}
