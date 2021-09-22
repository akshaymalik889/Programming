#include<stdio.h>
#include<conio.h>
int factorial(int,int);
void display(int,int);
void main()
{
    int num,fact=1;
    printf("enter any number:");
    scanf("%d",&num);
    int ans=factorial(num,fact);
    display(ans,num);
}
int factorial(int num,int fact)
{
    if(num>=1)
    {
        fact=fact*num;
        factorial(num-1,fact);
    }
    else
        return fact;
}
void display(int ans,int num)
{
    printf("factorial of %d is %d",num,ans);
}
