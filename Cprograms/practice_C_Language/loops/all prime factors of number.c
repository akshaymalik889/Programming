#include<stdio.h>
#include<conio.h>
void main()
{
    int num,flag=0;
    printf("enter a number:");
    scanf("%d",&num);
    printf(" prime factors are:\n");
    for(int i=2;i<=num;i++)
    {
        if(num%i==0)
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
                printf("%d ",i);

        }
    }
}
