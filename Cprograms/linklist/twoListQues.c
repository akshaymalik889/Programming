#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct Node{
int data;
struct Node *next};

int a=5;
struct Node *head=NULL;
//struct Node *head1=NULL;
//struct Node *head2=NULL;
//struct Node *head3=NULL;

struct Node* createList(int);
void traverseList(struct Node*);
struct Node* mergeTwoLists();
struct Node* addTwoList();
void testGlobal(int);
void main()
{
    // struct Node *head4=NULL;
    struct Node*ans=NULL;
   // struct Node*temp3=NULL;
     int n;
    int choice;
    char c;
    do
    {
        printf("1.create list\n2.traverse list\n3.merge two lists\n4.add two list\n");

         printf("enter choice:\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: printf("enter no. of nodes  for list..:\n");
                    scanf("%d",&n);
                    createList(n);
                    break;

            case 2: traverseList(head);
                    break;

            case 3: ans=mergeTwoLists();
                    traverseList(ans);
                    break;

            case 4: ans=addTwoList();
                    traverseList(ans);
                    break;

            case 5: testGlobal(a);
                    printf("%d",a);
                    break;


            default: printf("wrong choice..\n");
        }
        fflush(stdin);
        printf("\nyou want to do again YES or NO:");
        scanf("%c",&c);
    }while(c=='y' || c=='Y');
}

struct Node * createList(int n)
{
    struct Node*head=NULL;
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
                traverseList(head);
                return head;

    }


}
void testGlobal(int a)
{
    a=8;
    printf("%d",a);
}

void traverseList(struct Node* head)
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
            printf("%d ",temp->data);
            temp=temp->next;
        }
    }

}


struct Node* mergeTwoLists()
{
    struct Node*head1=NULL,*head2=NULL;
    int n1,n2;
    printf("enter no. of nodes for first list:\n");
    scanf("%d",&n1);
    head1=createList(n1);
    printf("enter no. of nodes for second list:\n");
    scanf("%d",&n2);
    head2=createList(n2);
    traverseList(head1);
    traverseList(head2);
    struct Node  *temp1=NULL,*temp2=NULL,*temp3=NULL,*newNode=NULL;
     struct Node *head3=NULL;
    if(head1==NULL && head2==NULL)
    {
        return NULL;
    }

    else if(head1==NULL && head2!=NULL)
    {
        //struct ListNode *l3=NULL;
        head3=(struct Node*) malloc(sizeof(struct Node));
            if(head3 == NULL)
                return NULL;
        else
        {
            temp2=head2;
            if(head2->next==NULL) // when single node
            {
                head3->next=NULL;
                head3->data=head2->data;
                return head3;
            }
            else // when more than 1 node
            {
                head3->data=temp2->data;
                head3->next=NULL;
                temp2=temp2->next;
                temp3=head3;
                while(temp2!=NULL)
                {
                    newNode=(struct Node*) malloc(sizeof(struct Node));
                    if(newNode==NULL)
                        return NULL;
                    else
                    {
                        newNode->next=NULL;
                        newNode->data=temp2->data;
                        temp2=temp2->next;
                        temp3->next=newNode;
                        temp3=temp3->next;
                       // return l3;
                    }
                }
                return head3;
            } //end else
        }
    } //end else if(l1==NULL && l2!=NULL)

    else if(head1!=NULL && head2==NULL)
    {
        struct Node* head3=NULL;
        head3=(struct Node*)malloc(sizeof(struct Node));
        if(head3==NULL)
            return NULL;
        else
        {

            temp1=head1;
            if(head1->next==NULL) // single node
            {
                head3->next=NULL;
                head3->data=head1->data;
                return head3;
            }
            else
            {
                head3->data=temp1->data;
                head3->next=NULL;
                temp1=temp1->next;
                temp3=head3;
                while(temp1!=NULL)
                {
                    newNode=(struct Node*)malloc(sizeof(struct Node));
                    if(newNode==NULL)
                        return NULL;
                    else
                    {
                        newNode->next=NULL;
                        newNode->data=temp1->data;
                        temp1=temp1->next;
                        temp3->next=newNode;
                        temp3=temp3->next;
                       // return l3;
                    }
                }
                return head3;
            } //end else
        } //end else
    } //end else if(l1!=NULL && l2==NULL)

    else
    {

        head3=(struct Node*)malloc(sizeof(struct Node));
        if(head3==NULL)
            return NULL;
        else
        {
            temp1=head1;
            temp2=head2;
            temp3=head3;
            temp3->next=NULL;
            //temp3->val=NULL;
            if(temp1->data<temp2->data)
            {
                temp3->data=temp1->data;
                temp1=temp1->next;
            }
            else
            {
                temp3->data=temp2->data;
                temp2=temp2->next;
            }
            while(temp1!=NULL && temp2!=NULL)
            {
                struct Node*newNode=NULL;
                newNode=(struct Node*)malloc(sizeof(struct Node));
                if(newNode==NULL)
                {
                    return NULL;
                }
                else
                {
                    if(temp1->data < temp2->data)
                    {
                        newNode->data=temp1->data;
                        newNode->next=NULL;
                        temp1=temp1->next;
                        temp3->next=newNode;
                        temp3=newNode;
                    }
                    else
                    {
                        newNode->next=NULL;
                        newNode->data=temp2->data;
                        temp2=temp2->next;
                        temp3->next=newNode;
                        temp3=newNode;
                    }
                } //end else
            } //end while

            if(temp1==NULL)
            {
                while(temp2!=NULL)
                {
                    struct Node* newNode=NULL;
                    newNode=(struct Node*) malloc(sizeof(struct Node));
                    if(newNode==NULL)
                        return NULL;
                    else
                    {
                        newNode->next=NULL;
                        newNode->data=temp2->data;
                        temp2=temp2->next;
                        temp3->next=newNode;
                        temp3=newNode;
                        //return l3;
                    }
                }
            } // end if

            else
            {
                 while(temp1!=NULL)
                {
                    struct Node* newNode=NULL;
                    newNode=(struct Node*) malloc(sizeof(struct Node));
                    if(newNode==NULL)
                        return NULL;
                    else
                    {
                        newNode->next=NULL;
                        newNode->data=temp1->data;
                        temp1=temp1->next;
                        temp3->next=newNode;
                        temp3=newNode;
                        //return l3;
                    }
                } // end while
            } // end else

        }
        return head3;
    } //end else

}

struct Node* addTwoList()
{
    struct Node *head1=NULL,*head2=NULL;
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
        return NULL;
    }

    else if(head1==NULL && head2!=NULL)
    {
        struct Node  *temp2=head2,*head3=NULL;

        head3=(struct Node*) malloc(sizeof(struct Node));
            if(head3 == NULL)
                return NULL;

            else
            {
                struct Node *temp3=NULL;

                head3->data=temp2->data;
                head3->next=NULL;
                temp2=temp2->next;
                temp3=head3;
                while(temp2!=NULL)
                {
                    struct Node *newNode=NULL;

                    newNode=(struct Node*) malloc(sizeof(struct Node));
                    if(newNode==NULL)
                        return NULL;
                    else
                    {
                        newNode->data=temp2->data;
                        newNode->next=NULL;
                        temp2=temp2->next;
                        temp3->next=newNode;
                        temp3=newNode;
                    }
                }

            } //end else
            return head3;

    } //end else if(l1==NULL && l2!=NULL)

    else if(head1!=NULL && head2==NULL)
    {
        struct Node  *temp1=head1,*head3=NULL;

        head3=(struct Node*) malloc(sizeof(struct Node));
            if(head3 == NULL)
                return NULL;

            else
            {
                struct Node *temp3=NULL;

                head3->data=temp1->data;
                head3->next=NULL;
                temp1=temp1->next;
                temp3=head3;
                while(temp1!=NULL)
                {
                    struct Node *newNode=NULL;

                    newNode=(struct Node*) malloc(sizeof(struct Node));
                    if(newNode==NULL)
                        return NULL;
                    else
                    {
                        newNode->data=temp1->data;
                        newNode->next=NULL;
                        temp1=temp1->next;
                        temp3->next=newNode;
                        temp3=newNode;
                    }
                }

            } //end else
            return head3;

    } //end else if(l1==NULL

    else
    {
        int sum=0,carry=0,rem=0;
        struct Node*temp1=head1,*temp2=head2,*temp3=NULL,*head3=NULL;
        head3=(struct Node*)malloc(sizeof(struct Node));
        if(head3==NULL)
            return NULL;
        else
        {
            sum=temp1->data+temp2->data;
            if(sum>=10)
            {
                rem=sum%10;
                carry=sum/10;
                head3->data=rem;
                head3->next=NULL;
                temp3=head3;
                temp1=temp1->next;
                temp2=temp2->next;
            }
            else
            {
                head3->data=sum;
                head3->next=NULL;
                temp3=head3;
                temp1=temp1->next;
                temp2=temp2->next;
            }

        while(temp1!=NULL && temp2!=NULL)
        {
            struct Node *newNode=NULL;
            newNode=(struct Node*)malloc(sizeof(struct Node));
            if(newNode==NULL)
            {
                return NULL;
            }
            else
            {
                sum=temp1->data+temp2->data+carry;
                if(sum>=10)
                {
                    rem=sum%10;
                    carry=sum/10;
                    newNode->data=rem;
                    newNode->next=NULL;
                    temp3->next=newNode;
                    temp3=newNode;
                    temp1=temp1->next;
                    temp2=temp2->next;
                }
                else
                {
                    newNode->data=sum;
                    newNode->next=NULL;
                    temp3->next=newNode;
                    temp3=newNode;
                    temp1=temp1->next;
                    temp2=temp2->next;
                }
            }
        }


                if(temp1==NULL)
                {
                    while(temp2!=NULL)
                    {
                        struct Node *newNode=NULL;
                        newNode=(struct Node*)malloc(sizeof(struct Node));
                        if(newNode==NULL)
                        {
                            return NULL;
                        }
                        else
                        {

                            sum=temp2->data +carry;
                            if(sum>=10)
                            {
                                rem=sum%10;
                                carry=sum/10;
                                newNode->data=rem;
                                newNode->next=NULL;
                                temp3->next=newNode;
                                temp3=newNode;
                                temp2=temp2->next;
                            }
                            else
                            {
                                carry=0;
                                newNode->data=sum;
                                newNode->next=NULL;
                                temp3->next=newNode;
                                temp3=newNode;
                                temp2=temp2->next;
                            }
                        }
                    }
                    return head3;
                }

            else
                {
                    while(temp1!=NULL)
                    {
                        struct Node *newNode=NULL;
                        newNode=(struct Node*)malloc(sizeof(struct Node));
                        if(newNode==NULL)
                        {
                            return NULL;
                        }
                        else
                        {


                            sum=temp1->data +carry;
                            if(sum>=10)
                            {
                                rem=sum%10;
                                carry=sum/10;
                                newNode->data=rem;
                                newNode->next=NULL;
                                temp3->next=newNode;
                                temp3=newNode;
                                temp1=temp1->next;
                            }
                            else
                            {
                                carry=0;
                                newNode->data=sum;
                                newNode->next=NULL;
                                temp3->next=newNode;
                                temp3=newNode;
                                temp1=temp1->next;
                            }
                        }
                    }

                    //printf("1");
                   // return head3;
                   // return head3;
                }
        }

                    temp3=head3;
                    while(temp3!=NULL)
                    {
                        printf("%d ",temp3->data);
                        temp3=temp3->next;
                    }


     }//end else

    }
