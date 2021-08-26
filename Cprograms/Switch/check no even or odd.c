#include<stdio.h>
#include<conio.h>
void main()
{

    int a;
    printf("enter a no.");
    scanf("%d",&a);
    switch(a%2)
    {
        case 1:    printf("odd no.");
                    break;
        default:      switch(a==0)
                    {

                    case 1: printf("no. is zero");
                            break;
                    default: printf("no is even");
                    }



                }
}
