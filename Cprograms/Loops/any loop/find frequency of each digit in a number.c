#include<stdio.h>
#include<conio.h>
void main()
{
    int num,rem=0,zero=0,one=0,two=0,three=0,four=0,five=0,six=0,seven=0,eight=0,nine=0;
    printf("enter any number:");
    scanf("%d",&num);
    for(;num!=0;)
    {
        rem=num%10;
        num=num/10;
        if(rem==0)
            zero++;
        if(rem==1)
            one++;
        if(rem==2)
            two++;
        if(rem==3)
            three++;
        if(rem==4)
            four++;
        if(rem==5)
            five++;
        if(rem==6)
            six++;
        if(rem==7)
            seven++;
        if(rem==8)
            eight++;
        if(rem==9)
            nine++;

    }
    printf("num of zeroes=%d\nnum of one=%d\nnum of two=%d\nnum of three=%d\nnum of four=%d\nnum of five=%d\nnum of six=%d\nnum of seven=%d\nnum of eight=%d\nnum of nine=%d\n",zero,one,two,three,four,five,six,seven,eight,nine);
}
