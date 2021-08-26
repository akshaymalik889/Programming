#include<stdio.h>
#include<conio.h>
//#include <bits/stdc++.h>
#include<iostream>
using namespace std;
struct Node{
char data;
struct Node *next};

struct Node *head=NULL;
struct Node *head1=NULL;
struct Node *head2=NULL;

struct Node* createList(int);
void traverseList(struct Node *);
void stringCompare();


void main()
{
    int n;
    int choice;
    char c;
    do
    {
        printf("1.create list\n2.traverse list\n3.string compare\n");

         printf("enter choice:\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: printf("enter no. of nodes:\n");
                    scanf("%d",&n);
                   head= createList(n);
                    break;

           case 2: traverseList(head);
                    break;


            case 3: stringCompare();
                    break;

            case 4: temp();
                    break;

            default: printf("wrong choice..\n");
        }
        fflush(stdin);
        printf("\nyou want to do again YES or NO:");
        scanf("%c",&c);
    }while(c=='y' || c=='Y');
}

struct Node *createList(int n)
{
    head=(struct Node*)malloc(sizeof(struct Node));
    if(head==NULL)
    {
        printf("memory full cant allocate..\n");
        exit(1);
    }
    else
    {
        struct Node *temp=NULL;
        int val;


            printf("enter value of first Node:\n");
                    fflush(stdin);
            scanf("%c",&val);
            head->data=val;
            head->next=NULL;
            temp=head;
            for(int i=1;i<n;i++)
            {

                struct Node *newNode=NULL;
                newNode=(struct Node*)malloc(sizeof(struct Node));
                if(newNode==NULL)
                {
                    printf("memory full..\n");
                    exit(1);
                }
                else
                {

                    printf("enter value of Node:\n");
                    fflush(stdin);
                    scanf("%c",&val);
                    newNode->data=val;
                    newNode->next=NULL;
                    temp->next=newNode;
                    temp=newNode;

                }

            }
            return head;
        }
}
void traverseList(struct Node *head)
{
    struct Node *temp=head;

    if(head==NULL)
    {
        printf("empty list");
    }
    else
    {
        printf("\ndata in linklist is:..\n");
        while(temp!=NULL)
        {
            printf("%c ",temp->data);
            temp=temp->next;
        }
    }

}

void stringCompare()
{
    int n1,n2;
    printf("enter no. of nodes for first list:\n");
    scanf("%d",&n1);
    head1=createList(n1);
    printf("enter no. of nodes for second list:\n");
    scanf("%d",&n2);
    head2=createList(n2);
    traverseList(head1);
    traverseList(head2);
    if(head1==NULL && head2==NULL)
    {
        printf("empty list\n");
        exit(1);
    }
    else
    {
        printf("\nhello\n");
        struct Node *temp1=head1,*temp2=head2;
        printf("\n%c\n",temp1->data);
        while(temp1!=NULL && temp2!=NULL && temp1->data==temp2->data)
        {
            temp1=temp1->next;
            temp2=temp2->next;
        }
        if(temp1==NULL && temp2!=NULL)
            printf("-1");
        else if(temp2==NULL && temp1!=NULL)
            printf("1");
        else if(temp1!=NULL && temp2!=NULL)
        {
            if(temp1->data>temp2->data)
                printf("1");
            else
                printf("-1");
        }

        else
        {
            printf("0");
        }
    }
}

void temp()
{
    string str=" ";
    str=str+"abc";
    printf("%s",str);
}

