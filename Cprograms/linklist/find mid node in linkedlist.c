#include<stdio.h>
#include<conio.h>
void createList(int);
void findMid(int);
void displayList();


struct Node
{
int data;
struct Node *next;
};
struct Node *head;
void main()
{

int n;
printf("enter no of nodes:");
scanf("%d",&n);
 createList(n);
 displayList();
 findMid(n);
}
void createList(int n)
{
    int val;
    struct Node *temp=NULL,*newNode=NULL;
    head=(struct Node*)malloc(sizeof(struct Node));
    if(head==NULL)
    {
        printf("memory not allocated");
    }
    else
    {
        printf("enter value of first node:");
        scanf("%d",&val);
        head->data=val;
        head->next=NULL;
        temp=head;
        for(int i=2;i<=n;i++)
        {
            newNode=(struct Node*)malloc(sizeof(struct Node));

                if(newNode==NULL)
                    printf("memory full");
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
  void  findMid(int n)
  {
      if(head==NULL)
      {
          printf("emtpy LIST\n");
          return;
      }
      else
      {
          struct Node *mid;
          if(n%2!=0)
          {
              mid=n;
              printf("mid value=%d",mid->data);
          }
          else
          {
            mid=n;
            printf("mid value=%d",mid->data);
          }

      }
  }
  void displayList()
  {
      if(head==NULL)
      {
          printf("empty list");
      }
      else
      {
          struct Node  *temp=head;
          while(temp!=NULL)
          {
              printf("%d",temp->data);
              temp=temp->next;
          }
      }
  }

