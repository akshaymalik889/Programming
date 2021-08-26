#include<stdio.h>
#include<conio.h>
void main()
{

    int n,i;
    printf("enter number:");
    scanf("%d",&n);
    i=1;
    while(i<=10)
    {
        printf("%d * %d =%d\n",n,i,n*i);
        i++;
    }

}
