#include<stdio.h>
#include<conio.h>
void main()
{
    int num,rem=0,i,fact=1,sum=0,temp;
    printf("enter a number:");
    scanf("%d",&num);
    temp=num;
    for(;num!=0;)
    {
        rem=num%10;
        num=num/10;
        for(i=rem;i>=1;i--)
        {
            fact=fact*i;
        }
        sum=sum+fact;
        fact=1;
    }
    if(sum==temp)
        printf("%d is strong number",temp);
    else
        printf("%d is not strong number",temp);

}
