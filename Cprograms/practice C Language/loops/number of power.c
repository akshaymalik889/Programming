#include<stdio.h>
#include<conio.h>
void main()
{
    int num,power,sum=1;
    printf("enter number:");
    scanf("%d",&num);
    printf("enter power:");
    scanf("%d",&power);
    for(int i=1;i<=power;i++)
    {
         sum=sum*num;
    }
    printf("result=%d",sum);
}
