#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<stdbool.h>
struct Node{
int data;
struct Node *next
};

struct Node* createList(int);
void traverseList(struct Node*);
struct Node* reverse(struct Node*);
struct Node* mergeTwoSorted(struct Node*,struct Node *);
void reverseGivenSize(struct Node*head,int);
void reverseAlternateK(struct Node*head,int);
void deleteGivenConstraints(struct Node*,struct Node*);
struct Node* pairwiseSwap(struct Node*);
struct Node* absolute(struct Node*);
struct Node* clone(struct Node*);
struct Node *rotate(struct Node *,int);
struct Node* mergeINplace(struct Node*,struct Node*);
struct Node*mergeKsorted(int,int);
struct Node*reverseBYrec(struct Node*,struct Node*,struct Node*,struct Node*);
struct Node* addition(struct Node*,struct Node*);
//struct Node*subtraction(struct Node*,struct Node*);

struct Node *head=NULL;


void main()
{
    struct Node *temp=NULL;
    struct Node*temphead=NULL;
    int n,size1,size2,k;
    struct Node*head1=NULL,*head2=NULL,*head3=NULL;
    struct Node*prev=NULL,*next=NULL;

    int choice;
    char c;
     do
    {
        printf("1.create list\n2.traverse list\n3.Reverse\n4.merge 2 Sorted List\n5.reverse given size\n6.reverse alternate K\n");
        printf("7.delete Given Constraints\n8.pairwise SWAP\n9.absolute(ques62)\n10.clone\n11.rotate\n12.merge IN place\n");
        printf("13.merge K sorted\n14.reverse BY recursion\n15.addition\n16.subtraction\n");
         printf("enter choice:\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: printf("enter value of n..:\n");
                    scanf("%d",&n);
                    createList(n);
                    printf("LIST created\n");
                    break;

            case 2: traverseList(head);
                    break;

            case 3: temphead=reverse(head);
                    traverseList(temphead);
                    printf("\nlist reversed\n");
                    break;

            case 4: printf("enter size of first list");
                    scanf("%d",&size1);
                     printf("enter size of second list");
                    scanf("%d",&size2);
                    head1=createList(size1);
                    head2=createList(size2);
                    temp=mergeTwoSorted(head1,head2);
                    traverseList(temp);
                    break;

            case 5: printf("enter size to reversed\n");
                    scanf("%d",&k);
                    printf("enter size of list");
                    scanf("%d",&size1);
                    head1=createList(size1);
                    reverseGivenSize(head1,k);
                    break;


            case 6: printf("enter size to reversed\n");
                    scanf("%d",&k);
                    reverseAlternateK(head,k);
                    break;

            case 7: temp=head;
                    deleteGivenConstraints(head,temp);
                    break;

            case 8:
                    head1=pairwiseSwap(head);
                    traverseList(head1);
                        break;

            case 9: head1=absolute(head);
                    traverseList(head1);
                        break;

          //  case 10: clone(head);
              //          break;

            case 11: head=rotate(head,2);
                    break;

            case 12://printf("enter size of list");
                    //scanf("%d",&size1);
                   // head1=createList(size1);
                     //head2=createList(size1);
                    head1=mergeINplace(head1,head2);
                    //traverseList(head1);
                    break;

            case 13:printf("enter no. of linked lists:");
                    scanf("%d",&k);
                    printf("\nenter their size:");
                    scanf("%d",&size1);
                    head1=mergeKsorted(k,size1);
                    traverseList(head1);
                    break;

            case 14:temp=head;
                    prev=NULL;
                    next=head->next;
                    head=reverseBYrec(head,temp,prev,next);
                    printf("\nreversed\n");
                   //traverseList(head);
                    break;

            case 15: printf("enter size of first list");
                    scanf("%d",&size1);
                     printf("enter size of second list");
                    scanf("%d",&size2);
                    head1=createList(size1);
                    head2=createList(size2);
                    head3=addition(head1,head2);
                    head3=reverse(head3);
                    traverseList(head3);
                    break;

           /*case 16: printf("enter size of first list");
                    scanf("%d",&size1);
                     printf("enter size of second list");
                    scanf("%d",&size2);
                    head1=createList(size1);
                    head2=createList(size2);
                    head3=subtraction(head1,head2);
                    head3=reverse(head3);
                    traverseList(head3);
                    break;
*/
            default: printf("\nwrong choice..\n");
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

struct Node* reverse(struct Node* head)
{
    if(head==NULL)
        return NULL;
    else
    {
        struct Node* temp=head;
        struct Node*prev=NULL;
        struct Node*cur=head->next;

        while(cur!=NULL)
        {
            prev=temp;
            temp=cur;
            cur=cur->next;
            temp->next=prev;

        }
        head->next=NULL;
        head=temp;
        return head;

    }
}
struct Node*mergeTwoSorted(struct Node* head1,struct Node*head2)
{
    if((head1==NULL) && (head2==NULL))
        return NULL;

    else if(head1==NULL && head2!=NULL)
    {
        struct Node* temp=reverse(head2);
            return temp;
    }
     else if(head1!=NULL && head2==NULL)
    {
        struct Node* temp=reverse(head1);
            return temp;
    }
    else
    {
        struct Node*headfirst=reverse(head1);
        struct Node*headsecond=reverse(head2);

        struct Node*temp1=headfirst;
        struct Node*temp2=headsecond;
        struct Node*head3=NULL;
        struct Node*temp3=NULL;

        while(temp1!=NULL && temp2!=NULL)
        {

            struct Node* newNode=NULL;
            newNode=(struct Node*)malloc(sizeof(struct Node));

            if(temp1->data>temp2->data)
            {
                newNode->data=temp1->data;
                newNode->next=NULL;
                if(head3==NULL)
                {
                    head3=newNode;
                    temp3=head3;
                }
                else
                {
                    temp3->next=newNode;
                    temp3=newNode;
                }
                temp1=temp1->next;
            }
           else if(temp2->data>temp1->data)
            {
                newNode->data=temp2->data;
                newNode->next=NULL;
                if(head3==NULL)
                {
                    head3=newNode;
                    temp3=head3;
                }
                else
                {
                    temp3->next=newNode;
                    temp3=newNode;
                }
                temp2=temp2->next;
            }

        else
        {
                newNode->data=temp1->data;
                newNode->next=NULL;
                if(head3==NULL)
                {
                    head3=newNode;
                    temp3=head3;
                }
                else
                {
                    temp3->next=newNode;
                    temp3=newNode;
                }
                temp1=temp1->next;
                temp2=temp2->next;
        }
    }

        if(temp1==NULL)
        {
            while(temp2!=NULL)
            {
                struct Node*newNode=NULL;
                newNode=(struct Node*)malloc(sizeof(struct Node));

                newNode->data=temp2->data;
                newNode->next=NULL;
                temp3->next=newNode;
                temp3=newNode;

                temp2=temp2->next;
            }
        }
        else
        {
            while(temp1!=NULL)
            {
                struct Node*newNode=NULL;
                newNode=(struct Node*)malloc(sizeof(struct Node));

                newNode->data=temp1->data;
                newNode->next=NULL;
                temp3->next=newNode;
                temp3=newNode;

                temp1=temp1->next;
            }
        }
        return head3;
    }

};

void reverseGivenSize(struct Node* head,int k)
{
    if(head==NULL)
    {
        printf("empty list\n");
        return;
    }
    else
    {
        struct Node*temp=head,*next=head->next,*prev=NULL,*store=NULL;

        while(temp!=NULL)
        {
            store=temp;
            for(int i=1;i<k && next!=NULL;i++)
            {
                prev=temp;
                temp=next;
                next=next->next;
                temp->next=prev;
            }
            for(int i=1;i<=k && temp->next!=NULL;i++)
            {
                temp=temp->next;
            }
            store->next=temp;
            temp=next;
            next=next->next;
        }
        traverseList(head);
        return;
    }

}

void reverseAlternateK(struct Node*head,int k)
{
    if(head==NULL)
    {
        printf("empty list\n");
        return;
    }
    else
    {
        int flag=1;
        struct Node*temp=head,*next=head->next,*prev=NULL,*store=NULL;

        while(temp!=NULL && next!=NULL)
        {
            if(flag==1)
            {
                store=temp;
                for(int i=1;i<k;i++)
                {
                    prev=temp;
                    temp=next;
                    next=next->next;
                    temp->next=prev;
                }
                store->next=next;
                flag=0;

            }
            else
            {
                for(int i=1;i<=k && temp-1>next!=NULL;i++)
                {
                    temp=temp->next;
                }
                flag=1;
                if(temp->next!=NULL)
                {
                    next=temp->next;
                }
                else
                    break;
            }
            temp=temp->next;
        }
        traverseList(head);
        return;
    }

}

void deleteGivenConstraints(struct Node*head,struct Node*k)
{
    if(head==NULL)
    {
        printf("empty list\n");
        return;
    }
    else
    {
        //struct Node*next=NULL;
        if(head==k)
        {
            if(head->next==NULL)
            {
                printf("only one node\n");
                return;
            }
            else
            {
                head->data=head->next->data;
                k=head->next;
                head->next=head->next->next;
                free(k);
                return;
            }
        }
        else
        {
            struct Node*temp=head;
            while(temp->next!=NULL && temp->next!=k)
            {
                temp=temp->next;
            }
            temp->next=temp->next->next;
            free(k);
            return;
        }
    }
}

struct Node* pairwiseSwap(struct Node *head)
{
    if(head==NULL || head->next==NULL)
       return head;

    else
    {
        struct Node*temp=head->next;
        struct Node*prev=head;
        struct Node*next=temp->next;
        head=temp;

        while(next!=NULL && next->next!=NULL)
        {
            prev->next=next->next;
            temp->next=prev;

            prev=next;
            temp=prev->next;
            next=temp->next;
        }
        prev->next=next;
        temp->next=prev;

        return head;
    }
}

struct Node* absolute(struct Node*head)
{

    if(head==NULL || head->next==NULL)
    {
        return head;
    }
    else
    {
        struct Node*temp=head;
        struct Node*prev=NULL;
        struct Node*next=head->next;
        while(temp!=NULL)
        {
            if((temp->data<0) && (temp!=head))
            {
                prev->next=temp->next;
                temp->next=head;
                head=temp;
                temp=next;
                if(temp!=NULL)
                next=temp->next;
            }
            else
            {
                prev=temp;
                temp=next;
                next=next->next;
            }
        }
        return head;
    }
};

/*struct Node* clone(struct Node*head)
{
    if(head==NULL)
        return NULL;
    else
    {
        struct Node*temp=head;
        struct Node*newNode=NULL;
        struct Node*store=NULL;
        while(temp!=NULL)
        {
            newNode->data=temp->data;
            store=temp->next;
            temp->next=newNode;
            newNode->next=store;
            temp=store;
        }
        temp=head;

        while(temp!=NULL)
        {
            if(temp->!=NULL)
        }

    }
};
*/


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

struct Node* mergeINplace(struct Node*head1,struct Node*head2)
{
    struct Node*temp1=head1;
    struct Node*temp2=head2;
    struct Node*prev1=NULL,*next1=NULL,*next2=NULL;
    while(temp1!=NULL && temp2!=NULL)
          {
              next1=temp1->next;
              next2=temp2->next;
              if(temp1->data<temp2->data)
                {
                    prev1=temp1;
                    prev1->next=NULL;
                    temp1=next1;
                }
              else
              {
                  prev1->next=temp2;
                  prev1=temp2;
                  prev1->next=NULL;
                  prev1->next=temp1;
                  temp2=next2;
              }
          }
          if(temp2!=NULL)
          prev1->next=temp2;
          else if(temp1!=NULL)
          prev1->next=temp1;

          return head1;
}

struct Node*mergeKsorted(int k,int size1)
{
    int i=0;
    struct Node* arr[k-1];
    while(i<k)
    {
       arr[i]=createList(size1);
       i++;
    }
    for(i=1;i<k;i++)
    {
        struct Node*head1=arr[0];
        struct Node*head2=arr[i];
        if(head2==NULL)
           i++;
        else
        {
            struct Node*ans=mergeINplace(head1,head2);
            head1=ans;
            arr[0]=head1;
            i++;
        }
    }
    return arr[0];
};

struct Node*reverseBYrec(struct Node*head,struct Node*temp,struct Node*prev,struct Node*next)
{

        if(next!=NULL)
        {
            prev=temp;
            temp=next;
            next=next->next;
            temp->next=prev;
            struct Node*R=reverseBYrec(head,temp,prev,next);
            return R;
        }
        else
        {
            head->next=NULL;
            head=temp;
            return head;
        }


};

struct Node*addition(struct Node*headone,struct Node*headtwo)
 {
     if(headone==NULL && headtwo==NULL)
     {
         return NULL;
     }
     else if(headone!=NULL && headtwo==NULL)
        return headone;
     else if(headone==NULL && headtwo!=NULL)
        return headtwo;
     else
     {
         //traverseList(headone);
         //traverseList(headtwo);
         struct Node*head1=reverse(headone);
          struct Node*head2=reverse(headtwo);
          //traverseList(head1);
         //traverseList(head2);
         struct Node*head3=NULL,*temp3=NULL;
         struct Node*temp1=head1;
         struct Node*temp2=head2;
         struct Node*newNode=NULL;
         int prev=0,rem=0,sum=0;
         while(temp1!=NULL && temp2!=NULL)
         {
             newNode=(struct Node*)malloc(sizeof(struct Node));
              sum=temp1->data+temp2->data+prev;
             if(sum>=10)
             {
                 rem=sum%10;
                 prev=sum/10;
                 newNode->data=rem;
                 newNode->next=NULL;
             }
             else
             {
                 prev=0;
                 newNode->data=sum;
                 newNode->next=NULL;
             }
             if(head3==NULL)
             {
                 head3=newNode;
                 temp3=head3;
             }
             else
             {
                 temp3->next=newNode;
                 temp3=newNode;
             }
             temp1=temp1->next;
             temp2=temp2->next;
         }
         if(temp1==NULL)
         {
             while(temp2!=NULL)
             {
                 newNode=(struct Node*)malloc(sizeof(struct Node));
                 sum=temp2->data+prev;
                 if(sum>=10)
                 {
                     rem=sum%10;
                     prev=sum/10;
                     newNode->data=rem;
                     newNode->next=NULL;
                     temp3->next=newNode;
                     temp3=newNode;
                 }
                 else
                 {
                     prev=0;
                     newNode->data=sum;
                     newNode->next=NULL;
                     temp3->next=newNode;
                     temp3=newNode;
                 }
                 temp2=temp2->next;
             }
         }
         else
         {
             while(temp1!=NULL)
             {
                 newNode=(struct Node*)malloc(sizeof(struct Node));
                 sum=temp1->data+prev;
                 if(sum>=10)
                 {
                     rem=sum%10;
                     prev=sum/10;
                     newNode->data=rem;
                     newNode->next=NULL;
                     temp3->next=newNode;
                     temp3=newNode;
                 }
                 else
                 {
                     prev=0;
                     newNode->data=sum;
                     newNode->next=NULL;
                     temp3->next=newNode;
                     temp3=newNode;
                 }
                 temp1=temp1->next;
             }
         }
         if(prev>0)
         {
             newNode=(struct Node*)malloc(sizeof(struct Node));
             newNode->data=prev;
             newNode->next=NULL;
             temp3->next=newNode;
             temp3=newNode;
             prev=0;
         }
         return head3;

     }
 };

/* struct Node*subtraction(struct Node*headone,struct NodE*headtwo)
{

};
*/
