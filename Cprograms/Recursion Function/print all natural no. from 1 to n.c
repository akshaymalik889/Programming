#include<stdio.h>
#include<conio.h>
void display(int,int);
void main()
{
    int n;
    printf("enter value of n:");
    scanf("%d",&n);
    display(n,1);
}
void display(int n,int i)
{
    if(i<=n)
    {
        printf(" %d",i);
        display(n,i+1);
    }
}
