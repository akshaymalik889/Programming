#include<stdio.h>
#include<conio.h>
void main()
{

    int a,b;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    switch(a>b)
    {
        case 1: printf("maximum=%d",a);
                break;
        default: switch(a<b)
                {
                    case 1:printf("maximum=%d",b);
                            break;
                    default: printf("both are same");
                }


    }
}
