#include<stdio.h>
#include<conio.h>
void main()
{
    int b,e,i,p=1;
    printf("enter base:");
    scanf("%d",&b);
    printf("enter exponent:");
    scanf("%d",&e);
    for(i=0;i<e;i++)
    {
        p=p*b;
    }
    printf("answer=%d",p);
}
