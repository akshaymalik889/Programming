#include<stdio.h>
#include<conio.h>
 void check(int,int);
 void main()
 {
     int start,end;
     printf("enter starting value:");
     scanf("%d",&start);
     printf("enter ending value:");
     scanf("%d",&end);
     check(start,end);
 }
 void check(int start,int end)
 {
     if(start<=end)
     {
         if(start%2==0)
         {
             printf("\neven=%d\n",start);
             check(start+1,end);
        }

         else
         {
             printf("\nodd=%d\n",start);
             check(start+1,end);

         }

     }
 }
