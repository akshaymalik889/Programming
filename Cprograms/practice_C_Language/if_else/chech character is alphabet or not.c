#include<stdio.h>
#include<conio.h>
void main()
{
    char c;
    printf("enter any character:");
    scanf("%c",&c);
    if(c>='a' && c<='z' || c>='A' && c<='Z')
        printf("it is alphabet");
    else
        printf("not alphabet");

}
