#include<stdio.h>
#include<conio.h>
void main()
{
  int  flag=0,n,sum=0;
  printf("enter value of n:");
  scanf("%d",&n);
    printf("prime numbers are:...\n");
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
        {
            sum=sum+i;
            printf("%d ",i);
        }

    }
    printf("sum=%d",sum);
}
