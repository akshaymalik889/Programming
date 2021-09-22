#include<stdio.h>
#include<conio.h>
void main()
{
    float a,b,c,d,e,total;
    float per;
    printf("enter marks of five subjects");
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
    total=a+b+c+d+e;
    per=(total/500)*100;
    if(per>=90)
    {
        printf("percentage=%f\ngrade=A",per);
    }
    else if(per>=80)
    {
        printf("percentage=%f\ngrade=B",per);
    }
    else if(per>=70)
    {
        printf("percentage=%f\ngrade=C",per);
    }
    else if(per>=60)
    {
        printf("percentage=%f\ngrade=D",per);
    }
    else if(per>=40)
    {
        printf("percentage=%f\ngrade=E",per);
    }
    else
    {
        printf("percentage=%f\ngrade=F",per);
    }


}
