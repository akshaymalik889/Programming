#include<stdio.h>
#include<conio.h>
int input(int,int);
void display(int);
void main()
{
    int i,n,arr[n];
    printf("enter size of  of array:");
    scanf("%d",&n);
    printf("\nenter elements:");
    int ans=input(i,n);
    display(ans);
}

int input(int i,int n)
{
    int arr[n];
        if(i<n)
        {
            scanf("%d",&arr[i]);

          int x= input(i+1,n);
           display(arr[i]);

        return x;
        }
        else return arr[i];
}
void display(int n)
{
    printf(" %d\n",n);
}
