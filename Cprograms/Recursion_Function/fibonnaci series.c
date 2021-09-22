#include<stdio.h>
#include<conio.h>
void fibonnaci(int,int,int,int);
void main()
{
    int n,a=0,b=1,i=1;
    printf("enter nth term:");
    scanf("%d",&n);
    printf("fibonnaci series upto %d is:\n",n);
    printf("%d %d",a,b);
    fibonnaci(n,a,b,i);
}
void fibonnaci(int n,int a,int b,int i)
{
    int c;
    if(i<=n-1)
    {
        c=a+b;
        a=b;
        b=c;
        printf(" %d",c);
        fibonnaci(n,a,b,i+1);


    }

}
