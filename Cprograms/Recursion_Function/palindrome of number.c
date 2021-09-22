#include<stdio.h>
#include<conio.h>
#include<stdbool.h>
bool checkPal(int,int,int);
void displayQ(int);
void displayP(int);
void main()
{
    int num,rev=0,temp;
    printf("enter any number:");
    scanf("%d",&num);
    temp=num;
    bool x=checkPal(num,rev,temp);
    if(x==true)
    displayP(num);
    else
    displayQ(num);
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
void displayP(int num)
{
    printf("%d is palindrome number.",num);
}
void displayQ(int num)
{
    printf("%d is not palindrome number.",num);
}
