#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct Node *head=NULL;
 struct Node
    {
     int data;
     struct Node *next;
    };
    void printlist();
void  main()
{
    int val,n;
     printf("enter value of n:");
    scanf("%d",&n);
    head=NULL;
    struct Node *temp=NULL;
    struct Node *newNode=NULL;

    head=(struct Node *)malloc(sizeof(struct Node));
    if(head==NULL)
    {
        printf("memory is full,cant allocate:");
        exit(1);
    }
    else
    {
        printf("enter data for first node:");
        scanf("%d",&val);
        head->data=val;
        head->next=NULL;
        temp=head;
    }

    for(int i=2;i<=n;i++)
    {
        newNode=(struct Node *)malloc(sizeof(struct Node));

            if(newNode==NULL)
            {
                printf("memory is full,cant located");
                break;
            }
            else
            {
                printf("enter data for node:");
                scanf("%d",&val);
                newNode->data=val;
                newNode->next=NULL;
                temp->next=newNode;
                temp=temp->next;
            }


    }
    printlist();


}
void printlist()
{
    struct Node *temp=NULL;
    if(head==NULL)
    {
        printf("list is empty");
        return;
    }
    else
    {
        temp=head;
        while(temp!=NULL)
        {
            printf("%d",temp->data);
            temp=temp->next;
        }
    }

}
