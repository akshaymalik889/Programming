#include<stdio.h>
#include<conio.h>
void main()
{
    int num;
    printf("enter any number:");
    scanf("%d",&num);
    if(num%5==0 && num%11==0)
        printf("it is divisible by both");
    else if(num%5==0 && num%11!=0)
    printf("it is divisible by 5 only");
     else if(num%5!=0 && num%11==0)
    printf("it is divisible by 11 only");
    else
        printf("it is not divisible by 5 and 11");
}
