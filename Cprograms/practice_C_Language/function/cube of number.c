#include<stdio.h>
#include<conio.h>
int cube(int);
int check(int,int);
void display(int,int,int);
int evenodd(int);

void main()
{
    int num,n1,n2;
    printf("enter number of cube:");
    scanf("%d",&num);
    printf("enter first number:");
    scanf("%d",&n1);
    printf("enter second number:");
    scanf("%d",&n2);
    int ans=cube(num);
    int result=check(n1,n2);
    int find=evenodd(num);
    display(ans,result,find);
}
int cube(int n)
{
    int result;
    result=n*n*n;
    return result;
}
int check(int n1,int n2)
{
    if(n1>n2)
        return n1;
    else
        return n2;
}
int evenodd(int num)
{
    int flag=0;
    if(num%2==0)
    {
        flag=0;
    }
    else
        flag=1;
    return flag;
}
void display(int ans,int result,int find)
{
    printf("cube of number is:%d\n",ans);
    printf("max of two numbers is:%d\n",result);
    if(find==1)
        printf("odd\n");
    else
        printf("even\n");
}
