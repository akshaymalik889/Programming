#include<stdio.h>
#include<conio.h>

struct Node{
    struct Node*prev;
    int data;
    struct Node*next;
};

struct Node *createList(int);
void traverseList(struct Node*);
void reverseOrder(struct Node*);
struct Node* insertAtBeg(struct Node*);
struct Node* insertAtLast(struct Node*);

struct Node*head=NULL;

void main()
{
    int ch;
    char c;
    int size;
    struct Node*head1=NULL;

    do{
        printf("1.create\n2.traverse\n3.reverse order\n4.insert At beg\n5.insert At last\n");
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

            case 3: reverseOrder(head);
                        break;

            case 4: head=insertAtBeg(head);
                    printf("Inserted\n");
                        break;

            case 5: head=insertAtLast(head);
                     printf("Inserted\n");
                        break;



            default: printf("\nwrong choice\n");
                    return;
        }
        printf("\ndo you want to again Y or N");
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

void reverseOrder(struct Node *head)
{
    if(head==NULL)
    {
        printf("empty list\n");
        return;
    }

    else
    {
        struct Node*temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        while(temp!=NULL)
        {
            printf("%d ",temp->data);
            temp=temp->prev;
        }
        return;
    }
}

struct Node* insertAtBeg(struct Node*head)
{
    int val;
    struct Node*newNode=NULL;
    struct Node*temp=head;
    newNode=(struct Node*)malloc(sizeof(struct Node));
    printf("enter data:\n");
    scanf("%d",&val);
    newNode->data=val;
    newNode->prev=NULL;
    newNode->next=temp;

    if(head==NULL)
      {
        printf("empty list\n");

        head=newNode;
        return head;
      }
      else
      {
          head=newNode;
          return head;
      }
};

struct Node* insertAtLast(struct Node*head)
{
    int val;
    struct Node*newNode=NULL;
    struct Node*temp=head;
    newNode=(struct Node*)malloc(sizeof(struct Node));
    printf("enter data\n");
    scanf("%d",&val);
    newNode->data=val;
    newNode->prev=NULL;
    newNode->next=NULL;
    if(temp!=NULL)
    {
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
    }
    if(head==NULL)
      {
        printf("empty list\n");
        head=newNode;
        return head;
      }
      else
      {
          temp->next=newNode;
          newNode->prev=temp;
          return head;
      }
};

