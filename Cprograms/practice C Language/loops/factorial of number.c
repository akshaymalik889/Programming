#include<stdio.h>
#include<conio.h>
void main()
{
    int num,fact=1;
    printf("enter number:");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    printf("factorial=%d",fact);
}
