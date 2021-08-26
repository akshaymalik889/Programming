#include<stdio.h>
#include<conio.h>
void main()
{
    int num,i,flag=0;
    printf("enter any number:");
    scanf("%d",&num);
    for(i=2;i<num;i++)
    {
        if(num%2==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
        printf("%d is not prime number",num);
    else
        printf("%d is prime number",num);
}
