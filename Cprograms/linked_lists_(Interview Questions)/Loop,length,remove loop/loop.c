#include<stdio.h>
#include<conio.h>
#include<stdbool.h>

struct Node{
    struct Node*prev;
    int data;
    struct Node*next;
};

struct Node *createList(int);
void traverseList(struct Node*);
bool findLoop(struct Node*);
void lengthLoop(struct Node*);
struct Node* startingLoop(struct Node*);
struct Node*removeLoop(struct Node*,struct Node*);

struct Node*head=NULL;

void main()
{
    int ch;
    char c;
    int size;
    bool check;
    struct Node* startpoint=NULL;

    do{
        printf("1.create\n2.traverse\n3.Find loop\n4.length of loop\n5.starting point of loop\n6.Remove loop\n");
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

            case 3:check=findLoop(head);
                    if(check==true)
                        printf("\nloop found\n");
                    else
                        printf("\nloop not found\n");
                        break;

             case 4:check=findLoop(head);
                    if(check==true)
                    lengthLoop(head);
                    else
                        printf("NO loop");
                        break;

             case 5:check=findLoop(head);
                    if(check==true)
                    {
                        startpoint=startingLoop(head);
                        printf("%d ",startpoint->data);
                    }
                    else
                        printf("NO loop");
                        break;

             case 6:  check=findLoop(head);
                    if(check==true)
                    {
                        startpoint=startingLoop(head);
                        head=removeLoop(head,startpoint);
                        printf("\nloop removed\n");
                    }
                    else
                        printf("NO loop");
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
         newNode->prev=NULL;
         newNode->next=NULL;
         head=newNode;
         temp=head;

         for(int i=2;i<=size;i++)
         {
             newNode=(struct Node*)malloc(sizeof(struct Node));
             printf("enter data:\n");
             scanf("%d",&val);
             newNode->data=val;
             newNode->prev=temp;
             newNode->next=NULL;

             temp->next=newNode;
             temp=newNode;
         }
         temp->next=head->next->next;
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
            printf("%d ",temp->data);
            temp=temp->next;
        }
        return;
    }

}

bool findLoop(struct Node*head)
{
    if(head==NULL || head->next==NULL)
    {
        //printf("empty list\n");
        return false;
    }
    else
    {
        struct Node*slow=head,*fast=head;
        slow=slow->next;
        fast=fast->next->next;
        while(fast!=NULL &&fast->next!=NULL)
        {
            if(slow==fast)
            {
                return true;
            }
            else
            {
                slow=slow->next;
                fast=fast->next->next;
            }
        }
        return false;

    }
}

void lengthLoop(struct Node*head)
{
    int count=1;
    struct Node*slow=head,*fast=head;
    slow=slow->next;
    fast=fast->next->next;
    while(fast!=NULL && fast->next!=NULL)
    {
        if(slow==fast)
            break;
        else
        {
            slow=slow->next;
            fast=fast->next->next;
        }
    }
    struct Node*temp=slow;
    while(temp->next!=fast)
    {
        count++;
        temp=temp->next;
    }
    printf("length=%d",count);
    return;
}

struct Node*startingLoop(struct Node *head)
{
    struct Node*slow=head,*fast=head;
    slow=slow->next;
    fast=fast->next->next;
    while(fast!=NULL && fast->next!=NULL)
    {
        if(slow==fast)
            break;
        else
        {
            slow=slow->next;
            fast=fast->next->next;
        }
    }
    slow=head;
    while(slow!=fast)
    {
        slow=slow->next;
        fast=fast->next;
    }
    return slow;
};

struct Node*removeLoop(struct Node*head,struct Node*startpoint)
{
    struct Node*slow=startpoint;
    struct Node*fast=startpoint->next;
    while(fast->next!=slow)
     {
         fast=fast->next;
     }
    fast->next=NULL;
    return head;

};
