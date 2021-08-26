#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<stdbool.h>
struct Node{
int data;
struct Node *next
};
struct Node *head=NULL;

struct Node* createList(int);


void main(int y,struct Node *head)
{
    int n;
    printf("enter value of n:\n");
    scanf("%d",&n);
    createList(n);
}
struct Node* createList(int n)
{
    head=(struct Node*)malloc(sizeof(struct Node));
    if(head==NULL)
    {
        printf("memory full cant allocate..\n");
        return NULL;
    }
    else
    {
        struct Node *temp=NULL;
        int val;
            printf("enter value of first Node:\n");
            scanf("%d",&val);
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
            return NULL;
        }
        else
        {

            printf("enter value of Node:\n");
            scanf("%d",&val);
            newNode->data=val;
            newNode->next=NULL;
            temp->next=newNode;
            temp=newNode;

        }

    }
    return head;
}
}
