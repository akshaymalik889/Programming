#include<stdio.h>
#include<conio.h>
#include<limits.h>
#include<stdbool.h>
struct Node{
    int data;
    struct Node*left;
    struct Node *right;
};
struct Node*newNode(int);
void inorder(struct Node*);
int sumOfNodes(struct Node*,int);
int largestNode(struct Node*,int);
void leafNodes(struct Node*);
void nonleafNodes(struct Node *);
int sumLeafNodes(struct Node *,int);
int sumNonLeafNodes(struct Node*,int);
void sumRootToLeaf(struct Node *,int);
int rangeSum(struct Node *,int,int,int);
bool searchNode(struct Node*,int);
void printLevels(struct Node *,int);
void LevelsLeafNodes(struct Node*,int);
int depth(struct Node *,int);
void maxDepth(struct Node *,int,int,int);
bool uniValue(struct Node *root,int);
int binary(int);

void main()
{
    int ch,d=1,dept=1,n=0;
    char c;
    int sum=0,ans,val,start,end,search,levels=0;
    bool check;
    struct Node *root=NULL;
    do
    {
        printf("1.create\n2.traverse(INORDER)\n3.sum of all NODES\n4.largest Node\n5.All leaf Nodes\n6.All non leaf nodes\n");
        printf("7.sum Leaf Nodes\n8.sum Non-Leaf Nodes\n9.sum Root to leaf\n10.Range Sum\n11.Search Node\n");
        printf("12.levels of all nodes\n13.levels leaf Nodes\n14.depth\n15.max depth\n16.check uni Tree\n17.binary sum\n");
        printf("enter your choice:\n");
        scanf("%d",&ch);

     switch(ch)
     {
         case 1:root=newNode(10);
                root->left=newNode(3);
                root->right=newNode(7);
                root->left->left=newNode(1);
                root->left->right=newNode(2);
               root->right->left=newNode(3);
               root->right->right=newNode(4);
               root->left->left->left=newNode(4);
               root->right->right->right=newNode(9);
                break;

         case 2:inorder(root);
                break;

         case 3:ans=sumOfNodes(root,sum);
                printf("sum=%d\n",ans);
                    break;

         case 4:val=INT_MIN;
                ans=largestNode(root,val);
                printf("largest value=%d",ans);
                        break;

         case 5: leafNodes(root);
                    break;

         case 6:nonleafNodes(root);
                    break;

         case 7:ans=sumLeafNodes(root,sum);
                printf("sum=%d ",ans);
                break;

         case 8:ans=sumNonLeafNodes(root,sum);
                printf("sum=%d",ans);
                break;

         case 9: sumRootToLeaf(root,sum);
                    break;

         case 10:printf("enter start point of range:\n");
                 scanf("%d",&start);
                 printf("enter end point of range:\n");
                 scanf("%d",&end);
                 ans=rangeSum(root,sum,start,end);
                 printf("sum=%d",ans);
                 break;

          case 11:printf("enter value to search\n");
                    scanf("%d",&search);
                   check=searchNode(root,search);
                   if(check==true)
                    printf("element found\n");
                   else
                    printf("element not found");
                   break;

           case 12:printLevels(root,levels);
                    break;

           case 13:LevelsLeafNodes(root,levels);
                    break;

            case 14:ans=depth(root,d);
                    printf("depth=%d",ans);
                    break;

            case 15:ans=depth(root,d);
                    maxDepth(root,dept,n,ans);
                        break;

            case 16:
                if(root!=NULL)
                check=uniValue(root,root->data);
                    if(check==true)
                        printf("uni value tree");
                    else
                        printf("not uni value tree");
                    break;

             case 17: ans=binary(101);
                        printf("ans=%d",ans);
                        break;


         default: printf("wrong choice...\n");

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


int sumOfNodes(struct Node *root,int sum)
{
    if(root==NULL)
        return 0;
    else if(root->left==NULL && root->right==NULL)
    {
        sum=sum+root->data;
        return sum;
    }
    else
    {
        sum=root->data+sum;
        int l=sumOfNodes(root->left,sum);
        int r=sumOfNodes(root->right,l);
        return (r);
    }
}

int largestNode(struct Node *root,int val)
{
    if(root==NULL)
        return 0;
    else if(root->left==NULL && root->right==NULL)
        {
        if(root->data>val)
            val=root->data;
        return val;
        }
    else
        {
        if(root->data>val)
            val=root->data;
        int l=largestNode(root->left,val);
        int r=largestNode(root->right,l);
        return (r);
        }
}

void leafNodes(struct Node *root)
{
    if(root==NULL)
        return;
    else if(root->left==NULL && root->right==NULL)
        printf("%d ",root->data);
    else
    {
        leafNodes(root->left);
        leafNodes(root->right);
    }
}

void nonleafNodes(struct Node *root)
{
    if(root==NULL)
        return;
    else if(root->left==NULL && root->right==NULL)
        return;
    else
        printf("%d ",root->data);
    nonleafNodes(root->left);
    nonleafNodes(root->right);
}

int sumLeafNodes(struct Node *root,int sum)
{
    if(root==NULL)
        return 0;
    else if(root->left==NULL && root->right==NULL)
    {
        sum=sum+root->data;
        return sum;
    }
    else
    {
        int l=sumLeafNodes(root->left,sum);
        int r=sumLeafNodes(root->right,l);
        return (r);
    }
}
int sumNonLeafNodes(struct Node *root,int sum)
{
    if(root==NULL)
        return 0;
    else if(root->left==NULL && root->right==NULL)
    {
        return sum;
    }
    else
    {
        sum=sum+root->data;
        int l=sumNonLeafNodes(root->left,sum);
        int r=sumNonLeafNodes(root->right,l);
        return (r);
    }
}

void sumRootToLeaf(struct Node *root,int sum)
{
    if(root==NULL)
        return ;
    else if(root->left==NULL && root->right==NULL)
    {
        sum=sum+root->data;
        printf("%d ",sum);
    }
    else
    {
        sum=sum+root->data;
        sumRootToLeaf(root->left,sum);
        sumRootToLeaf(root->right,sum);
    }
}

int rangeSum(struct Node *root,int sum,int start,int end)
{
    if(root==NULL)
        return 0;
    else if(root->left==NULL && root->right==NULL)
    {
        if(root->data>=start && root->data<=end)
            sum=sum+root->data;
            return sum;
    }
    else
    {
        if(root->data>=start && root->data<=end)
            sum=sum+root->data;

        int l=rangeSum(root->left,sum,start,end);
        int r=rangeSum(root->right,l,start,end);
        return (r);
    }
}

bool searchNode(struct Node *root,int search)
{
    if(root==NULL)
        return false;
    else if(root->left==NULL && root->right==NULL)
    {
        if(root->data==search)
            return true;
        else
            return false;
    }
    else
    {
        if(root->data==search)
            return true;
     //   else
           // return false;

        bool l=searchNode(root->left,search);
        bool r=searchNode(root->right,search);
        if(l==true || r==true)
            return true;
        else
            return false;
    }
}

void printLevels(struct Node *root,int level)
{
    if(root==NULL)
        return ;
    else if(root->left==NULL && root->right==NULL)
    {

        printf("%d =%d\n",root->data,level);
    }
    else
    {
        printf("%d =%d\n",root->data,level);
        printLevels(root->left,level+1);
        printLevels(root->right,level+1);
    }
}

void LevelsLeafNodes(struct Node *root,int level)
{
    if(root==NULL)
        return ;
    else if(root->left==NULL && root->right==NULL)
    {

        printf("%d =%d\n",root->data,level);
    }
    else
    {
        LevelsLeafNodes(root->left,level+1);
        LevelsLeafNodes(root->right,level+1);
    }
}

int depth(struct Node *root,int d)
{
    if(root==NULL)
        return 0;
    else if(root->left==NULL && root->right==NULL)
    {
        return d;
    }
    else
    {
        d=d+1;
        int l=depth(root->left,d);
        int r=depth(root->right,d);
        if(l>r)
            return l;
            else
            return r;
    }
}

void maxDepth(struct Node *root,int dept,int n,int ans)
{
    if(root==NULL)
        return;
    else if(root->left==NULL && root->right==NULL)
    {
        n=n*10+root->data;
        int x=1;
       // printf("\n%d\n",n);
        //printf("%d\n%d",root,root->data);
        if(ans==dept)
            printf("\n max depth=%d and no. is=%d\n",dept,n);
    }
    else
    {
        dept=dept+1;
        n=n*10+root->data;
        maxDepth(root->left,dept,n,ans);
        maxDepth(root->right,dept,n,ans);
    }
}

bool uniValue(struct Node*root,int data)
{
    if(root==NULL)
        return true;

    else if(root->left==NULL && root->right==NULL)
    {
        if(root->data==data)
            return true;
        else
            return false;
    }
    else
    {
        if(root->data!=data)
            return false;

        bool l=uniValue(root->left,data);
        bool r=uniValue(root->right,data);
        if(l==true && r==true)
            return true;
        else
            return false;
    }

}
int binary(int num)
{
    int i,rem,pow=1,count=0,sum=0;
    while(num!=0)
    {
        //count++;
        rem=num%10;
        num=num/10;
        if(rem==0)
        {
            count++;
        }
        else
        {
            count++;
            for(i=1;i<count;i++)
            {
                pow=pow*2;
            }
            sum=sum+pow;
            pow=1;
           // count++;
        }
     }
    return sum;
}
