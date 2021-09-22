#include<stdio.h>
#include<conio.h>
void main()
{
    int a;
    printf("enter week no.");
    scanf("%d",&a);
    if(a==1)
        printf("sunday");
    else if(a==2)
        printf("monday");
    else if(a==3)
        printf("tuesday");
    else if(a==4)
        printf("wednesday");
    else if(a==5)
        printf("thursday");
    else if(a==6)
        printf("friday");
    else if(a==7)
        printf("saturday");

    else
        printf("invalid number",a);
}
