#include<conio.h>
#include<conio.h>
void main()
{
    int first,second,div=0,i,j;
    printf("enter first number:");
    scanf("%d",&first);
    printf("enter second number:");
    scanf("%d",&second);
    if(first<second)
    {
        for(i=1;i<first;i++)
        {
            if(first%i==0)
            {
                div=i;
            }
        }
        for(j=1;j<second;j++)
        {
            if(second%j==0)
            {
                if(j==div)
                {
                    printf("HCF of %d and %d is %d",first,second,div);
                    break;
                }
            }
        }

    }
    else if(second<first)
    {
        for(i=1;i<second;i++)
        {
            if(second%i==0)
            {
                div=i;
            }
        }
        for(j=1;j<first;j++)
        {
            if(first%j==0)
            {
                if(j==div)
                {
                    printf("HCF of %d and %d is %d",first,second,div);
                    break;
                }
            }
        }
    }
    else
    {
         for(i=1;i<first;i++)
        {
            if(first%i==0)
            {
                div=i;
            }
        }
        printf("HCF of %d and %d is %d",first,second,div);
    }

}
