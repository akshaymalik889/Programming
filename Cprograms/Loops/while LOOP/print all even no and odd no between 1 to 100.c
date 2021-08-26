#include<stdio.h>
#include<conio.h>
void main()
{
    int i,sume=0,sumo=0,n;
    i=1;
    printf("enter value of n:");
    scanf("%d",&n);
    while(i<=n)
    {
        if(i%2==0)
        {
            sume=sume+i;
            printf("%d\n",i);
        }
        i++;
    }
    printf("sum of even no.=%d\n",sume);
    i=1;
    while(i<=n)
    {
        if(i%2!=0)
        {
            sumo=sumo+i;
        printf("%d\n",i);
        }

        i++;
    }
    printf("sum of odd no.=%d",sumo);
}
