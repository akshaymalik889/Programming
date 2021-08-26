#include<stdio.h>
#include<conio.h>
int power(int,int,int,int);
void display(int);
int aa();
void main()
{
    int base,exp,p=1;
    printf("enter base:");
    scanf("%d",&base);
    printf("enter exponent:");
    scanf("%d",&exp);
    int ans=power(base,exp,1,p);

    display(ans);
    printf("%d", aa());
}


int power(int base,int exp,int i,int p)
{

    if(i<=exp)
    {
        p=p*base;
       int x= power(base,exp,i+1,p);
       return x;
        //printf("hello %d",i);
    }
    else
        return p;
}
void display(int ans)
{
    printf("power=%d",ans);
}
