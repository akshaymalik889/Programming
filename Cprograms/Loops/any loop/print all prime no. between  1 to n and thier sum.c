#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,j,flag=0,sum=0;
    printf("enter value of n:");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
                {
                    flag=1;
                    break;
                }
        }
        if(flag==0)
           {
            sum=sum+i;
            printf("%d ",i);
           }
        flag=0;


    }
    printf("\nSUM=%d",sum);
}
