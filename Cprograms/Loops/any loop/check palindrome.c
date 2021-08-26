#include<stdio.h>
#include<conio.h>
void main()
{
    int num,temp=0,rem=0,rev=0;
    printf("enter any number:");
    scanf("%d",&num);
    temp=num;
    for(;num!=0;)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    if(rev==temp)
        printf("%d is palindrome",temp);
    else
        printf("%d is not palindrome",temp);
}
