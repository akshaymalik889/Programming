#include<stdio.h>
#include<conio.h>
void main()
{

    int amt,two,five,ten;
    printf("enter amount");
    scanf("%d",&amt);
    if(amt>=0)
    {
    two=amt/2;
    five=amt/5;
    ten=amt/10;
    printf("1 rs notes=%d\n2 rs notes=%d\n5 rs notes=%d\n10 rs notes=%d",amt,two,five,ten);
    }
    else
        printf("invalid amount");
}
