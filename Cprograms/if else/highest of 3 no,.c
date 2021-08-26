#include<stdio.h>
#include<conio.h>
void main()
{

    int a,b,c;
    printf("enter three no.s ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
    {
    if(b>c)
    {
        printf("%d is greater than %d and %d",a,b,c);
    }
    else
        printf("%d is greater than %d and %d",a,c,b);
    }
    else if(b>a && b>c)
    {
        if(a>c)
        {
            printf("%d is greater than %d and %d",b,a,c);
        }
        else
            printf("%d is greater than %d and %d",b,c,a);
    }
    else if (c>a && c>b)
    {
        if(a>b)
            printf("%d is greater than %d and %d",c,a,b);
        else
            printf("%d is greater than %d and %d",c,b,a);

    }
    else
        printf("all are equal ");
    getch();
}
