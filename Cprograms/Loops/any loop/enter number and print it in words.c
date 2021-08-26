#include<conio.h>
#include<stdio.h>
void main()
{
    int num,rem=0,rev=0;
    printf("enter any number:");
    scanf("%d",&num);
    for(;num!=0;)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    //printf("%d",rev);
    rem=0;
    for(;rev!=0;)
    {
        rem=rev%10;
         rev=rev/10;
        if(rem==0)
            printf("zero ");
        if(rem==1)
            printf("one ");
        if(rem==2)
            printf("two ");
        if(rem==3)
            printf("three ");
        if(rem==4)
            printf("four ");
        if(rem==5)
            printf("five ");
        if(rem==6)
          printf("six ");
        if(rem==7)
         printf("seven ");
        if(rem==8)
           printf("eight ");
        if(rem==9)
           printf("nine ");

    }

}
