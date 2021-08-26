#include<stdio.h>
#include<conio.h>
void display(int);
int cube(int);
void main()
{
    int num;
    printf("enter any number:");
    scanf("%d",&num);
    int c=cube(num);
    display(c);
}
int cube(int n)
{
   int ans=n*n*n;
   return ans;
}
void display(int a)

{
    printf("cube of number=%d",a);
}
