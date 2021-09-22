#include<stdio.h>
#include<conio.h>
void main()
{
    int num,flag=0;
    printf("enter number:");
    scanf("%d",&num);

    for(int i=2;i<num;i++)
    {
        if(num%i==0)
        {
            flag=1;
            break;
        }
        else
            flag=0;
    }
    if(flag==1)
    {
        printf("%d is NOT prime number",num);
    }
    else
        printf("%d is prime number",num);
}
