#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<stdbool.h>
struct Node{
int data;
struct Node *next
};

struct Node *head=NULL;
//struct Node *head1=NULL;
//struct Node *head2=NULL;
struct Node *top=NULL;

struct Node* createList(int);
void traverseList(struct Node*);
bool palindrome(struct Node *);
struct Node * alternative(struct Node*);
void push(int);
int pop();
struct Node *segregate(struct Node *);
struct Node *deleteAlternative(struct Node*);
void split(struct Node*);
struct Node *rotate(struct Node *,int);
struct Node *greaterRight(struct Node*);
struct Node*deleteNAfterM(struct Node*,int,int);
struct Node *reArrange(struct Node *);
struct Node * reverse(struct Node *);
struct Node *sort(struct Node *);
struct Node *mergeTwoLists(struct Node*,struct Node *);
struct Node *alternateOddEven(struct Node *);
struct Node *deleteeAlternative(struct Node *);
struct Node *alternateSplit(struct Node *);
struct Node *evenoddPosition(struct Node*);
struct Node*add1(struct Node *);
void tripletList(int);
struct Node *deleteLastOccur(struct Node *,int);
void decimalEquivalent(struct Node *);
struct Node*partioning(struct Node*,int);
struct Node *moveAllOcccur(struct Node *,int);
struct Node *nNode(struct Node *,int,int);
int noOfTimes(struct Node *,int,int);
bool identicalList(struct Node *,struct Node *);
struct Node *deleteAlternate(struct Node *);
struct Node *removeDuplicates(struct Node *);
struct Node *unionList(struct Node *,struct Node *);
struct Node *intersection(struct Node*,struct Node*);


void main()
{
    struct Node *temp=NULL;
    struct Node*head1=NULL;
    struct Node *head2=NULL;
    int n,k,x,n2;
    int choice;
    char c;
    bool ans;
    int value,i=1,count=0;
    do
    {
        printf("1.create list\n2.traverse list\n3.palindrome\n4.alternative even odd\n5.delete alternative\n6.alternative split\n");
        printf("7.rotate\n8.delete right greater\n9.delete N nodes after M\n10.Re Arrange list\n11.reverse\n");
        printf("12.sort assending and descending list\n13.merge two Lists\n14.segregate even odd list\n");
        printf("15.alternate ODD EVEN\n16.delete alternative\n17.alternate split\n18.even & odd position together\n");
        printf("19.add 1 to list\n20.triplet of list\n21.delete last occurence\n22.Decimal Equivalent\n");
        printf("23.partioning\n24.move occur at last\n25.nNode of LIST\n26.count no of times\n27.identical List\n");
        printf("28.delete alternate\n29.remove duplicates\n30.union LIST\n31.intersection list\n");
        printf("enter choice:\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: printf("enter value of n..:\n");
                    scanf("%d",&n);
                    createList(n);
                    break;

            case 2: traverseList(head);
                    break;

             case 3:  ans=palindrome(head);
                    if(ans==true)
                    printf("palindrome");
                    else
                    printf("not palindrome\n");
                        break;

            case 4: head2=alternative(head);
                        break;

            case 5: head=deleteAlternative(head);
                    break;

            case 6: split(head);
                    break;

            case 7: head=rotate(head,4);
                    break;

            case 8: head=greaterRight(head);
                    break;

            case 9: head=deleteNAfterM(head,4,2);
                    break;

            case 10: head=reArrange(head);
                     break;

            case 11: reverse(head);
                     break;

            case 12: sort(head);
                    break;

             case 13: mergeTwoLists(head,head);
                      break;

             case 14: segregate(head);
                      break;

             case 15: alternateOddEven(head);
                       break;

             case 16: deleteeAlternative(head);
                    break;

             case 17: alternateSplit(head);
                       break;

             case 18: evenoddPosition(head);
                        break;

            case 19: add1(head);
                        break;

            case 20: tripletList(5000);
                       break;

            case 21: printf("enter key:\n");
                        scanf("%d",&k);
                        deleteLastOccur(head,k);
                      break;

             case 22: decimalEquivalent(head);
                        break;

             case 23:  printf("enter value of x:\n");
                        scanf("%d",&x);
                        partioning(head,x);
                        break;

              case 24: printf("enter value of key:\n");
                        scanf("%d",&k);
                        moveAllOcccur(head,k);
                        break;

              case 25:  printf("enter value of n Node:\n");
                        scanf("%d",&value);
                        head2=nNode(head,value,i);
                        printf("%d",head2->data);
                        break;

             case 26:  printf("enter value of k:\n");
                        scanf("%d",&value);
                        int k=noOfTimes(head,value,count);
                        printf("no of times:%d",k);
                        break;

              case 27:  printf("enter value of n first Node:\n");
                        scanf("%d",&n);
                        head1=createList(n);
                        printf("enter value of n second  Node:\n");
                        scanf("%d",&n2);
                        head2=createList(n2);
                        ans=identicalList(head1,head2);
                        if(ans==true)
                        printf("true\n");
                        else
                        printf("false\n");
                            break;

               case 28: temp=deleteAlternate(head);
                            traverseList(temp);
                            break;;

                case 29: temp=removeDuplicates(head);
                                traverseList(temp);
                                break;

                case 30:  printf("enter value of n first Node:\n");
                        scanf("%d",&n);
                        head1=createList(n);
                        printf("enter value of n second  Node:\n");
                        scanf("%d",&n2);
                        head2=createList(n2);
                        temp=unionList(head1,head2);
                        traverseList(temp);
                            break;

            case 31:  printf("enter value of n first Node:\n");
                        scanf("%d",&n);
                        head1=createList(n);
                        printf("enter value of n second  Node:\n");
                        scanf("%d",&n2);
                        head2=createList(n2);
                        temp=intersection(head1,head2);
                        traverseList(temp);
                            break;




            default: printf("wrong choice..\n");
        }
        fflush(stdin);
        printf("\nyou want to do again YES or NO:");
        scanf("%c",&c);
    }while(c=='y' || c=='Y');

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
void traverseList(struct Node *head)
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

bool palindrome(struct Node *head)
{
    if(head==NULL)
    {
        printf("empty list..\n");

    }
    else
    {
        struct Node *temp=head;
        while(temp!=NULL)
        {
            push(temp->data);
            temp=temp->next;
        }
        temp=head;
        while(temp!=NULL)
        {
            int val=pop();
            if(val!=temp->data)
                return false;
            else
                temp=temp->next;
        }
        return true;

    }
}
void push(int data)
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
        newNode->data=data;
        newNode->next=NULL;
        newNode->next=top;
        top=newNode;
    }
}
int pop()
{
    struct Node *temp=NULL;
    int val;
    if(top==NULL)
    {
        printf("empty stack..\n");
        exit(1);
    }
    else
    {
        temp=top;
        val=top->data;
        top=top->next;
        free(temp);
        //printf("value top from stack is:%d",val);
        return val;
    }
}

/*struct Node *segregate(struct Node *head)
{
    if(head==NULL)
    {
        return NULL;
    }
    else
    {
        struct Node *temp=head->next;
        struct Node *temp1=NULL,*temp2=NULL;
        struct Node *head2=NULL;
        if(head->data%2==0)
        {
            temp1=head;
        }
        else
        {
            temp2=head;
            head2=head;
        }
        while(temp!=NULL)
        {
            if(temp->data%2==0)
            {
                temp1->next=temp;
                temp1=temp;
                temp=temp->next;
            }
            else
            {
                temp2->next=temp;
                temp2=temp;
                temp=temp->next;
            }
        }
        temp1->next=head2;
        temp2->next=NULL;
    }
    return headl;
};
*/
struct Node *alternative(struct Node *head)
{
    if(head==NULL)
        return NULL;
    else
    {
        struct Node*temp=head;
        struct Node *prev=head;
        struct Node *cur=NULL;
        while(temp->next!=NULL)
        {
            if(temp->data%2!=0)
            {
                if(temp->next->data%2==0)
                {
                    prev->next=temp->next;
                    prev=temp->next;
                    temp=prev;
                }
                else
                {
                    cur=temp->next;
                    while(temp->next->data%2!=0)
                    {
                        temp=temp->next;
                        if(temp->next==NULL)
                            return head;

                    }
                    prev->next=temp->next;
                    prev=temp->next;
                    temp->next=prev->next;
                    temp=prev;
                    prev->next=cur;
                }
            }

            else
            {
                if(temp->next->data%2!=0)
                {
                    prev->next=temp->next;
                    prev=temp->next;
                    temp=prev;
                }
                else
                {
                    cur=temp->next;
                    while(temp->next->data%2==0)
                    {
                        temp=temp->next;
                        if(temp->next==NULL)
                            return head;
                    }
                    prev->next=temp->next;
                    prev=temp->next;
                    temp->next=prev->next;
                    temp=prev;
                    prev->next=cur;
                }
            }
        }
        return head;
    }
};
struct Node *deleteAlternative(struct Node *head)
{
    if(head==NULL)
        return NULL;
    else
    {
        struct Node *temp=head;
        struct Node *prev =head;
        while(temp->next!=NULL)
        {
            temp=temp->next->next;
            free(prev->next);
            prev->next=temp;
            prev=temp;
            if(temp==NULL)
                return head;
        }
        return head;
    }
};

void split(struct Node* head)
{
    if(head==NULL)
        return NULL;
    else
    {
        int count=0;
        struct Node *temp=head;
        struct Node*head1=NULL,*head2=NULL;
        struct Node*temp1=NULL,*temp2=NULL;
        head1=(struct Node*)malloc(sizeof(struct Node));
        head2=(struct Node*)malloc(sizeof(struct Node));
        if(head1==NULL || head2==NULL)
            return NULL;
        else
        {
            head1->data=temp->data;
            head1->next=NULL;
            temp=temp->next;
            temp1=head1;
            count++;

            head2->data=temp->data;
            head2->next=NULL;
            temp=temp->next;
            temp2=head2;
            count++;

            while(temp!=NULL)
            {
                count++;
                struct Node*newNode=NULL;
                newNode=(struct Node*)malloc(sizeof(struct Node));
                if(newNode==NULL)
                    return NULL;
                else
                {
                    if(count%2!=0)
                    {
                        newNode->data=temp->data;
                        newNode->next=NULL;
                        temp=temp->next;
                        temp1->next=newNode;
                        temp1=newNode;

                    }
                    else
                    {
                        newNode->data=temp->data;
                        newNode->next=NULL;
                        temp=temp->next;
                        temp2->next=newNode;
                        temp2=newNode;
                    }
                }
            }
            temp1=head1;
            temp2=head2;
            printf("first sublist is...\n");
            while(temp1!=NULL)
            {
                printf("%d ",temp1->data);
                temp1=temp1->next;
            }
             printf("\nsecond sublist...\n");
            while(temp2!=NULL)
            {
                printf("%d ",temp2->data);
                temp2=temp2->next;
            }
        }
    }
};

struct Node *rotate(struct Node* head,int k)
{
    if(head==NULL)
        return NULL;
    else if(head->next==NULL)
        return head;
    else
    {
        struct Node *temp=head,*prev=head;
        int i=1;
        while(i<k)
        {
            temp=temp->next;
            i++;
        }
        head=temp->next;
        temp->next=NULL;
        temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=prev;

        return head;
    }
};
struct Node* greaterRight(struct Node* head)
{
    if(head==NULL)
        return NULL;
    else
    {
        struct Node *temp=head,*prev=head;
        struct Node *check=NULL,*neww=NULL;
        int flag=0;
        while(temp!=NULL)
        {
            flag=0;
            check=temp;
            neww=check->next;

            while(neww!=NULL)
            {
                if(check->data<neww->data)
                {
                    flag=1;
                    break;
                }
                else
                {
                    flag=0;
                    neww=neww->next;
                }
            }

            if(flag==1)
            {
                if(temp==head)
                {
                    head=head->next;
                    temp=head;
                    prev=head;
                    free(check);
                }
                else
                {
                    prev->next=temp->next;
                    temp=temp->next;
                    free(check);
                }
            }
            else
            {
                //prev->next=temp->next;
                prev=temp;
                temp=temp->next;

            }
        }
        return head;
    }
};

struct Node* deleteNAfterM(struct Node* head,int m,int n)
{
    if(head==NULL)
        return NULL;

    else
    {
        struct Node *temp=head,*prev=head;
        int i=1;
        while(i<=m)
        {
            prev=temp;
            temp=temp->next;
            i++;
        }
        i=1;
        while(i<=n)
        {
            if(head==temp)
            {
                head=head->next;
                prev=head;
                free(temp);
                temp=head;
                i++;
            }
           else
           {
                prev->next=temp->next;
                free(temp);
                temp=prev->next;
                i++;
           }
        }
        return head;
    }
};

struct Node *reArrange(struct Node* head)
{
    if(head==NULL)
        return NULL;
    else
    {
        struct Node *temp2=NULL,*temp=head,*head2=NULL;
        struct Node*next1=NULL,*next2=NULL;
        int i=1,count=0;
        while(temp!=NULL)
        {
            count++;
            temp=temp->next;
        }
        temp=head;
        while(i<(count/2))
        {
            temp=temp->next;
            i++;
        }
        head2=temp->next;
        head2=reverse(head2);
        traverseList(head);
        traverseList(head2);

        temp->next=NULL;
        temp=head;
        traverseList(head);
        traverseList(head2);
        temp2=head2;

        traverseList(head);
        traverseList(head2);
        while(temp->next!=NULL)
        {
         next1=temp->next;
         next2=temp2->next;
         temp->next=temp2;
         temp2->next=next1;
         temp=next1;
         temp2=next2;
        }
         temp->next=temp2;


        return head;
    }

};
struct Node*reverse(struct Node *head)
{
    if(head==NULL)
        return NULL;
    else
    {
        struct Node *temp=head->next,*prev=head,*cur=head->next;
        prev->next=NULL;
        while(temp!=NULL)
        {
            cur=cur->next;
            temp->next=prev;
            prev=temp;
            temp=cur;
        }
        head=prev;
        //traverseList(head);
        return head;
    }
};

struct Node*sort(struct Node *head)
{
    if(head==NULL)
        return NULL;
    else
    {
        struct Node*temp=head,*temp2=head->next,*head2=head->next;
        struct Node *head3=NULL;
        while( temp!=NULL && temp->next!=NULL)
        {
            temp->next=temp2->next;
            temp=temp2->next;
            if(temp!=NULL)
                {
                    temp2->next=temp->next;
                    temp2=temp->next;
                }
        }

        temp->next==NULL;
        traverseList(head);
        traverseList(head2);
        head2=reverse(head2);

        head3=mergeTwoLists(head,head2);
        traverseList(head3);

        return 0;
    }
};

struct Node* mergeTwoLists(struct Node *head1,struct Node *head2)
{
    /*
    int n1,n2;
    printf("enter no. of nodes for first list:\n");
    scanf("%d",&n1);
    head1=createList(n1);
    printf("enter no. of nodes for second list:\n");
    scanf("%d",&n2);
    head2=createList(n2);
    traverseList(head1);
    traverseList(head2);
    */
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

struct Node *segregate(struct Node *head)
{
    if(head==NULL)
        return NULL;

     else
     {
        struct Node *temp=head,*temp1=NULL,*temp2=NULL,*head1=NULL,*head2=NULL;

            while(temp!=NULL)
            {
                if(temp->data%2==0)
                {
                    temp2=temp;
                    head2=temp2;
                    break;
                }
                else
                    temp=temp->next;
            }
            temp=head;
            while(temp!=NULL)
            {
                if(temp->data%2!=0)
                {
                    temp1=temp;
                    head1=temp1;
                    break;
                }
                else
                    temp=temp->next;
            }
            temp=head;

        while(temp!=NULL)
        {
            if(temp->data%2!=0)
            {
                if(temp==head1)
                {   temp=temp->next;
                }
                else
                {
                    temp1->next=temp;
                    temp1=temp;
                    temp=temp->next;
                }
            }

            else
            {
                if(temp==head2)
                    temp=temp->next;
                else
                {
                    temp2->next=temp;
                    temp2=temp;
                    temp=temp->next;
                }
            }
        }
        temp1->next=NULL;
        temp2->next=NULL;
       // temp1=head1;
        //temp2=head2;

        traverseList(head1);
        traverseList(head2);
        temp2->next=head1;

        traverseList(head2);

        return head;
    }
};

struct Node*alternateOddEven(struct Node *head)
{
    if(head==NULL)
        return NULL;

     else
     {
        struct Node *temp=head,*temp1=NULL,*temp2=NULL,*head1=NULL,*head2=NULL;

            while(temp!=NULL)
            {
                if(temp->data%2==0)
                {
                    temp2=temp;
                    head2=temp2;
                    break;
                }
                else
                    temp=temp->next;
            }
            temp=head;
            while(temp!=NULL)
            {
                if(temp->data%2!=0)
                {
                    temp1=temp;
                    head1=temp1;
                    break;
                }
                else
                    temp=temp->next;
            }
            temp=head;

        while(temp!=NULL)
        {
            if(temp->data%2!=0)
            {
                if(temp==head1)
                    temp=temp->next;
                else
                {
                    temp1->next=temp;
                    temp1=temp;
                    temp=temp->next;
                }
            }

            else
            {
                if(temp==head2)
                    temp=temp->next;
                else
                {
                    temp2->next=temp;
                    temp2=temp;
                    temp=temp->next;
                }
            }
        }
        temp1->next=NULL;
        temp2->next=NULL;

        temp1=head1;
        temp2=head2;

        traverseList(head1);
        traverseList(head2);

        struct Node *next1=NULL,*next2=NULL;

        while(temp1!=NULL && temp2!=NULL)
        {
            next1=temp1->next;
            next2=temp2->next;
            temp1->next=temp2;
            if(temp1->next==NULL)
                temp1=temp1->next;
            else
            {
                temp2->next=next1;
                temp1=next1;
                temp2=next2;
            }
        }
        traverseList(head1);
        return head;

     }
};

struct Node *deleteeAlternative(struct Node *head)
{
    if(head==NULL)
        return NULL;
    else
    {
        struct Node *temp=head,*temp2=head->next,*head2=head->next;

            while(temp->next!=NULL && temp2->next!=NULL)
            {
                temp->next=temp2->next;
                temp=temp2->next;
                temp2->next=temp->next;
                temp2=temp->next;
            }
            temp->next=NULL;
            free(head2);
            traverseList(head);
            return head;

    }
};


struct Node *alternateSplit(struct Node *head)
{
    if(head==NULL)
        return NULL;
    else
    {
        struct Node *temp=head,*temp2=head->next,*head2=head->next;

            while(temp->next!=NULL && temp2->next!=NULL)
            {
                temp->next=temp2->next;
                temp=temp2->next;
                temp2->next=temp->next;
                temp2=temp->next;
            }
            temp->next=head2;
            traverseList(head);
            //traverseList(head2);
            return head;

    }
};


struct Node *evenoddPosition(struct Node *head)
{
    if(head==NULL)
        return NULL;

    else
    {
        struct Node*temp=head,*temp2=head->next,*head2=head->next;
        while(temp2!=NULL && temp2->next!=NULL)
        {
            temp->next=temp2->next;
            temp=temp2->next;
            if(temp->next!=NULL)
            {
                temp2->next=temp->next;
                temp2=temp->next;
            }
            else
                temp2->next=NULL;
        }
        temp->next=head2;
        traverseList(head);
        return head;
    }

};


struct Node *add1(struct Node *head)
{
    if(head==NULL)
        return NULL;
    else
    {
        //printf("hy");
        head=reverse(head);
       // traverseList(head);
        struct Node *temp=head;

        int sum=0,rem=0,carry=0;
        struct Node *head2=NULL,*temp2=NULL;
        head2=(struct Node *)malloc(sizeof(struct Node));

        if(head2==NULL)
            return NULL;
        else
        {
            //printf("why");
            sum=temp->data+1;
            if(sum>=10)
            {
                rem=sum%10;
                carry=sum/10;
                head2->data=rem;
                head2->next=NULL;
                temp2=head2;
                temp=temp->next;
            }
            else
            {
                head2->data=sum;
                head2->next=NULL;
                temp2=head2;
                temp=temp->next;
            }
        }

        while(temp!=NULL)
        {
            struct Node*newNode=NULL;
            newNode=(struct Node*)malloc(sizeof(struct Node));
            if(newNode==NULL)
                return NULL;
            else
            {
                sum=temp->data+carry;
                if(sum >=10)
                {
                    rem=sum%10;
                    carry=sum/10;
                    newNode->data=rem;
                    newNode->next=NULL;
                    temp2->next=newNode;
                    temp2=newNode;
                    temp=temp->next;
                }
                else
                {
                    newNode->data=sum;
                    newNode->next=NULL;
                    temp2->next=newNode;
                    temp2=newNode;
                    temp=temp->next;
                    carry=0;

                }
            }
        }
        if(carry>0)
        {
            struct Node*newNode=NULL;
            newNode=(struct Node*)malloc(sizeof(struct Node));
            if(newNode==NULL)
                return NULL;
            else
            {
                newNode->data=carry;
                newNode->next=NULL;
                temp2->next=newNode;
                temp2=newNode;
                carry=0;
          //  traverseList(head2);
          //  head2=reverse(head2);
           //traverseList(head2);
            }
        }

            traverseList(head2);
            head2=reverse(head2);
            traverseList(head2);
            return head;

    }

};


      void tripletList(int n)
{
    struct Node*head1=NULL,*head2=NULL,*head3=NULL;
    int n1,n2,n3;
    printf("enter no. of nodes in first list..\n");
    scanf("%d",&n1);
    head1=createList(n1);
    printf("enter no. of nodes in second list..\n");
    scanf("%d",&n2);
    head2=createList(n2);
    printf("enter no. of nodes in third list..\n");
    scanf("%d",&n3);
    head3=createList(n3);

    traverseList(head1);
    traverseList(head2);
    traverseList(head3);
    printf("\n%d\n",n);
    if(head1==NULL && head2==NULL &&head3==NULL)
        printf("empty list");

      else
      {
          struct Node*temp1=head1,*temp2=head2,*temp3=head3;
          int sum=0;
          while(temp1!=NULL)
          {
              while(temp2!=NULL)
              {
                  while(temp3!=NULL)
                  {
                      sum=temp1->data+temp2->data+temp3->data;
                      if(sum==n)
                      {
                          printf("%d %d %d",temp1->data,temp2->data,temp3->data);
                          return;
                      }
                      else
                      {
                        temp3=temp3->next;

                        if(temp3==NULL)
                            {
                              temp3=head3;
                              temp2=temp2->next;

                                if(temp2==NULL)
                                    {
                                      temp2=head2;
                                      temp1=temp1->next;

                                    if(temp1==NULL)
                                        {
                                          temp2=NULL;
                                          temp3=NULL;
                                          break;
                                        }

                                     }

                              }

                        }


                  }

              }// while (temp2)


          }//while(temp1)
      }

}

struct Node *deleteLastOccur(struct Node*head,int k)
{
    if(head==NULL)
        return NULL;

   else if (head->next==NULL)
    {
        if(head->data==k)
        {
            free(head);
            return NULL;
        }
        else
            return head;
    }

    else
    {
        struct Node *temp=head,*prev=head,*key=NULL,*next=NULL;

        while(temp->next!=NULL)
        {
            if(temp->next->data==k)
            {
                key=temp->next;
                prev=temp;
                temp=temp->next;
            }
            else
                temp=temp->next;
        }
        next=key->next;
        free(key);
        prev->next=next;
        traverseList(head);
    }



};

void decimalEquivalent(struct Node *head)
{
    if(head==NULL)
        printf("empty list");
    else
    {
        int count=1,i=1,pow=1,sum=0;
        head=reverse(head);
        struct Node *temp=head;
        while(temp!=NULL)
        {
            if(temp->data==0)
            {
                temp=temp->next;
                count++;
            }
            else
            {
                while(i<count)
                {
                    pow=pow*2;
                    i++;
                }
                sum=sum+pow;
                pow=1;
                i=1;
                count++;
                temp=temp->next;
            }
        }
        printf("%d",sum);
    }
}

struct Node *partioning(struct Node *head,int x)
{
    if(head==NULL)
        return NULL;
    else
    {
        struct Node *temp=head,*temp1=NULL,*temp2=NULL,*temp3=NULL,*head1=NULL,*head2=NULL,*head3=NULL;
        while(temp!=NULL)
        {
            if(temp->data<x)
            {
                temp1=temp;
                head1=temp;
                break;
            }
            else
                temp=temp->next;
        }
        temp=head;
         while(temp!=NULL)
        {
            if(temp->data==x)
            {
                temp2=temp;
                head2=temp;
                break;
            }
            else
                temp=temp->next;
        }
        temp=head;
         while(temp!=NULL)
        {
            if(temp->data>x)
            {
                temp3=temp;
                head3=temp;
                break;
            }
            else
                temp=temp->next;
        }
        temp=head;

        while(temp!=NULL)
        {
            if(temp->data<x)
            {
                if(temp==head1)
                    temp=temp->next;
                else
                {
                    temp1->next=temp;
                    temp1=temp;
                    temp=temp->next;
                   // temp1->next=NULL;
                }
            }
          else if(temp->data==x)
            {
                if(temp==head2)
                    temp=temp->next;
                else
                {
                    temp2->next=temp;
                    temp2=temp;
                    temp=temp->next;
                    //temp2->next=NULL;
                }
            }
            else
            {
                if(temp==head3)
                    temp=temp->next;
                else
                {
                    temp3->next=temp;
                    temp3=temp;
                    temp=temp->next;
                    //temp3->next=NULL;
                }
            }
        }
        temp1->next=NULL;
        temp2->next=NULL;
        temp3->next=NULL;
        traverseList(head1);
        traverseList(head2);
        traverseList(head3);
        head=head1;
        temp1->next=head2;
        temp2->next=head3;
        traverseList(head);
        return head;
    }

};

struct Node*moveAllOcccur(struct Node *head,int k)
{
    if(head==NULL)
        return NULL;

     else
    {
        struct Node *temp=head,*temp1=NULL,*temp2=NULL,*head1=NULL,*head2=NULL;
        while(temp!=NULL)
        {
            if(temp->data!=k)
            {
                temp1=temp;
                head1=temp;
                break;
            }
            else
                temp=temp->next;
        }
        temp=head;
         while(temp!=NULL)
        {
            if(temp->data==k)
            {
                temp2=temp;
                head2=temp;
                break;
            }
            else
                temp=temp->next;
        }
        temp=head;
    while(temp!=NULL)
    {
        if(temp->data!=k)
        {
            if(temp==head1)
                temp=temp->next;
            else
            {
                temp1->next=temp;
                temp1=temp;
                temp=temp->next;
            }
        }

        else
        {
            if(temp==head2)
                temp=temp->next;
            else
            {
                temp2->next=temp;
                temp2=temp;
                temp=temp->next;
            }
        }
    }
    head=head1;
    temp1->next=NULL;
    temp2->next=NULL;
    traverseList(head1);
    traverseList(head2);
    temp1->next=head2;
    traverseList(head);
    return head;

  }
};

struct Node *nNode(struct Node *head,int value,int i)
{
    //printf("hello");
    if(i==value)
        return head;
    else
    {
        head=head->next;
        i=i+1;
        struct Node*ans=nNode(head,value,i);
        return ans;
    }
};

int noOfTimes(struct Node *head,int k,int count)
{
    if(head==NULL)
        return count;

    else if(head->data==k)
    {
        count++;
        head=head->next;
        int ans=noOfTimes(head,k,count);
        return ans;
    }
    else
    {
        head=head->next;
        int ans=noOfTimes(head,k,count);
        return ans;
    }
}

bool identicalList(struct Node* head1,struct Node *head2)
{
    //traverseList(head1);
   // traverseList(head2);
    if(head1==NULL && head2==NULL)
        return true;

    else if(head1==NULL && head2!=NULL)
        return false;

    else if(head1!=NULL && head2==NULL)
        return false;

    else if(head1->data==head2->data)
    {
        head1=head1->next;
        head2=head2->next;
        bool ans=identicalList(head1,head2);
        return ans;
    }

    else
        return false;

}

struct Node *deleteAlternate(struct Node *head)
{
    if(head==NULL)
        return NULL;
    else if(head->next==NULL)
        return head;
    else
    {
        struct Node*prev=head,*temp=head->next;
        head=temp->next;
        free(temp);
        struct Node *ans=deleteAlternate(head);
        prev->next=ans;
        return prev;
    }
};

struct Node *removeDuplicates(struct Node*head)
{
    struct Node *temp=NULL;
    if(head==NULL)
        return NULL;
    else if(head->next!=NULL && head->next->data ==head->data)
    {
        temp=head;
        head=head->next;
        free(temp);
        struct Node *ans=removeDuplicates(head);
        return ans;
    }
    else
    {
        struct Node* prev=head;
        head=head->next;
        struct Node *ans=removeDuplicates(head);
        prev->next=ans;
        return prev;
    }
};

struct Node *unionList(struct Node *head1,struct Node *head2)
{
    //traverseList(head1);
   // traverseList(head2);
    if(head1==NULL && head2==NULL)
        return NULL;

         else if(head1==NULL)
    {
         struct Node *head=NULL;
        head=(struct Node *)malloc(sizeof(struct Node ));
        if(head==NULL)
            return NULL;
        else
        {
            head->data=head2->data;
            head->next=NULL;
            head2=head2->next;
            struct Node *temp=unionList(head1,head2);
            head->next=temp;
            return head;
        }
    }
    else if(head2==NULL)
    {
         struct Node *head=NULL;
        head=(struct Node *)malloc(sizeof(struct Node ));
        if(head==NULL)
            return NULL;
        else
        {
            head->data=head1->data;
            head->next=NULL;
            head1=head1->next;
            struct Node *temp=unionList(head1,head2);
            head->next=temp;
            return head;
        }
    }


    else if(head1->data < head2->data)
    {
        struct Node *head=NULL;
        head=(struct Node *)malloc(sizeof(struct Node));
        if(head==NULL)
            return NULL;
        else
       {
        head->next=NULL;
        head->data=head1->data;
        head1=head1->next;
        struct Node *temp=unionList(head1,head2);
        head->next=temp;
        return head;
       }

    }
    else if(head1->data > head2->data)
    {
         struct Node *head=NULL;
        head=(struct Node *)malloc(sizeof(struct Node));
        if(head==NULL)
            return NULL;
        else
       {
        head->next=NULL;
        head->data=head2->data;
        head2=head2->next;
        struct Node *temp=unionList(head1,head2);
        head->next=temp;
        return head;
       }
    }

    else
    {
        struct Node *head=NULL;
        head=(struct Node *)malloc(sizeof(struct Node ));
        if(head==NULL)
            return NULL;
        else
        {
            head->data=head1->data;
            head->next=NULL;
            head1=head1->next;
            head2=head2->next;
            struct Node *temp=unionList(head1,head2);
            head->next=temp;
            return head;
        }
    }

};

struct Node *intersection(struct Node *head1,struct Node *head2)
{
    if(head1==NULL || head2==NULL)
        return NULL;

    else if(head1->data==head2->data)
    {
        struct Node*head=NULL;
        head=(struct Node *)malloc(sizeof(struct Node));
        if(head==NULL)
            return NULL;
        else
        {
            head->data=head1->data;
            head->next=NULL;
            head1=head1->next;
            head2=head2->next;
            struct Node *temp=intersection(head1,head2);
            head->next=temp;
            return head;
        }
    }

    else if(head1->data<head2->data)
    {
        head1=head1->next;
        struct Node*temp=intersection(head1,head2);
        return temp;
    }
    else
    {
        head2=head2->next;
        struct Node*temp=intersection(head1,head2);
        return temp;
    }
};


