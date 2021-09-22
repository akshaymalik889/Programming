#include<stdio.h>
#include<conio.h>
void  natural(int,int);
void main()
{
    int n,i=1;
    printf("enter value of n:");
    scanf("%d",&n);
    natural(n,i);

}
void natural(int n,int i)
{

    if(i<=n)
    {
        printf("%d ",i);
        natural(n,i+1);
    }

}
