#include<stdio.h>
#include<conio.h>
void main()
{
    int first,second,third;
    printf("enter first side");
    scanf("%d",&first);
     printf("enter second side");
    scanf("%d",&second);
     printf("enter third side");
    scanf("%d",&third);
    if(first==second && first==third )
        printf("equilateral");
    else if(first==second || first==third || second==third)
        printf("isoscales");
    else
        printf("scalene");
}
