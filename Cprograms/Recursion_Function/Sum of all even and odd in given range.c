#include<stdio.h>
#include<conio.h>
int sumEven(int,int,int);
int sumOdd(int,int,int);
void display(int,int);
void main()
{
    int start,end,sum=0;
    printf("enter starting point:");
    scanf("%d",&start);
    printf("enter ending point:");
    scanf("%d",&end);
    int sumE=sumEven(start,end,sum);
    int sumO=sumOdd(start,end,sum);
        display(sumE,sumO);
}
int sumEven(int start,int end,int sum)
{
    if(start<=end)
    {
        if(start%2==0)
        {
            sum=sum+start;
        }
        else
      {
        int x=sumEven(start+1,end,sum);
       return sum;
      }

    }
    else
        return sum;
}
int sumOdd(int start,int end,int sum)
{
    if(start<=end)
    {
        if(start%2!=0)
        {
            sum=sum+start;
        }
        sumOdd(start+1,end,sum);
    }
    else
        return sum;
}
void display(int sumE,int sumO)
{
    printf("sum of even no. is=%d\nsum of odd no.=%d",sumE,sumO);
}
