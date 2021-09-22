#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    printf("enter no.");
    scanf("%d",&n);
    if(n%5==0 || n%11==0)
    {
        if(n%5==0 && n%11==0)
        printf("no. is divisible by both 5 and 11");
        else if(n%5==0)
            printf("no is divisible by 5 only between 5 and 11");
        else
        printf("no is divisible by 11 only between 5 and 11");
    }
    else if(n%6==0 || n%7==0)
    {
        if(n%6==0 && n%7==0)
            printf("number is divisible by both 6 and 7");
        else if(n%7==0)
            printf("number is divisible by only 7 between 6 and 7");
        else
            printf("number is divisible by 6 only between 6 and 7");

    }
    else
        printf("number is not divisible 5,11,6,7");
    getch();

}
