#include<stdio.h>
#include<conio.h>
struct Node{
    int data;
    struct Node *next
    };

struct Node *head=NULL;

void createList(int);
void traverseList();
void insertAtBeg();
void insertAtEnd();
void deleteAtBeg();
void deleteAtEnd();
int countList();
void deleteAllList();
void searchElement();
void findMidList();
void insertAtMid();
void deleteAtMid();
void swapdataTwoList();
void swapTwoList(int,int);
struct Node * reverse(struct Node *);
void nNOdeEnd(struct Node*,int);

void main()
{
    int n,ch,count=0,a,b;
    char choice;

    do{
       printf("1.create list:\n2.traverse list\n3.insert at begining\n4.insert at end\n5.delete at begining\n6.delete at end/7.count nodes\n8.delete All Nodes\n9.Search Element\n10.find mid node\n11.Insert at mid\n12.Delete at mid\n13.Swap data of Two Nodes\n15.swap two link list\n14.reverse\n");
       printf("16.nNOde\n");
       printf("enter choice:\n");
       scanf("%d",&ch);
       switch(ch)
       {
           case 1:  printf("enter value of n:\n");
                    scanf("%d",&n);
                    createList(n);
                    break;

           case 2:  traverseList();
                    break;

           case 3:  insertAtBeg();
                    break;

           case 4:  insertAtEnd();
                    break;

           case 5:  deleteAtBeg();
                    break;

           case 6:  deleteAtEnd();
                    break;

           case 7:
                    count=countList();
                    break;

           case 8:  deleteAllList();
                    break;

           case 9:  searchElement();
                    break;

           case 10:
                    findMidList();
                    break;

           case 11:
                    insertAtMid();
                    break;

           case 12:  deleteAtMid();
                    break;

           case 13:  swapdataTwoList();
                      break;
            case 14:  reverse(head);
                        break;



           case 15:  printf("enter first value\n:");
                    scanf("%d",&a);
                    printf("Enter second value:\n");
                    scanf("%d",&b);
                        swapTwoList(a,b);
                    break;
            case 16:  nNOdeEnd(head,5);
                        break;

           default: printf("\nwrong choice:\n");
       }

      fflush(stdin);
      printf("\ndo you want to do again enter yes or No :\n");
      scanf("%c",&choice);
       }while(choice=='y' || choice=='Y');

}

void createList(int n)
{
    int val;
    struct Node *temp,*newNode=NULL;
    head=(struct Node*)malloc(sizeof(struct Node));
    if(head==NULL)
    {
        printf("memory full cant allocated..\n");
        exit(1);
    }
    else
    {
        printf("enter value of first Node:\n");
            scanf("%d",&val);
        head->data=val;
        head->next=NULL;
        temp=head;
        for(int i=1;i<n;i++)
        {
            newNode=(struct Node*)malloc(sizeof(struct Node));
            if(newNode==NULL)
            {
                printf("memory full...\n");
                return;
            }
            else
            {
                printf("enter data of node:\n");
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
        printf("empty LISt...\n");
    }
    else
    {
        temp=head;
        printf("data in LINKLIST IS:...\n");
        while(temp!=NULL)
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }
    }
}
void insertAtBeg()
{
    int val;
    struct Node *newNode,*temp=NULL;
    newNode=(struct Node*)malloc(sizeof(struct Node));
    if(newNode==NULL)
    {
        printf("empty list");
        exit(1);
    }
    else
    {
        printf("enter data:\n");
        scanf("%d",&val);
        newNode->data=val;
        newNode->next=NULL;
        if(head==NULL)
        {
            head=newNode;
            printf("node inserted..\n");
        }
        else
        {
            temp=head;
            newNode->next=temp;
            head=newNode;
            printf("node inserted..\n");
        }

    }

}
void insertAtEnd()
{
        struct Node *newNode,*temp=NULL;
        newNode=(struct Node*)malloc(sizeof(struct Node));
        if(newNode==NULL)
        {
            printf("memory full..\n");
            exit(1);
        }
        else
        {
            int val;
            printf("enter data:\n");
            scanf("%d",&val);
            newNode->data=val;
            newNode->next=NULL;

            if(head==NULL)
            {
                head=newNode;
                printf("node inserted..\n");
            }

           else
           {
               temp=head;
               while(temp->next!=NULL)
               {
                   temp=temp->next;
               }
               temp->next=newNode;
               printf("node inserted...\n");

           }
        }
}
void deleteAtBeg()
{
    struct Node *temp=NULL;
    if(head==NULL)
    {
        printf("empty list already...\n");
    }
    else
    {
        temp=head;
        head=head->next;
        free(temp);
        printf("first node deleted...\n");
    }
}

void deleteAtEnd()
{
    struct Node *temp,*prev=NULL;

    if(head==NULL)
        printf("empty list already...\n");

    else
    {
        prev=head;
        temp=head;
        while(temp->next!=NULL)
        {
            prev=temp;
            temp=temp->next;
        }
        prev->next=NULL;
        free(temp);

        printf("node deleted...\n");

    }
}
int countList()
{
    struct Node *temp=NULL;
    int count=0;
    if(head==NULL)
    {
        printf("count =0");
        return count;
    }
    else
    {
        temp=head;
        while(temp!=NULL)
        {
            count++;
            temp=temp->next;
        }
        printf("count=%d",count);
        return count;
    }

}

void deleteAllList()
{
    struct Node *temp=NULL;
    if(head==NULL)
    {
        printf("already List EMPTY...\n");
    }
    else
    {
        temp=head;
        while(head!=NULL)
        {
            temp=head;
            head=head->next;
            free(temp);
        }
         printf("all nodes are deleted...\n");
    }
}

void searchElement()
{
    int search,flag=0;
    struct Node *temp=NULL;
    if(head==NULL)
    {
        printf("empty list cant able to search...\n");
    }
    else
    {
        temp=head;
        printf("enter value to search:\n");
        scanf("%d",&search);
        while(temp!=NULL)
        {
            if(temp->data==search)
                {
                    flag=1;
                    break;
                }
            else
                flag=0;
            temp=temp->next;
        }
        if(flag==1)
            printf("ELEMENT FOUND=%d\n",search);
        else
            printf("ELEMENT NOT FOUND=%d\n",search);
    }
}

void findMidList()
{
    int count=countList();
    struct Node *temp=NULL;
    if(head==NULL)
    {
        printf("empty list...");
    }
    else
    {
        temp=head;
        if(count%2==0)
        {
            for(int i=1;i<count/2;i++)
            {
                temp=temp->next;
            }
            printf("mid list data=%d",temp->data);
        }
        else
        {
            for(int i=1;i<(count+1)/2;i++)
            {
                temp=temp->next;
            }
            printf("mid list data=%d",temp->data);
        }
    }
}


void insertAtMid()
{
    int count=countList();
    struct Node *temp,*newNode,*prev=NULL;
    newNode=(struct Node*)malloc(sizeof(struct Node));
    if(newNode==NULL)
    {
        printf("memory full...\n");
        exit(1);
    }
    else
    {
        int val;
        printf("enter data of new node:\n");
        scanf("%d",&val);
        newNode->data=val;
        newNode->next=NULL;
        prev=head;
        temp=head;
        if(count%2==0)
        {
            for(int i=1;i<=count/2;i++)
            {
                prev=temp;
                temp=temp->next;
            }
            if(prev==temp)
            {
                prev->next=newNode;
                newNode->next=temp;
                printf("node inserted...\n");
            }
            else
            {
                prev->next=newNode;
                newNode->next=temp;
                printf("node inserted...\n");
            }
        }
        else
        {
            for(int i=1;i<(count+1)/2;i++)
            {
                prev=temp;
                temp=temp->next;
            }
            if(prev==temp)
            {
                temp=head;
                head=newNode;
                newNode->next=temp;
                printf("node inserted...\n");
            }
            else
            {
            prev->next=newNode;
            newNode->next=temp;
            printf("node inserted...\n");
            }
        }
    }

}

void deleteAtMid()
{
    int count=countList();
    struct Node *temp,*prev=NULL;
    if(head==NULL)
        printf("empty LIST already..\n");
    else
    {
        prev=head;
        temp=head;
        if(count%2==0)
        {
            for(int i=1;i<count/2;i++)
            {
                prev=temp;
                temp=temp->next;
            }
            if(prev==temp)
            {
                head=head->next;
                free(temp);
                printf("node deleted...\n");
            }
            else
            {
                prev->next=temp->next;
                free(temp);
                printf("node deleted...\n");
            }
        }
        else
        {
            for(int i=1;i<(count+1)/2;i++)
            {
                prev=temp;
                temp=temp->next;
            }
            if(prev==temp)
            {
                free(head);
                head=NULL;
                printf("node deleted...\n");
            }
            else
            {
                prev->next=temp->next;
                free(temp);
                printf("node deleted..\n");
            }
        }
    }

}


void swapdataTwoList()
{
    int first,second,flag1=0,flag2=0,copy;
    struct Node *temp=NULL,*data1,*data2;

    if(head==NULL)
        printf("EMPTY LIST CANT SWAP...\n");
    else
    {
        printf("enter first number:\n");
        scanf("%d",&first);
        printf("enter second number\n");
        scanf("%d",&second);
        temp=head;
        while(temp!=NULL)
        {
            if(first==temp->data)
            {
                flag1=1;
                data1=temp;
            }
            else if(second==temp->data)
            {
                flag2=1;
                data2=temp;
            }
            temp=temp->next;
        }
        if(flag1==1 && flag2==1)
        {
            copy=data1->data;
            data1->data=data2->data;
            data2->data=copy;
            printf("data swapped...\n");
        }
        else
            printf("elements cant swap both not found...\n");
    }


}
void swapTwoList(int a,int b)
{
    struct Node *temp=NULL,*prev=NULL,*prev1=NULL,*prev2=NULL,*next1=NULL,*next2=NULL,*next3=NULL;
    temp=head;
    prev=head;
    while(temp!=NULL)
    {

        if(temp->data==a)
        {
            prev1=prev;
            prev=temp;
            temp=temp->next;
        }
       else if(temp->data==b)
        {
            prev2=prev;
            prev=temp;
            temp=temp->next;
        }
        else
        {
            prev=temp;
            temp=temp->next;
        }

    }
    if(prev1==prev2)
    {
        head=prev1->next;
        next1=head->next;
        //head=prev2;
        head->next=prev1;
        prev1->next=next1;

        printf("swapped nodes\n");
    }
   else if(prev1==head && prev2->next->next==NULL)
    {
        next1=prev2->next;
        next2=prev1->next;
        prev2->next=prev1;
        prev1->next=NULL;
        next1->next=next2;
        head=next1;

        printf("swapped nodes\n");
    }
    else if(prev2==head && prev1->next->next==NULL)
    {
        next1=prev1->next;
        next2=prev2->next;
        prev1->next=prev2;
        prev2->next=NULL;
        next1->next=next2;
        head=next1;

        printf("swapped nodes\n");
    }

    else if(prev1->next==prev2 )
    {
        next1=prev1->next;
        next2=prev2->next->next;
        //next3=prev1->next;
        prev1->next=prev2->next;
        prev2->next->next=next1;
        next1->next=next2;

        printf("swapped nodes\n");
    }
    else if(prev2->next==prev1)
    {
        next1=prev2->next;
        next2=prev1->next->next;
        //next3=prev1->next;
        prev2->next=prev1->next;
        prev1->next->next=next1;
        next1->next=next2;

        printf("swapped nodes\n");
    }

    else
    {
        next1=prev1->next->next;
        next2=prev2->next->next;
        next3=prev1->next;
        prev1->next=prev2->next;
        prev1->next->next=next1;
        prev2->next=next3;
        prev2->next->next=next2;

        printf("swapped\n");
    }
}
struct Node* reverse(struct Node *head)
{
    if(head==NULL)
    {
        printf("empty list");
        return NULL;
    }
else
{
    struct Node *temp=head;
    struct Node *cur=head->next,*prev=head;
    temp=cur;
    prev->next=NULL;
    while(temp!=NULL)
    {

    cur=cur->next;
    temp->next=prev;
    prev=temp;
    temp=cur;
    }
    head=prev;
    temp=head;
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }


    return head;
}
}

void nNOdeEnd(struct Node *head,int n)
{

    struct Node *res=reverse(head);
    struct Node *temp=head;
    /*
    for(int i=1;i<n;i++)
    {

        printf("%d",temp->data);
        temp=temp->next;
    }
 */
 while(temp!=NULL)
 {
     printf("%d",temp->data);
     temp=temp->next;
 }
 printf("by result\n");
 temp=res;
 while(temp!=NULL)
 {
     printf("%d",temp->data);
     temp=temp->next;
 }

}


