#include<stdio.h>
#include<conio.h>
void main()
{

    int num,i;
    printf("enter any number:");
    scanf("%d",&num);
    printf("factors of %d are=\n",num);
    for(i=1;i<=num;i++)
    {
        if(num%i==0)
            printf("%d ",i);
    }

}
