#include<stdio.h>
#include<conio.h>
void main()
{
    int num,last=0,first=0,sum=0;
    printf("enter number:");
    scanf("%d",&num);
    last=num%10;
    for(;num!=0;)
    {
        first=num%10;
        num=num/10;
    }
    sum=first+last;
    printf("sum of first and last digit=%d",sum);
}
