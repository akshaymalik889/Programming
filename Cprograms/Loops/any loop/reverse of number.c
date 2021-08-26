#include<stdio.h>
#include<conio.h>
void main()
{
    int num,rev=0,rem=0;
    printf("enter any number:");
    scanf("%d",&num);
    for(;num!=0;)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    printf("reverse of number=%d",rev);
}
