#include<stdio.h>
#include<conio.h>
#include <stdbool.h>
bool check(int);
void displayEven(int);
void displayOdd(int);
void main()
{
   int num;
   printf("enter a number:");
   scanf("%d",&num);
   bool x=check(num);
   if(x==true)
    displayEven(num);
   else
    displayOdd(num);

}
bool check(int n)
{
    if(n%2==0)
        return true;
    else
        return false;
}
void displayEven(int num)
{
    printf("%d is EVEN",num);
}
void displayOdd(int num)
{
    printf("%d is ODD",num);
}
