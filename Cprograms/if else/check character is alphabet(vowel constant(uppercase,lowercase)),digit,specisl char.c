#include<stdio.h>
#include<conio.h>
void main()
{
    char ch;
    printf("enter any character:");
    scanf("%c",&ch);
    if((ch>=65 && ch<=122) || (ch>=48 && ch<=57) )
    {
        if(ch>=65 && ch<=90)
        {
            printf("IT is alphabet that is uppercase and ");
            if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
            {
            printf("also vowel=%c",ch);
            }
            else
            {
            printf(" constant=%c",ch);
            }
        }

        else if(ch>=97 && ch<=122)
        {
            printf("it is alphabet that is lowercase and");

            if( ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' )
               {
                   printf("also vowel=%c",ch);
               }
            else
            {
                printf(" constant=%c",ch);
            }

        }

        else if(ch>=48 && ch<=57)
           {
            printf("it is digit=%c",ch);
           }

    }

    else
    {
        printf(" special character=%c",ch);
    }
    getch();

}
