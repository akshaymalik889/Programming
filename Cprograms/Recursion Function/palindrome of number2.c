#include<stdio.h>
#include<conio.h>
#include<stdbool.h>
bool checkPal(int,int,int);
void display(int,bool);
void main()
{
    int num,rev=0,temp;
    printf("enter any number:");
    scanf("%d",&num);
    temp=num;
    bool x=checkPal(num,rev,temp);
    display(num,x);
}
bool checkPal(int num,int rev,int temp)
{
    int rem;
    if(temp!=0)
    {
        rem=temp%10;
        rev=rev*10+rem;
        temp=temp/10;
        checkPal(num,rev,temp);
    }
    else
    {
        if(rev==num)
            return true;
        else
            return false;
    }
}
void display(int num,bool x)
{
   if(x==true)
    printf("%d is palindrome number",num);
   else
    printf("%d is not palindrome number",num);
}

