#include<stdio.h>
#include<conio.h>
void main()
{
    int first,second,third;
    printf("enter first no.:");
    scanf("%d",&first);
    printf("enter second number:");
    scanf("%d",&second);
     printf("enter third number:");
    scanf("%d",&third);
    if(first>second && first>third)
        printf("first %d is greatest no.",first);
    else if(second>first && second>third)
        printf("second %d is greatest no.",second);
    else if(third>first && third>second)
        printf("second %d is greatest no.",third);
        else if(first==second && second==third)
            printf("all are equal first=%d second=%d third=%d",first,second,third);
            else if(first==second &&third==0)
            printf("first and second are equal=%d and greatest is %d",first,second);
            else if(third==second && first==0)
            printf("third and second are equal=%d and greatest is %d",third,second);
            else if(first==third &&second==0)
            printf("first and third are equal=%d and greatest is %d",first,third);

}
