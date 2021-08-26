#include<stdio.h>
#include<conio.h>
struct Node{
int data;
struct Node *next};

//struct Node *head=NULL;

struct Node * createList(int);
void traverseList(struct Node *);
void deletee(struct Node *,struct Node *);

void main()
{
    struct Node *head=NULL,*temp=NULL;
    int n;
    int choice;
    char c;
    do
    {
        printf("1.create list\n2.traverse list\n3.delete\n");
        printf("enter choice:\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: printf("enter value of n..:\n");
                    scanf("%d",&n);
                    head=createList(n);
                    break;

            case 2: traverseList(head);
                    break;

            case 3:
                temp=head;
                while(temp!=NULL && temp->data!=3)
                {
                    temp=temp->next;
                }
                    deletee(head,temp);
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
    struct Node*head=NULL;
    head=(struct Node*)malloc(sizeof(struct Node));
    if(head==NULL)
    {
        printf("memory full cant allocate..\n");
        return NULL;
        exit(1);
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
            exit(1);
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
void traverseList(struct Node *head)
{
    //struct Node *head=NULL;
    struct Node *temp=head;
    if(head==NULL)
    {
        printf("empty list");
    }
    else
    {
        printf("data in linklist is:..\n");
        while(temp!=NULL)
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }
    }
}
 void deletee(struct Node *head,struct Node *temp)
{
    struct Node *temp1=head->next;
    struct Node *prev=head,*dlte=temp;

    while(temp1!=dlte)
    {
        prev->next=temp1;
        prev=temp1;
        temp1=temp1->next;
    }
    prev->next=temp1->next;
    free(temp1);
    //return head;
};



