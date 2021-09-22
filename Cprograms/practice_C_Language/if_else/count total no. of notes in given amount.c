#include<stdio.h>
#include<conio.h>
void main()
{
    int amt,note500=0,note100=0,note50=0,note20=0,note10=0,note5=0,note2=0,note1=0;
    printf("enter any amount:");
    scanf("%d",&amt);
    if(amt>=500)
    {
        note500=amt/500;
        amt=amt%500;
    }
     if(amt>=100)
    {
        note100=amt/100;
        amt=amt%100;
    }
     if(amt>=50)
    {
        note50=amt/50;
        amt=amt%50;
    }
     if(amt>=20)
    {
        note20=amt/20;
        amt=amt%20;
    }
     if(amt>=10)
    {
        note10=amt/10;
        amt=amt%10;
    }
     if(amt>=5)
    {
        note5=amt/5;
        amt=amt%5;
    }
     if(amt>=2)
    {
        note2=amt/2;
        amt=amt%2;
    }
     if(amt>=1)
    {
        note1=1;
    }
    printf("500 notes=%d\n100notes=%d\n50 notes=%d\n20 notes=%d\n10notes=%d\n5 notes=%d\n2 notes=%d\n1 notes=%d",note500,note100,note50,note20,note10,note5,note2,note1);
}
