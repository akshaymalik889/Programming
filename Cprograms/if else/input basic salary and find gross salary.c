#include<stdio.h>
#include<conio.h>
void main()
{
    int bs;
    float hra,da,gs;
    printf("enter basic salary");
    scanf("%d",&bs);
     if(bs<=0)
        printf("invalid salary");
    else if(bs<=10000)
    {
        hra=(20*bs)/100;
        da=(80*bs)/100;
        gs=bs+hra+da;
        printf("gross salary=%f",gs);
    }
    else if(bs>10000 && bs<20000)
    {
        hra=(25*bs)/100;
        da=(90*bs)/100;
        gs=bs+hra+da;
        printf("gross salary=%f",gs);
    }
    else if(bs>=20000)
    {
        hra=(30*bs)/100;
        da=(95*bs)/100;
        gs=bs+hra+da;
        printf("gross salary=%f",gs);
    }

}
