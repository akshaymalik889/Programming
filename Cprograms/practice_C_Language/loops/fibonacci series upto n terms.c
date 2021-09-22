#include<stdio.h>
#include<conio.h>
void main()
{

    int n,a=0,b=1,c=0;
    printf("enter value of n:");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        printf("%d ",c);
        a=b;
        b=c;
        c=a+b;

    }
}
