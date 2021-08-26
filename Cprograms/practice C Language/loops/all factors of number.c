#include<stdio.h>
#include<conio.h>
void main()
{
    int num;
    printf("enter a number:");
    scanf("%d",&num);
    printf("factors are:\n");
    for(int i=1;i<=num;i++)
    {
        if(num%i==0)
            printf("%d\n",i);
    }
}
