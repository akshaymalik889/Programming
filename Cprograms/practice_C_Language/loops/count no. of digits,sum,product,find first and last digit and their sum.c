#include<stdio.h>
#include<conio.h>
void main()
{

    int num,rem=0,sum=0,count=0,pro=1;
    printf("enter any number:");
    scanf("%d",&num);
    int last=num%10;
    printf("reverse of number:\n");
    for(;num!=0;)
    {
        rem=num%10;
        sum=sum+rem;
        pro=pro*rem;
        num=num/10;

        count++;
        printf("%d",rem);
    }
    int first=rem;
    printf("\nfirst digit=%d\nlast digit=%d\nno of digits=%d\nsum of digits=%d\nsum of first and last digit=%d\nproduct=%d",first,last,count,sum,first+last,pro);

}
