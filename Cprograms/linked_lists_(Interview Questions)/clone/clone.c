#include<stdio.h>
#include<conio.h>
#include<stdbool.h>

struct Node{
    struct Node*arb;
    int data;
    struct Node*next;
};

struct Node *createList(int);
void traverseList(struct Node*);
struct Node*clone(struct Node*);

struct Node*head=NULL;

void main()
{
    int ch;
    char c;
    int size;
    struct Node*copyhead=NULL;

    do{
        printf("1.create\n2.traverse\n3.Clone\n");
        printf("enter choice:\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("enter size\n");
                    scanf("%d",&size);
                    head=createList(size);
                    printf("created\n");
                    break;

            case 2:traverseList(head);
                    break;

            case 3:copyhead=clone(head);
                    printf("\nclone linked list\n");
                    traverseList(copyhead);
                    break;

            default: printf("\nwrong choice\n");
                    return;
        }
        printf("\ndo you want to again Y or N\n");
        fflush(stdin);
        scanf("%c",&c);
        }while(c=='y' || c=='Y');

    }
struct Node*createList(int size)
{
    int val;
    struct Node*temp=NULL;

    struct Node *newNode=NULL;
    newNode=(struct Node*)malloc(sizeof(struct Node));
    if(newNode==NULL)
    {
        printf("no memory");
        return;
    }
    else
    {
        printf("enter value of first node:\n");
        scanf("%d",&val);
         newNode->data=val;
         newNode->arb=NULL;
         newNode->next=NULL;
         head=newNode;
         temp=head;

         for(int i=2;i<=size;i++)
         {
             newNode=(struct Node*)malloc(sizeof(struct Node));
             printf("enter data:\n");
             scanf("%d",&val);
             newNode->data=val;
             newNode->arb=NULL;
             newNode->next=NULL;

             temp->next=newNode;
             temp=newNode;
         }

        head->arb =head->next->next;

    head->next->arb =head;

    head->next->next->arb =head->next->next->next->next;

    head->next->next->next->arb =head->next->next;

    head->next->next->next->next->arb =head->next;
         return head;
    }
};


void traverseList(struct Node* head)
{

    if(head==NULL)
    {
        printf("empty list");
        return;
    }
    else
    {
        struct Node* temp=head;
        while(temp!=NULL)
        {
            printf("data=%d  arbitrary=%d\n",temp->data,temp->arb->data);
            temp=temp->next;
        }
        return;
    }
}
struct Node*clone(struct Node*head)
{
    if(head==NULL)
        return NULL;
    else
    {
        struct Node*newNode=NULL;
        struct Node*next;
        struct Node*temp=head;
        while(temp!=NULL)
        {
            newNode=(struct Node*)malloc(sizeof(struct Node));
            newNode->data=temp->data;
            next=temp->next;
            temp->next=newNode;
            newNode->next=next;
            temp=next;
        }
        temp=head;
        while(temp!=NULL)
        {
            if(temp->arb!=NULL)
            {
                temp->next->arb=temp->arb->next;
            }
            else
            {
                temp->next->arb=temp->arb;
            }
            temp=temp->next->next;
        }
        struct Node*original=head;
        struct Node*copy=head->next;
        temp=copy;
        while(original->next!=NULL && copy->next!=NULL)
        {
            original->next=original->next->next;
            if(copy->next!=NULL)
            {
            copy->next=copy->next->next;
            }
            else
            {
                copy->next=NULL;
            }
            original=original->next;
            copy=copy->next;
        }
        return temp;
    }

};
