#include<stdio.h>
#include<conio.h>
#include<limits.h>
#include<stdbool.h>
#include <queue>
struct Node{
    int data;
    struct Node*left;
    struct Node *right;
};

struct Node*newNode(int);
void inorder(struct Node*);
bool childrenSum(struct Node*);
int cousins(struct Node*,int,int *,struct Node*,int);
bool leavesLevel(struct Node*,int,int*);
bool checkchildren(struct Node*);
void isperfect(bool,bool);
int totalNodes(struct Node*,int);
int leftUC(struct Node*,int);
int rightUC(struct Node*,int);
int coveredNodes(struct Node*,int);
bool isComplete(struct Node*,int,int);
int noOfNodes(struct Node*,int);

void main()
{
    struct Node*root=NULL;
    int ch;
    char c;
    bool ans,ans3;
    int level=1,ans1,ans2,sum=0,index=0,count=0;
    struct Node*temp=root;
    int *old=-1;
    int* parenta;
    int* parentb;

     do
    {
        printf("1.create\n2.traverse(INORDER)\n3.Children sum\n4.cousins\n5.check leaves level\n6.check two childrens\n7.ISperfect\n");
        printf("8.SUM NODES\n9.left UNCOVERED\n10.right UNCOVERED\n11.Covered nodes SUM\n12.Check Complete\n13.NO of Nodes\n");
         printf("\nenter your choice:\n");
        scanf("%d",&ch);

        switch(ch)
     {
         case 1:root=newNode(1);
                root->left=newNode(2);
                root->right=newNode(3);
                root->left->left=newNode(4);
                root->left->right=newNode(5);
               root->right->left=newNode(6);
               root->right->right=newNode(7);
               //root->left->right->left=newNode(5);
               //root->left->right->right=newNode(7);
               //root->right->right->left=newNode(20);
                break;

         case 2:inorder(root);
                break;

         case 3:ans=childrenSum(root);
                if(ans==true)
                    printf("true");
                else
                    printf("false");
                    break;


         case 4: ans1=cousins(root,3,&parenta,temp,level);
                 ans2=cousins(root,6,&parentb,temp,level);
                 if(ans1==ans2 && parenta!=parentb)
                    printf("cousins");
                 else
                    printf("not cousins");
                 break;

         case 5: ans=leavesLevel(root,level,&old);
                 if(ans==true)
                    printf("leaves are at same level");
                    else
                    printf("leaves are not at same level ");
                    break;

          case 6:ans=checkchildren(root);
                if(ans==true)
                    printf("2 children");
                    else
                    printf("not 2 children");
                    break;

          case 7:  ans=leavesLevel(root,level,&old);
                    ans3=checkchildren(root);
                    isperfect(ans,ans3);

            case 8:ans1=totalNodes(root,sum);
                    printf("sum of nodes =%d\n",ans1);
                    break;

            case 9:ans2=leftUC(root->left,sum);
                    printf("sum of left uncovered nodes=%d",ans2);
                    break ;

             case 10: ans2=rightUC(root->right,sum);
                        printf("sum of right uncovered nodes=%d",ans2);
                        break;

             case 11:ans1=coveredNodes(root,sum);
                      printf("sum of covered nodes=%d",ans1);
                      break;

             case 12:ans1=noOfNodes(root,count);
                      ans=isComplete(root,index,ans1);
                        if(ans==true)
                            printf("complete tree");
                        else
                            printf("NOT complete tree");
                        break;

              case 13:ans1=noOfNodes(root,count);
                        printf("no. of nodes=%d",ans1);


        default: printf("\nwrong choice...\n");

     }
     fflush(stdin);
      printf("\ndo you want to do again 'Y' or 'N'\n");
         scanf("%c",&c);

    }while(c=='y' || c=='Y');
}


struct Node *newNode(int data)
{
 struct Node*temp=NULL;
 temp=(struct Node*)malloc(sizeof(struct Node));
 temp->data=data;
 temp->left=NULL;
 temp->right=NULL;

return temp;
};

void inorder(struct Node* root)
{

    if(root==NULL)
        return;
    else
    {
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
}

bool childrenSum(struct Node*root)
{
    int x,y;
    if(root==NULL)
        return true;
    else if(root->left==NULL && root->right==NULL)
        return true;
    else
    {
        int x=0;
        if(root->left!=NULL)
            x=root->left->data;

        int y=0;
        if(root->right!=NULL)
            y=root->right->data;
        if(x+y!=root->data)
            return false;
        else
        {
            bool l=childrenSum(root->left);
            bool r=childrenSum(root->right);
            if(l==true && r==true)
                return true;
            else
                return false;
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
         if(*old==-1)
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

 bool checkchildren(struct Node *root)
 {
     if(root==NULL)
        return true;
     else if(root->left==NULL && root->right==NULL)
        return true;

       return(root->left!=NULL && root->right!=NULL && checkchildren(root->left) && checkchildren(root->right));
}

void isperfect(bool ans,bool ans3)
{
    if(ans==true && ans3==true)
        printf("perfect");
    else
        printf("not perfect");

}
int totalNodes(struct Node*root,int sum)
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
       int l= totalNodes(root->left,sum);
        int r=totalNodes(root->right,l);
        return r;

    }
}

int leftUC(struct Node *root,int sum)
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
            int l=leftUC(root->left,sum);
            return l;
        }
        else
        {
            int l=leftUC(root->right,sum);
            return l;
        }

    }
}
int rightUC(struct Node *root,int sum)
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
            int l=rightUC(root->right,sum);
            return l;
        }
        else
        {
            int l=rightUC(root->left,sum);
            return l;
        }

    }
}

int coveredNodes(struct Node*root,int sum)
{
    int total=totalNodes(root,sum);
    int ans1=leftUC(root->left,sum);
    int ans2=rightUC(root->right,sum);
    int covered=total-(ans1+ans2+root->data);
    return covered;
}

bool isComplete(struct Node* root,int index,int total)
{
    if(root==NULL)
       return true;
       else if(index >=total)
        return false;
    else
        return (isComplete(root->left,2*index+1,total) && isComplete(root->right,2*index+2,total));
}

noOfNodes(struct Node* root,int count)
{
    if(root==NULL)
        return count;
    else if(root->left==NULL && root->right==NULL)
    {
        count++;
        return count;
    }
    else
    {
        count++;
        int l=noOfNodes(root->left,count);
        int r=noOfNodes(root->right,l);
            return r;

    }
}
