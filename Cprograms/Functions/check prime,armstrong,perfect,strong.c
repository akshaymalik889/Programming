#include<stdio.h>
#include<conio.h>
#include <stdbool.h>
bool prime(int);
bool perfect(int);
bool armstrong(int);
bool strong(int);
void display(bool,bool,bool,bool,int);
void main()
{
    int num;
    printf("enter any number:");
    scanf("%d",&num);
    bool isPrime=prime(num);
    bool isPerfect=perfect(num);
    bool isArmstrong=armstrong(num);
    bool isStrong=strong(num);
    display(isPrime,isPerfect,isArmstrong,isStrong,num);
}
bool prime(int num)
{
    int i,flag=0;
    for(i=2;i<num;i++)
    {
        if(num%i==0)
        {
            flag=1;
            break;
        }
        else
            flag=0;
    }
    if(flag==0)
        return true;
    else
        return false;
}
bool perfect(int num)
{
    int i,sum=0;
    for(i=1;i<num;i++)
    {
        if(num%i==0)
            sum=sum+i;
    }
    if(sum==num)
        return true;
    else
        return false;
}
bool armstrong(int num)
{
    int i,temp,count=0,rem,sum=0,power=1;
    temp=num;
    for(;num!=0;)
    {
        count++;
        num=num/10;
    }
    num=temp;
    for(;num!=0;)
    {
        rem=num%10;
        num=num/10;
        for(i=1;i<=count;i++)
        {
         power=power*rem;
        }
        sum=sum+power;
        power=1;
    }
    if(sum==temp)
        return true;
    else
        return false;
}
bool strong(int num)
{
    int i,temp,rem,sum=0,fact=1;
    temp=num;
    for(;num!=0;)
    {
        rem=num%10;
        num=num/10;
        for(i=rem;i>=1;i--)
        {
            fact=fact*i;
        }
        sum=sum+fact;
        fact=1;
    }
    if(sum==temp)
        return true;
    else
        return false;
}
void display(bool isPrime,bool isPerfect,bool isArmstrong,bool isStrong,int num)
{
    if(isPrime==true)
    printf("%d is prime no.\n",num);
    else
        printf("%d is not prime no.\n",num);
    if(isPerfect==true)
        printf("%d is perfect no.\n",num);
    else
        printf("%d is not perfect no.\n",num);
    if(isArmstrong==true)
        printf("%d is armstrong no.\n",num);
    else
        printf("%d is not armstrong no.\n",num);
    if(isStrong==true)
        printf("%d is strong no,",num);
    else
        printf("%d is not strong no.",num);

}
