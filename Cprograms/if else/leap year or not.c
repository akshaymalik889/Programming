#include<stdio.h>
#include<conio.h>
void main()
{
    int y;
    printf("enter year");
    scanf("%d",&y);

 if (y%4==0)
    printf("leap year");
 else
    printf("not leap year");
 getch();
}
