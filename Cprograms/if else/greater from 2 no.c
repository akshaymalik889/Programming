#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b;
    {
        printf("enter two numbers");
        scanf("%d%d",&a,&b);
        if(a>b)
        {
            printf("greater number%d",a);
        }
        else
            printf("greater number%d",b);
        getch();
    }

}
