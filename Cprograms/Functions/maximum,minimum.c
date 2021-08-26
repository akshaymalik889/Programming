#include<stdio.h>
#include<conio.h>
#include <stdbool.h>
bool max(int,int);
bool min(int,int);
void displayMax(int);
void displayMin(int);
void main()
{
    int a,b;
    printf("enter 2 number:");
    scanf("%d%d",&a,&b);
    bool x=max(a,b);
    if(x==true)
        displayMax(a);
    else
        displayMax(b);
    bool y=min(a,b);
    if(y==true)
        displayMin(a);
    else
        displayMin(b);
    //display(x,y);
}
bool max(int a,int b)
{
    if(a>b)
        return true;
    else
        return false;
}
void displayMax(int a)
{
    printf("maximum=%d\n",a);
}
bool min(int a,int b)
{
    if(a<b)
        return true;
    else
        return false;
}
void displayMin(int a)
{
    printf("minimum=%d",a);
}


