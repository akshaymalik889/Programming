#include<stdio.h>
#include<conio.h>
void main()
{
    int num,sum=0,pro=1,rem=0;
    printf("enter any number:");
    scanf("%d",&num);
    for(;num!=0;)
    {
        rem=num%10;
        sum=sum+rem;
        pro=pro*rem;
        num=num/10;
    }
    printf("sum of digits=%d\nproduct of digits=%d",sum,pro);
}
