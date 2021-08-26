#include<stdio.h>
#include<conio.h>
void main()
{
    int num,temp=0,rem=0,p=1,sum=0,count=0,i;
    printf("enter any number:");
    scanf("%d",&num);
    temp=num;
    for(;num!=0;)
    {
        count++;
        num=num/10;
    }
    num=temp;
    for(;num!=0;)
    {
        rem=num%10;
        num=num/10;
        for(i=1;i<=count;i++)
        {
            p=p*rem;
        }
        sum=sum+p;
        p=1;
    }
    if(sum==temp)
        printf("%d is armstrong number",temp);
    else
        printf("%d is not armstrong number",temp);
}
