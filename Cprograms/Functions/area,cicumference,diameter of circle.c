#include<stdio.h>
#include<conio.h>
int diameter(int);
float circumference(int);
float area(int);
void display(int,float,float);
void main()
{
    int r;
    printf("enter radius:");
    scanf("%d",&r);
    int x=diameter(r);
    float y=circumference(r);
    float z=area(r);
    display(x,y,z);
}
int diameter(int r)
{
    int d=2*r;
    return d;
}
float circumference(int r)
{
    float c=2*3.14*r;
    return c;
}
float area(int r)
{
    float a=3.14*r*r;
    return a;
}
void display(int x,float y,float z)
{
    printf("diameter=%d\ncircumference=%f\narea=%f",x,y,z);
}
