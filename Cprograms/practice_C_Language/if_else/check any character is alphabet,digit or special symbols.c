#include<stdio.h>
#include<conio.h>
void main()
{
    char c;
    printf("enter any character:");
    scanf("%c",&c);
    if(c>=97 && c<=122 || c>=65 && c<=90)
        printf("it is alphabet=%c",c);
    else if(c>=48 && c<=57)
        printf("it is digit=%c",c);
    else
        printf("it is special character=%c",c);
}
