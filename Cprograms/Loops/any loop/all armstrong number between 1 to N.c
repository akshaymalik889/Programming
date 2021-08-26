#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,count=0,j,rem,p=1,sum=0,temp;
    printf("enter value of n:");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        temp=i;
        for(;temp!=0;)
        {
            count++;
            temp=temp/10;
        }
        temp=i;
        for(;temp!=0;)
        {
            rem=temp%10;
            temp=temp/10;
            for(j=1;j<=count;j++)
            {
                p=p*rem;
            }
            sum=sum+p;
            p=1;
        }
        if(i==sum)
           {
            printf("%d ",i);

           }
        sum=0;
        count=0;
        //p=1;

    }
}
