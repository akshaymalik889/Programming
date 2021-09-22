#include<stdio.h>
#include<conio.h>
void main()
{
    char c;
    printf("enter any alphabet:");
    scanf("%c",&c);
    if(c=='a' || c=='i' || c=='e' || c=='o' || c=='u'  || c=='A' || c<='I' || c=='E' || c<='O' || c=='U' )
        printf("it is VOWEL");
    else
        printf("it is CONSTANT");

}
