#include<stdio.h>
#include<conio.h>
/**

*
**
* *
*  *
*****

*/
void main()
{
    int n;
    printf("enter value of n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if(j==1 || i==n || i==2 || j==3
                ||j==4)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
