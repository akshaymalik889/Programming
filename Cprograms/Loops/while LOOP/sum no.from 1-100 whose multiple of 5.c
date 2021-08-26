#include<stdio.h>
#include<conio.h>
void main()
{
    int i,sum=0;
    while (i<=100)
    {
        if(i%5==0)
        {
            sum=sum+i;
        }
        i++;
    }
    printf("%d",sum);
}
