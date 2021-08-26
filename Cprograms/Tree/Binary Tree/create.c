#include<stdio.h>
#include<conio.h>
#include<limits.h>
#include <queue>
struct Node{
    int data;
    struct Node*left;
    struct Node *right;
};
//int sum=0;
int val=INT_MIN;
struct Node*newNode(int);
int inorder(struct Node*);
void levelorder(struct Node*);

void main()
{
    struct Node *root=NULL;
    int n;
    char ch;
    do
    {
        printf("1.create\n2.INORDER Traverse\n");

        printf("enter choice:\n");
        scanf("%d",&n);
    switch(n)
    {


    case 1: root=newNode(1);
            root->left=newNode(2);
            root->right=newNode(7);
            root->left->left=newNode(4);
            root->left->right=newNode(5);
            root->right->left=newNode(6);
            root->right->right=newNode(3);
            break;

   case 2: val=inorder(root);xxxx
            printf("\nsum=%d",val);
            break;

   case 3: levelorder(root) ;

   default: printf("\nyou entered wrong choice...\n");

    }
    fflush(stdin);
    printf("\ndo you want to continue again 'Y' or 'N' \n");
    scanf("%c",&ch);

  }while(ch=='y' || ch=='Y');
}

struct Node *newNode(int data)
{
    struct Node *temp=NULL;
    temp=(struct Node *)malloc(sizeof(struct Node));
    temp->data=data;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
};

int inorder(struct Node*temp)

{
    if(temp==NULL)
        return;
    else
    {   if(val<temp->data)
        {
            val=temp->data;
        }
        //sum=sum+temp->data;

        inorder(temp->left);
        printf("%d ",temp->data);
        inorder(temp->right);
    }
    return val;
}

void levelorder(struct Node * root)
{

    if(root==NULL)
        return;
    queue<struct Node*>q
    q.push(root)
    while(q.empty()==false)
    {
        struct Node* temp=q.front();
        printf("%d",temp->data);
        q.pop();
        if(temp->left!=NULL)
            q.push(temp->left);
        if(temp->right!=NULL)
            q.push(temp->right);

    }
}
