#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;

    printf("enter three sides");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b>c && b+c>a && c+a>b)
    {
        printf("valid triangle");
    }
    else
        printf("not valid");
}
