#include<stdio.h>
#include<conio.h>
void main()
{
    int num,i,j,flag=0;
    printf("enter any number:");
    scanf("%d",&num);
    printf("All prime factors of %d are:\n",num);
    for(i=2;i<num;i++)
    {
        if(num%i==0)
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
                printf("%d ",i);
        }
    }

}
