#include<stdio.h>
#include<conio.h>
#include<limits.h>
#include<stdbool.h>

#include <iostream>
struct Node{
    int data;
    struct Node*left;
    struct Node *right;
};
struct Node*newNode(int);
void inorder(struct Node*);
bool childSum(struct Node *);
int sumtree(struct Node *,bool *);
void  coveredUncovered(struct Node*,int);
int totalSum(struct Node *,int);
int leftSum(struct Node *,int);
int rightSum(struct Node *,int);
int cousins(struct Node*,int,int *,struct Node*,int);
bool leavesLevel(struct Node*,int,int*);
int edge(struct Node*,int,int*);
int countNodes(struct Node *);
void perfect(struct Node*,bool,bool);
bool check2child(struct Node*);
bool complete(struct Node*,int,int);
bool iterativePerfect(struct Node*);


int main()
{
     int ch;
     char c;
     bool ans,ans3;

      struct Node *root=NULL;
     int ans1,ans2,sum=0,level=1,i=0;
     int *old=0;
     bool *result,*ed;
     struct Node*temp=root;
     int* parenta;
    int* parentb;
    bool leavesLevel(struct Node *,int,int*);

    do
    {
        printf("1.create\n2.traverse(INORDER)\n3.QUES1(Child SUM)\n4.QUES2(SUM TREE)\n5.QUES3(Covered and Uncovered\n");
         printf("6.Total sum\n7.leftsum\n8.rightsum\n9.cousins\n10 check leaves level\n11.removing an edge\n12.check perfect\n");
         printf("13.check complete\n14.iterative perfect\n15.duplicate values or not");
         printf("enter your choice:\n");
        scanf("%d",&ch);

     switch(ch)
     {
         case 1:root=newNode(1);
                root->left=newNode(2);
                root->right=newNode(3);
                root->left->left=newNode(4);
                root->left->right=newNode(5);
               //root->right->left=newNode(7);
               //root->right->right=newNode(4);
               printf("TREE created");
                break;

         case 2:inorder(root);
                break;

         case 3:ans=childSum(root);
                if(ans==true)
                    printf("true");
                else
                    printf("false");
                break;

          case 4:sumtree(root,&result);
                if(result==1)
                    printf("true");
                else
                    printf("false");
                break;

          case 5:   coveredUncovered(root,sum);
                      //printf("sum of covered nodes=%d",ans1);
                      break;


        case 6: ans1=totalSum(root,sum);
                    printf("sum of nodes =%d\n",ans1);
                    break;

       case 7:  ans2=leftSum(root->left,sum);
                    printf("sum of left uncovered nodes=%d",ans2);
                    break ;

        case 8: ans2=rightSum(root->right,sum);
                        printf("sum of right uncovered nodes=%d\n",ans2);
                        break;

        case 9: ans1=cousins(root,4,&parenta,temp,level);
                 ans2=cousins(root,7,&parentb,temp,level);
                 if(ans1==ans2 && parenta!=parentb)
                    printf("cousins");
                 else
                    printf("not cousins");
                 break;

        case 10: ans=leavesLevel(root,level,&old);
                 if(ans==true)
                    printf("leaves are at same level");
                    else
                    printf("leaves are not at same level ");
                    break;

         case 11: ans1=countNodes(root);
                    //printf("%d",ans1);
                        edge(root,ans1,&ed);
                        if(ed==true)
                            printf("true");
                        else
                            printf("false");
                        break;

         case 12: ans=leavesLevel(root,level,&old);
                  ans3=check2child(root);
                  perfect(root,ans,ans3);
                  break;

        case 13:ans1=countNodes(root);
                //printf("%d",ans1);
                ans=complete(root,i,ans1);
                if(ans==true)
                    printf("complete Tree");
                else
                    printf("Not complete tree");
                    break;

       case 14: ans=iterativePerfect(root);
                        if(ans==true)
                            printf("perfect Tree");
                      else
                            printf("Not perfect Tree");
                      break;

       case 15: ans=fun(root,s);
                if(ans==true)
                            printf("D Tree");
                      else
                            printf("Not D Tree");
                      break;


        default: printf("\nwrong choice...\n");

     }
     fflush(stdin);
      printf("\ndo you want to do again 'Y' or 'N'\n");
         scanf("%c",&c);

    }while(c=='y' || c=='Y');
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

void inorder(struct Node *root)
{
    if(root==NULL)
        return;
    inorder(root->left);
    printf("%d ",root->data);
    inorder(root->right);
}

bool childSum(struct Node *root)
{
    if(root==NULL)
        return true;

    else if(root->left==NULL && root->right== NULL)
    {
        return true;
    }
    else
    {
        int left=0,right=0;
        if(root->left!=NULL)
            left=root->left->data;
        if(root->right!=NULL)
            right=root->right->data;
        if(left+right!=root->data)
            return false;
        else
        {
                return childSum(root->left) && childSum(root->right);
        }
    }
}

int sumtree(struct Node * root,bool*ans)
{
    if(root==NULL)
        return 0;

    else if(root->left==NULL && root->right== NULL)
    {
        return root->data;
    }
    else
    {
        int l=sumtree(root->left,ans);
        int r=sumtree(root->right,ans);
        if(l+r==root->data)
            *ans=true;
        else
            *ans=false;
        return l+r+root->data;
    }
}
 void coveredUncovered(struct Node* root,int sum)
 {
     int t=totalSum(root,sum);
     int l=leftSum(root->left,sum);
     int r=rightSum(root->right,sum);
    int uc= l+r+root->data;
     printf("Uncovered Sum=%d\n",uc);
     int c=t-uc;
     printf("covered sum=%d\n",c);
     if(uc==c)
        printf("true");
     else
        printf("false");
 }

 int totalSum(struct Node*root,int sum)
{

    if(root==NULL)
        return sum;
    else if(root->left==NULL && root->right==NULL)
    {
        sum=sum+root->data;
        return sum;
    }
    else
    {
        sum=sum+root->data;
       int l= totalSum(root->left,sum);
        int r=totalSum(root->right,l);
        return r;

    }
}
 int leftSum(struct Node *root,int sum)
{
    if(root==NULL)
        return sum;
    else if(root->left==NULL && root->right==NULL)
    {
        sum=sum+root->data;
        return sum;
    }
    else
    {
        sum=sum+root->data;
        if(root->left!=NULL)
        {
            int l=leftSum(root->left,sum);
            return l;
        }
        else
        {
            int l=leftSum(root->right,sum);
            return l;
        }

    }
}
 int rightSum(struct Node *root,int sum)
{
    if(root==NULL)
        return sum;
    else if(root->left==NULL && root->right==NULL)
    {
        sum=sum+root->data;
        return sum;
    }
    else
    {
        sum=sum+root->data;
        if(root->right!=NULL)
        {
            int l=rightSum(root->right,sum);
            return l;
        }
        else
        {
            int l=rightSum(root->left,sum);
            return l;
        }

    }
}

int cousins(struct Node *root,int val,int  *parent,struct Node*temp,int level)
 {
     if(root==NULL)
        return -1;
     else if(root->left==NULL && root->right==NULL)
     {
         if(root->data==val)
         {
             *parent=temp;
             return level;
         }
         else
            return -1;
     }

     else
     {
         if(root->data==val)
         {
             *parent=temp;
             return level;
         }
         else
         {
             temp=root;
             int l=cousins(root->left,val,parent,temp,level+1);
             int r=cousins(root->right,val,parent,temp,level+1);

             if(l!=-1)
                return l;
             else if(r!=-1)
                return r;
             else
                return -1;
         }
     }

 }

 bool leavesLevel(struct Node* root,int level,int *old)
 {
     if(root==NULL)
        return true;
     else if(root->left==NULL && root->right==NULL)
     {
         if(*old==0)
         {
             *old=level;
             return true;
         }
         else
         {
             if(*old==level)
             return true;
             else
                return false;

         }

     }
     else
     {
         bool l=leavesLevel(root->left,level+1,old);
         bool r=leavesLevel(root->right,level+1,old);
         if(l==true && r==true)
            return true;
         else
            return false;
     }
 }

 int edge(struct Node*root,int t,int *ed)
 {
     if(root==NULL)
     return 0;

     else if(root->left==NULL && root->right==NULL)
     {
         return 1;
     }

     else
     {
       int l=edge(root->left,t,ed);
       int r=edge(root->right,t,ed);
       int size=l+r+1;
       if(t-size==size)
       {
           *ed=true;
           return size;
       }
       else
        return size;
     }

 }
 int countNodes(struct Node*root)
 {
     if(root==NULL)
        return 0;
     else if(root->left==NULL && root->right==NULL)
        return 1 ;
     else
     {
         int l=countNodes(root->left);
         int r=countNodes(root->right);
         return l+r+1;
     }
 }

void perfect(struct Node *root,bool ans1,bool ans3)
{
    if(ans1==true && ans3==true)
        printf("perfect Tree");
    else
        printf("not perfect Tree");
    return;
}

bool check2child(struct Node*root)
{
    if(root==NULL)
        return true;
    else if(root->left==NULL && root->right==NULL)
        return true;
    else if(root->left==NULL && root->right!=NULL)
        return false;
     else if(root->left!=NULL && root->right==NULL)
        return false;
     else
     {
         bool l=check2child(root->left);
         bool r=check2child(root->right);
         if(r==true && l==true)
            return true;
         else
            return false;
      }

}
 bool complete(struct Node*root,int i,int t)
 {
     if(root==NULL)
        return true;
     else if(i>=t)
        return false;
     else
     {
         int l=complete(root->left,(2*i)+1,t);
         int r=complete(root->right,(2*i)+2,t);
         if(l==true && r==true)
            return true;
         else
            return false;
     }
 }
 bool iterativePerfect(struct Node*root)
 {
     if(root==NULL)
        return false;
       std::queue<struct Node*>q;
       q.push(root);
       while(q.empty()==false)
     {
         struct Node* temp1=q.front();
         q.pop();
         if(temp1->left!=NULL && temp1->right==NULL)
            return false;
          if(temp1->left==NULL && temp1->right!=NULL)
            return false;
            if(temp1!=NULL && temp1->left)
                q.push(temp1->left);
            if(temp1!=NULL && temp1->right)
                q.push(temp1->right);
     }
     return true;
 }


