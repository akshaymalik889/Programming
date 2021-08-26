#include<stdio.h>
#include<conio.h>
/**
void main()
{
    int n,k=1,l=1;
    printf("enter value of n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d",k);
            k=k+l;
            l++;
        }
        printf("\n");
    }

}
*/

void display(int i,int n)
{
   if(i<=n)
   {
       printf("%d \n",i);
       display(i+1,n);
        printf("hello %d \n",i);
   }
  // return;
}
void main(){
int n=5;
display(1,n);
  printf("in main ");
}
