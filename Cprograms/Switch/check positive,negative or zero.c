#include<stdio.h>
#include<conio.h>
void main()
{

    int a;
    printf("enter any number");
    scanf("%d",&a);
    switch(a>0)
    {

        case 1: printf("%d is positive",a);
                break;


        default:
                switch(a<0)
                {
                    case 1: printf("%d is negative",a);
                            break;
                    default: printf("%d is zero",a);
                }




    }
}
