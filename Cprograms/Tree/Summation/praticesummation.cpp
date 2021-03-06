#include<stdio.h>
#include<conio.h>
#include<limits.h>
#include <queue>
#include<stack>
#include<vector>
#include <iostream>
#include<stdbool.h>
#include<set>
#include<string.h>
#include<math.h>
#include <sstream>
#include<map>
using namespace std;

struct Node{
    int data;
    struct Node*left;
    struct Node *right;
};
int val=INT_MIN;
struct Node*newNode(int);
int inorder(struct Node*);
int sumALLnodes(struct Node*);
void sumparentNodes(struct Node*,int,int*);
int sumleftleaves(struct Node*,bool);
int sumrighttleaves(struct Node*,bool);
int perfectBinarytree(int);
void diagonalSUM(struct Node*,int,vector<int>&v);
void findPair(struct Node*,struct Node*);
bool searchval(struct Node*,int);
void largestSum(struct Node*,int*,int*,int,int);
void ksumpaths(struct Node*,int ,vector<int>&v,int);
void check(vector<int>&v,int);
int height(struct Node*,int);
void sumheights(struct Node*,int *);
void diffOddEven(struct Node*root,int,int*,int*);

int main()
{
     int n,val,*sum,level=0,*maxsum,*l,i=0,x=1,*odd,*even;
     char ch;
    struct Node *root=NULL;
    vector<int>v;

    do
    {
        printf("1.create\n2.INORDER Traverse\n3.QUES1(SUM ALL NODES)\n4.QUES2(sum parent with x NODE\n5.QUES3sum left leaves\n");
        printf("6.QUES4sum right leaves\n7.QUES5 perfect binary sum\n8.QUES6 DIAGONAL SUM\n9.QUES7 find pair\n");
        printf("10.QUES8 Largest sum path\n11.ques15 K sum paths\n12.ques16 sum of heights\n13.ques20 diff odd and even level\n");
        printf("");

        printf("enter choice:\n");
        scanf("%d",&n);
    switch(n)
    {


    case 1: root=newNode(1);
            root->left=newNode(2);
            root->right=newNode(3);
            root->left->left=newNode(4);
            root->left->right=newNode(5);
            root->right->left=newNode(6);
            root->right->right=newNode(7);
            //root->left->right->left=newNode(12);
            //root->right->right->right=newNode(9);
            printf("created successfully\n");
            break;

   case 2: val=inorder(root);
            printf("\nsum=%d",val);
            break;

   case 3:val=sumALLnodes(root);
                printf("sum=%d",val);
                break;

   case 4:sumparentNodes(root,2,sum);
            printf("%d",sum);

   case 5: val=sumleftleaves(root,false);
               printf("sum of left leaves=%d",val);
               break;

   case 6:val=sumrighttleaves(root,false);
            printf("sum of right leaves=%d",val);
               break;

   case 7: val=perfectBinarytree(3);
            printf("binary sum=%d",val);
            break;

    case 8:diagonalSUM(root,level,v);
            printf("%d",v.size());
           // printf("%d ",v[1]);
                break;

     case 9:findPair(root,root);
            break;

     case 10:largestSum(root,maxsum,l,level,val);
            printf("max sum=%d",maxsum);
                break;

     case 11:ksumpaths(root,5,v,i);
            break;

     case 12:sumheights(root,sum);
                printf("%d",sum);
                break;

     case 13:diffOddEven(root,x,odd,even);
            val=*odd-*even;
            printf("difference=%d",val);
            break;


    default: printf("\nyou entered wrong choice...\n");
    }

    fflush(stdin);
    printf("\ndo you want to continue again 'Y' or 'N' \n");
    scanf("%c",&ch);

  }while(ch=='y' || ch=='Y');
  return 0;
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
        return 0;
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
int sumALLnodes(struct Node*root)
{
    if(root==NULL)
        return 0;
    else if(root->left==NULL && root->right==NULL)
    {
        return root->data;
    }
    else
    {
        int l=sumALLnodes(root->left);
        int r=sumALLnodes(root->right);
        return l+r+root->data;
    }
}

void sumparentNodes(struct Node*root,int x,int *sum)
{
    if(root==NULL)
        return;
    else
    {
        if((root->left!=NULL &&root->left->data==x) || (root->right!=NULL && root->right->data==x))
            *sum=*sum+root->data;
        sumparentNodes(root->left,x,sum);
        sumparentNodes(root->right,x,sum);
        return;
    }
}

int sumleftleaves(struct Node*root,bool flag)
{
    if(root==NULL)
        return 0;
    else if(root->left==NULL && root->right==NULL)
    {
        if(flag==true)
            return root->data;
        else
            return 0;
    }
    else
    {
        int l=sumleftleaves(root->left,true);
        int r=sumleftleaves(root->right,false);
        return l+r;
    }
}
int sumrighttleaves(struct Node*root,bool flag)
{
    if(root==NULL)
        return 0;
    else if(root->left==NULL && root->right==NULL)
    {
        if(flag==true)
            return root->data;
        else
            return 0;
    }
    else
    {
        int l=sumrighttleaves(root->left,false);
        int r=sumrighttleaves(root->right,true);
        return l+r;
    }
}

int perfectBinarytree(int l)
{
    int leaf=1;
    int sum=0;
    for(int i=1;i<=l-1;i++)
    {
        leaf=2*leaf;
    }
    for(int j=1;j<=leaf;j++)
    {
        sum=sum+j;
    }
    return sum;
}

void diagonalSUM(struct Node*root,int level,vector<int>&v)
{
    if(root==NULL)
        return;
    else
    {
        v[level]=root->data;
        diagonalSUM(root->left,level+1,v);
        diagonalSUM(root->right,level,v);
        return;
    }
}

void findPair(struct Node*root,struct Node*head)
{
    if(root==NULL)
        return;
    else if(root->left==NULL && root->right==NULL)
    {
        int val=head->data-root->data;
        bool ans=searchval(head,val);
        if(ans==true)
            printf("%d %d",root->data,val);
        else
            printf("no pair\n");
        return;
    }
    else
    {
        int val=head->data-root->data;
        bool ans=searchval(head,val);
        if(ans==true)
            printf("%d %d",root->data,val);

       findPair(root->left,head);
       findPair(root->right,head);
       return;
    }
}
bool searchval(struct Node*root,int val)
{
    if(root==NULL)
       return false;
    else if(root->left==NULL && root->right==NULL)
    {
            if(root->data==val)
            return true;
            else
                return false;
    }
    else
    {
        if(root->data==val)
            return true;
        bool l=searchval(root->left,val);
        bool r=searchval(root->right,val);
        if(l==true || r==true)
            return true;
        else
            return false;
    }
}

void largestSum(struct Node*root,int*maxsum,int *l,int level,int sum)
{
    if(root==NULL)
        return;
    else if(root->left==NULL && root->right==NULL)
    {
        sum=sum+root->data;
        if(*l<level)
        {
            *maxsum==sum;
            *l=level;
        }
        if(*l==level)
        {
            if(*maxsum<sum)
                *maxsum=sum;
        }
        return;
    }
    else
    {
        sum=sum+root->data;
        largestSum(root->left,maxsum,l,level+1,sum);
        largestSum(root->right,maxsum,l,level+1,sum);
        return;
    }
}

void ksumpaths(struct Node*root,int k,vector<int>&v,int i)
{
    if(root==NULL)
        return;
    else if(root->left==NULL && root->right==NULL)
    {
        v[i]=root->data;
        check(v,k);
        return;
    }
    else
    {
        v[i]=root->data;
        ksumpaths(root->left,k,v,i++);
        ksumpaths(root->right,k,v,i++);
        return;
    }
}
void check(vector<int>&v,int k)
{
    for(int i=0;i<v.size();i++)
    {
        int sum=0;
        for(int j=i;j<v.size();j++)
        {
            sum=sum+v[j];
            if(sum==k)
            {
                for(int k=i;k<=j;k++)
                {
                    printf("%d ",v[k]);
                }
            }
        }
    }
}

int height(struct Node*root,int h)
{
    if(root==NULL)
        return 0;
    else if(root->left==NULL && root->right==NULL)
        return h;
    else
    {
        int l=height(root->left,h+1);
        int r=height(root->right,h+1);
        return max(l,r);
    }
}

void sumheights(struct Node*root,int *sum )
{
    if(root==NULL)
    {
        return;
    }
    else
    {
        int ans=height(root,1);
        *sum=*sum+ans;
        sumheights(root->left,sum);
        sumheights(root->right,sum);
        return;
    }
}

void diffOddEven(struct Node*root,int l,int*odd,int*even)
{
    if(root==NULL)
        return;
    else
    {
        if(l%2!=0)
            *odd=*odd+root->data;
        else
            *even=*even+root->data;
        diffOddEven(root->left,l+1,odd,even);
        diffOddEven(root->right,l+1,odd,even);
        return;
    }
}
