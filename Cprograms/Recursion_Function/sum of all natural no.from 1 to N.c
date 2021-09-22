 #include<stdio.h>
 #include<conio.h>
 int sumNatural(int,int,int);
 void display(int);
 void main()
 {
     int n,i=1,sum=0;
     printf("enter value of n:");
     scanf("%d",&n);
     int ans=sumNatural(i,n,sum);
        display(ans);
 }
 int sumNatural(int i,int n,int sum)
 {
     if(i<=n)
     {
         sum=sum+i;
         sumNatural(i+1,n,sum);
     }
     else
        return sum;
 }
 void display(int ans)
 {
     printf("sum of all Natural no.s are=%d",ans);
 }
