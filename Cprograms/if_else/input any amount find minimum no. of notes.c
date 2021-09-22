#include<stdio.h>
#include<conio.h>
void  main()
{
    int num=0,rem=0,fh=0,h=0,ffty=0,twty=0,ten=0,five=0,two=0,one=0,total=0;
    printf("enter any amount");
    scanf("%d",&num);

    if(num>=500)
    {
        fh=num/500;
        rem=num%500;
        num=rem;
    }
    if(num>=100)
    {
        h=num/100;
        rem=num%100;
        num=rem;
    }
    if(num>=50)
    {
        ffty=num/50;
        rem=num%50;
        num=rem;
    }
    if(num>=20)
    {
        twty=num/20;
        rem=num%20;
        num=rem;
    }
    if(num>=10)
    {
       ten=num/10;
       rem=num%10;
       num=rem;
    }
    if(num>=5)
    {
        five=num/5;
        rem=num%5;
        num=rem;
    }
    if(num>=2)
    {
        two=num/2;
        rem=num%2;
        num=rem;
    }
    if(num==1)
    {
        one=num;
    }
    total=one+two+five+twty+ffty+h+fh;
    printf("total no of notes=%d\n500=%d\n100=%d\n50=%d\n20=%d\n10=%d\n5=%d\n2=%d\n1=%d",total,fh,h,ffty,twty,ten,five,two,one);


}
