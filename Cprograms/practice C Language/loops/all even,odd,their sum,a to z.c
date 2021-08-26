#include<stdio.h>
#include<conio.h>
void main()
{
    int n,sume=0,counte=0,sumo=0,counto=0,i=1;
    printf("enter value of n:");
    scanf("%d",&n);
    while(i<=n)
    {
        if(i%2==0)
        {
            sume=sume+i;
            counte=counte+1;

        }
        else
        {
            sumo=sumo+i;
            counto=counto+1;
        }
        i++;
    }
    printf("sum of even are=%d and total even=%d\n",sume,counte);
    printf("sum of odd are=%d and total odd=%d",sumo,counto);

}
