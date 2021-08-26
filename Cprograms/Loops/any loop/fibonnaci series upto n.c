#include<stdio.h>
#include<conio.h>
void main()
{
    int a=0,b=1,c=0,n,i;
    printf("enter value of n:");
    scanf("%d",&n);
    printf("%d %d ",a,b);
    for(i=1;i<=n-2;i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d ",c);
    }

}
