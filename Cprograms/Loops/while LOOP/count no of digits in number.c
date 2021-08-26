#include<stdio.h>
#include<conio.h>
void main()
{
    int num,rem=0,count=0;
    printf("enter a number:");
    scanf("%d",&num);

    if(num%10)
    while(num!=0)
    {
       rem=num%10;
       if(rem==0)

        num=num/10;
        count++;
    }
    printf("no. of digits=%d",count);

}
