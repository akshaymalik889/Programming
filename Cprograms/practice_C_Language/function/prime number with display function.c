#include<stdio.h>
#include<conio.h>
void prime(int);
void display(int);
void main()
{
    int n;
    printf("enter value of n:");
    scanf("%d",&n);
     prime(n);

}
void prime(int n)
{
    int flag=0;
   // printf("prime numbers upto %d are....\n",n);
    for(int i=2;i<=n;i++)
    {
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                flag=1;
                break;
            }
            else
                flag=0;
        }
        if(flag==0)
            display(i);
    }
}
void display(int ans)
{
    printf("%d ",ans);
}
