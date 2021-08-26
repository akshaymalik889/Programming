#include<stdio.h>
#include<conio.h>
void main()
{

    int num,l=1,f;
    printf("enter digit:");
    scanf("%d",&num);


    for(;num!=0;)
    {
        if(l==1)
        {
            l=num%10;
            f++;
        }

        else
        {
            num=num/10;
        }
        if(num>0 && num<10 ||(num<0 && num>-10))
        {
            f=num;
            num=num/10;
        }
    }

    printf("first digit=%d last digit=%d",f,l);


}
