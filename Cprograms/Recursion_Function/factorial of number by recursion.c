#include<stdio.h>
#include<conio.h>
int factorial(int,int);
void display(int,int);
void main()
{
    int num,fact=1;
    printf("enter a number:");
    scanf("%d",&num);
    int ans=factorial(num,fact);
    display(num,ans);
}
int factorial(int num,int fact)
{
    if(num>=1)
    {
        fact=fact*num;
        int tutu=factorial(num-1,fact);
        return tutu;
    }
    else
        return fact;
}
void display(int num,int ans)
{
    printf("factorial of %d is %d",num,ans);
}
