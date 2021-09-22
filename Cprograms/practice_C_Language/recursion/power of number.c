#include<stdio.h>
#include<conio.h>
int pow(int,int,int,int);
void main()
{
    int n,p,i=1,sum=1;
    printf("enter any number:");
    scanf("%d",&n);
    printf("enter power:");
    scanf("%d",&p);
    int ans=pow(n,p,i,sum);
    printf("%d ^ %d = %d",n,p,ans);
}
int pow(int n,int p,int i,int sum)
{
    if(i<=p)
    {
        sum=sum*n;
        int x=pow(n,p,i+1,sum);
        return x;
    }
    else
        return sum;
}
