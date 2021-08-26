#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i;
    printf("enter value of n:");
    scanf("%d",&n);
    i=1;
    while(n>=i)
    {
        printf("%d\n",n);
        n--;
    }
}
