#include<stdio.h>
#include<conio.h>
void main()
{
    int num,i,sum=0;
    printf("enter num:");
    scanf("%d",&num);
    for(i=1;i<num;i++)
    {
        if(num%i==0)
            sum=sum+i;
    }
    if(sum==num)
        printf("%d is perfect number",num);
    else
        printf("%d is not a perfect number",num);
}
