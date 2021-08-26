#include<stdio.h>
#include<conio.h>
#include<limits.h>
#include<stdbool.h>
#include<math.h>
#include<windef.h>

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
int heightBalanced(struct Node*,int,bool*);
void findCousins(struct Node*,int);
void rootToLeaf(struct Node *);
void checkSeq(struct Node*,int arr[]);
void odd(struct Node*,int);
void sibling(struct Node*);
void diameter(struct Node*);
void vertical(struct Node*);

void main()
{
     int ch;
     char c;
     bool ans,ans3;
      struct Node *root=NULL;
     int ans1,ans2,sum=0,level=1,i=0,h=0,hd=0;
     int *old=0;
     bool *result,*ed=false;
     struct Node*temp=root;
     int* parenta;
    int* parentb;
    int arr[]={1,2,4};
    bool leavesLevel(struct Node *,int,int*);
    do
    {
        printf("1.create\n2.traverse(INORDER)\n3.QUES1(Child SUM)\n4.QUES2(SUM TREE)\n5.QUES3(Covered and Uncovered\n");
         printf("6.Total sum\n7.leftsum\n8.rightsum\n9.cousins\n10 check leaves level\n11.removing an edge\n12.check perfect\n");
         printf("13.check complete\n14.height Balanced Red black Tree\n15.find cousins\n16.root to leaf path");
         printf("17.check sequence\n18.odd level Nodes\n19.sibling\n20.diameter\n21.vertical\n");
         printf("enter your choice:\n");
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

        case 14: heightBalanced(root,h,&ans);
                if(ans==true)
                    printf("Height Balanced Tree");
                else
                    printf("NOT height balanced Tree");
                break;

        case 15:findCousins(root,2);
                    break;

        case 16:rootToLeaf(root);
                break;

        case 17:checkSeq(root,arr);
                break;

        case 18:odd(root,level);
                    break;

        case 19:sibling(root);
                break;


        case 20:diameter(root);
                    break;

        case 21: vertical(root);
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


int heightBalanced(struct Node*root,int h,bool*b)
{
    if(root==NULL)
        return 0;

    else if(root->left==NULL && root->right==NULL)
    {
        return h;
    }

    else
    {
        int l=heightBalanced(root->left,h+1,b);
        int r=heightBalanced(root->right,h+1,b);
        if(l-r<2)
            *b=true;
        else
            *b=false;
        return max(l,r)+1;
    }
}

int findCousinsCheck(struct Node *root,int val,int level,int  *parent)
 {
     if(root==NULL)
        return -1;
     else if(root->left==NULL && root->right==NULL)
     {
         if(root->data==val)
         {
             return level;
         }
         else
            return -1;
     }

     else
     {
         if(root->data==val)
         {
             return level;
         }
         else
         {
             *parent=root;
             int l=findCousinsCheck(root->left,val,level+1,parent);
             int r=findCousinsCheck(root->right,val,level+1,parent);

             if(l==-1)
                return r;
             else if(r==-1)
                return l;
             else
                return -1;
         }
     }

 }
 void findCousins(struct Node*root,int val)
 {
     int level=1;
     struct Node*parent=root;
     struct Node*temp=NULL;
     int ans1=findCousinsCheck(root,val,level,&parent);
     printCousins(root,ans1,&parent,level,temp);
 }
 void printCousins(struct Node*root,int ans,int *parent,int level,int*temp)
 {
     if(root==NULL)
        return;
     else if(root->left==NULL && root->right==NULL)
     {
         if(level==ans && parent!=temp)
         {
             printf("%d",root->data);
         }
         else
            temp=root;
         printCousins(root->left,ans,parent,level+1,temp);
         printCousins(root->right,ans,parent,level+1,temp);
     }
 }

void rootToLeaf(struct Node*root)
{
      int ans1;
    if(root==NULL)
        printf("empty ROOT");

    else
    {
        ans1=countNodes(root);
        int arr[ans1],i=0;
        finalPrint(root,arr,ans1,i);
    }
}
void finalPrint(struct Node*root,int arr[],int n,int i)
{
    if(root==NULL)
        return;
   else if(root->left==NULL && root->right==NULL)
   {
       arr[i]=root->data;
       for(int j=0;j<=i;j++)
        printf("%d ",arr[j]);
        printf("\n");
   }
   else
   {
       arr[i]=root->data;
       i++;
       finalPrint(root->left,arr,n,i);
       finalPrint(root->right,arr,n,i);
   }
}

void checkSeq(struct Node*root,int arr[])
{
    if(root==NULL)
        return;
    else
    {
        int n,i=0;
        n=countNodes(root);
        int arr2[n];
  bool ans=check(root,arr,n,i,arr2);
   if(ans==true)
        printf("yes");
   else
    printf("no");
    return;
    }
}

bool check(struct Node*root,int arr[],int n,int i,int arr2[])
{
    if(root==NULL)
    {
            return true;
    }
    else if(root->left==NULL && root->right==NULL)
    {
        arr2[i]=root->data;
        for(int j=0;j<n;j++)
        {
            if(arr2[j]!=arr[j])
                return false;
        }
        return true;
    }
    else
    {
        arr2[i]=root->data;
        bool l=check(root->left,arr,n,i++,arr2);
        bool r=check(root->right,arr,n,i++,arr2);
        if(l==true || r==true)
            return true;
        else
        return false;
    }
}

void odd(struct Node*root,int level)
{
    if(root==NULL)
        return;
    else if(root->left==NULL && root->right==NULL)
    {
        if(level%2!=0)
            printf("%d",root->data);
        return;
    }
    else
    {
        if(level%2!=0)
            printf("%d",root->data);
        odd(root->left,level+1);
        odd(root->right,level+1);
        return;
    }
}

void sibling(struct Node *root)
{
    if(root==NULL)
        returm;
    else if(root->left==NULL && root->right!=NULL)
        {
            printf("%d",root->right->data);
            sibling(root->right);
            return;
        }
    else if(root->left!=NULL && root->right==NULL)
        {
            printf("%d",root->left->data);
            sibling(root->left);
            return;
        }
     else
     {
         sibling(root->left);
         sibling(root->right);
     }
}
void diameter(struct Node* root)
{
    if (root == NULL)
        return;
    int ans = INT_MIN, lh = 0, rh = 0;
     int f = 0;
    struct Node* k;
     int height_of_tree = height(root, ans, k, lh, rh, f);
     int lPath[100], pathlen = 0;
      printPathsRecur(k->left, lPath, pathlen, lh, f);
    printf("%d ", k->data);
    int rPath[100];
    f = 1;
    printPathsRecur(k->right, rPath, pathlen, rh, f);
}
int height(struct Node* root, int& ans, struct Node*(&k), int& lh, int& rh,
                                                     int& f)
{
    if (root == NULL)
        return 0;

    int left_height = height(root->left, ans, k, lh, rh, f);

    int right_height = height(root->right, ans, k, lh, rh, f);

    if (ans < 1 + left_height + right_height)
        {
        ans = 1 + left_height + right_height;

        k = root;

        lh = left_height;
        rh = right_height;
        }

    return 1 + max(left_height, right_height);
}
void printPathsRecur(struct Node* root, int path[], int pathLen,
                                         int max, int& f)
{
    if (root == NULL)
        return;
    path[pathLen] = root->data;
    pathLen++;

    if (root->left == NULL && root->right == NULL) {

        if (pathLen == max && (f == 0 || f == 1)) {
            printArray(path, pathLen, f);
            f = 2;
        }
    }
    else
        {
        printPathsRecur(root->left, path, pathLen, max, f);
        printPathsRecur(root->right, path, pathLen, max, f);
        }
}
 void printArray(int ints[], int len, int f)
{
    int i;

    if (f == 0) {
        for (i = len - 1; i >= 0; i--) {
            printf("%d ", ints[i]);
        }
    }
    else if (f == 1) {
        for (i = 0; i < len; i++) {
            printf("%d ", ints[i]);
        }
    }
}
int vMin(struct Node *root,int hd=0)
{
    if(root==NULL)
        return hd;
    else if(root->left==NULL && root->right==NULL)
        return hd;
    else
    {
        int l=vMin(root->left,hd-1);
        return l;
    }
}
int vMax(struct Node*root,int hd=0)
{
    if(root==NULL)
        return hd;
     else if(root->left==NULL && root->right==NULL)
        return hd;
    else
    {
        int r=vMax(root->right,hd+1);
        return r;
    }
}
void printminmax(struct node*Root,int hd,int i)
{
    if(root==NULL)
        return;
    else if(root->left==NULL && root->right==NULL)
        return;
    else
    {
        if(hd==i)
            printf("%d",root->data);
        printminmax(root->left,hd-1,i);
        printminmax(root->right,hd+1,i);
        return;
    }
}
void vertical(struct Node*root)
{
    int hmin,hmax;
    int hd=0;
    int i=hmin;
    hmin=vMin(root,hd);
    hmax=vMax(root,hd);
    for(i=hmin;i<hmax;i++)
    {
        printminmax(root,hd,i);
    }
}
