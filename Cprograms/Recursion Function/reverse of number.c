#include<stdio.h>
#include<conio.h>
int reverse(int,int,int);
void display(int,int);
void main()
{
    int num,rev=0,rem=0;
    printf("enter a number:");
    scanf("%d",&num);
    int ans=reverse(num,rev,rem);
        display(num,ans);
}
int reverse(int num,int rev,int rem)
{

    if(num!=0)
    {
        rem=num%10;
        rev=(rev*10)+rem;
        num=num/10;
        reverse(num,rev,rem);
    }
    else
        return rev;
}
void display(int num,int ans)
{
    printf("reverse of %d is %d",num,ans);
}
