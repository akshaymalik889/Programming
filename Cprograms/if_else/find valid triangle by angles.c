#include<stdio.h>
#include<conio.h>
void main()
{

    int a,b,c;
    printf("enter three angles");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b+c==180)
        printf("valid triangle");
    else
        printf("not valid triangle");
}
