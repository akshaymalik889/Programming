#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void createList();
void traverseList();
void insertAtBegining();
void deleteAtBegining();
void deleteAllNodes();
void countNodes();
void insertAtEnd();
void deleteAtEnd();
void searchElement();
struct Node
{
    int data;
    struct Node *next;
};
struct Node *head=NULL;
void main()
{
    deleteAtBegining();
  //   traverseList();
    createList();
    traverseList();
    deleteAtBegining();
    traverseList();
    insertAtBegining();
    traverseList();
  //deleteAllNodes();
    //traverseList();
    //insertAtBegining();
    //traverseList();
    countNodes();

   deleteAtEnd();
    traverseList();
  //  insertAtEnd();
    // traverseList();
    searchElement();

}
void createList()
{
    int val,n;

        struct Node *temp=NULL;
        struct Node *newNode=NULL;
        head=(struct Node *)malloc(sizeof(struct Node));
        if(head==NULL)
        {
            printf("memory full:,CANT ALLOCATED MEMORY:");
            exit(1);
        }
        else
        {
            printf("enter no. of nodes:");
            scanf("%d",&n);
            printf("enter first node data:");
            scanf("%d",&val);
            head->data=val;
            head->next=NULL;
            temp=head;
            for(int i=2;i<=n;i++)
            {
                newNode=(struct Node *)malloc(sizeof(struct Node));
                if(newNode==NULL)
                {
                    printf("MEMORY FULL");
                    break;
                }
                else
                {
                    printf("enter data:");
                    scanf("%d",&val);
                    newNode->data=val;
                    newNode->next=NULL;
                    temp->next=newNode;
                    temp=temp->next;
                }
            }
        }
}

void traverseList()
{
    struct Node *temp=NULL;
    if(head==NULL)
    {
        printf("empty list\n");
        return;
    }
    else
    {
        temp=head;
        while(temp!=NULL)
        {
            printf("%d\n",temp->data);
            temp=temp->next;
        }
    }
}
void insertAtBegining()
{
    struct Node *newNode=NULL;
    newNode=(struct Node *)malloc(sizeof(struct Node));
    if(newNode==NULL)
    {
        printf("MEMORY FULL");
        return;
    }
    else
    {
        int val;
        printf("enter value:");
        scanf("%d",&val);
        newNode->data=val;
        newNode->next=head;
        head=newNode;
        printf("inserted\n");
    }
}
void deleteAtBegining()
{
    struct Node *temp=NULL;
        if(head==NULL)
        {
            printf("empty list already:");
        }
        else
        {
            temp=head;
            head=head->next;
            printf("data deleted:%d\n][",temp->data);
            free(temp);
        }
}
void deleteAllNodes()
{
    struct node *temp=NULL;
    if(head==NULL)
    {
        printf("list empty\n");
    }
    else
    {
        temp=head;
        while(temp!=NULL)
        {
            head=head->next;
            free(temp);

            temp=head;
        }
        printf("all nodes deleted\n");

    }
}
void countNodes()
{
    struct Node *temp=NULL;
    int count=0;
    if(head==NULL)
    {
        printf("count=0");
    }
    else{

    temp=head;

    while(temp!=NULL)
        {
            count++;
            temp=temp->next;
        }
        printf("no. of nodes=%d\n",count);
    }
}
void insertAtEnd()
{
    int val;
    struct Node *temp=NULL;
    struct Node *newNode=NULL;
    newNode=(struct Node *) malloc(sizeof(struct Node));
    if(newNode=NULL)
    {
        printf("memory full\n");
        return;
    }
    else
    {
        printf("enter val:");
        scanf("%d",&val);
        newNode->data=val;
        newNode->next=NULL;
        if(head==NULL)
        {
            head=newNode;
        }
        else{

        temp=head;

    while(temp->next!=NULL)
    {
     temp=temp->next;
    }
    temp->next=newNode;

        }
    }
}
void deleteAtEnd()
{
    struct Node *temp=NULL;
    struct Node *prev=NULL;
    if(head==NULL)
    {
        printf("list already empty:\n");
    }
    else{
            temp=head;
        while(temp->next!=NULL)
        {
            prev=temp;
            temp=temp->next;
        }
        prev->next=NULL;
        free(temp);
        printf("last node is deleted...\n");

    }
}
void searchElement()
{
    int search,flag=0;
    struct Node *temp=NULL;
    printf("enter element to search:");
    scanf("%d",&search);
    if(head==NULL)
    {
        printf("list is empty,uable to search..\n");
    }
    else
    {
        temp=head;
        while(temp!=NULL)
        {
            if(search==temp->data)
            {
                flag=1;
                break;
            }
            else
            {
              flag=0;
            }
            temp=temp->next;
        }
        if(flag==1)
        {
            printf("search element found=%d\n",search);
        }
        else
            printf("element not found\n");
    }
}
