#include<stdio.h>
#include<conio.h>
void main()
{
    int first,second;
    printf("enter first no.:");
    scanf("%d",&first);
    printf("enter second number:");
    scanf("%d",&second);
    if(first>second)
        printf("%d is greater than %d",first,second);
    else
        printf("%d is greater then %d",second,first);
}
