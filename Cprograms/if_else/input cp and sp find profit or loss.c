#include<stdio.h>
#include<conio.h>
void main()
{
    float cp,sp;
    printf("enter cost price");
    scanf("%f",&cp);
    printf("enter selling price");
    scanf("%f",&sp);
    if(sp>=0 && cp>=0)
    {
    if(cp>sp)
    {
        printf("loss=%f",cp-sp);
    }
    else if(cp<sp)
    {
        printf("profit=%f",sp-cp);
    }
    }
    else
    {
        printf("no negative value");
    }
}
