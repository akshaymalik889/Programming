#include<stdio.h>
#include<conio.h>
#define SIZE 5
#include<stdbool.h>

bool isFull();
bool isEmpty();
int peek();
void push();
void pop();
void display();

int stack[SIZE];
int top=-1;

void main()
{
    push();
    //pop();
    peek();

    display();
}
bool isFull()
{
    if(top==SIZE-1)
    return true;
    else
    return false;
}
bool isEmpty()
{
    if(top==-1)
    return true;
    else
    return false;
}
int peek()
{
        return stack[top];
}
void push()
{
    bool x=isFull();
    if(x==true)
        printf("stack full");
    else
    {
        int val;
        printf("enter value:\n");
        scanf("%d",&val);
        top++;
        stack[top]=val;
    }
}

void pop()
{
    bool x=isEmpty();
    if(x==true)
    {
        printf("empty stack");
    }
    else
    {
        top--;
    }
}

void display()
{
    bool x=isEmpty();
    if(x==true)
        printf("empty stack..\n");
    else
    {
        for(int i=top;i>=0;i--)
        {
            printf("%d ",stack[i]);
        }
    }
}
