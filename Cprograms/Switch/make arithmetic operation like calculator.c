#include<stdio.h>
#include<conio.h>
void main()
{
    float a,b;
    char o;
    printf("enter first no.");
    scanf("%f",&a);

    fflush(stdin);
    printf("enter operator");
    scanf("%c",&o);
   // printf("%d",o);

    printf("enter second number");
    scanf("%f",&b);

    switch(o)
    {
        case '+': printf("%f",a+b);
                    break;
        case '-': printf("%f",a-b);
                    break;
        case '/': printf("%f",a/b);
                    break;
        case '*': printf("%f",a*b);
                    break;
        default:  printf("wrong input");
    }

}
