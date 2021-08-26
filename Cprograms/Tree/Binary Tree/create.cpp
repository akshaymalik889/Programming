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

//int sum=0;
int val=INT_MIN;
struct Node*newNode(int);
int inorder(struct Node*);
void levelorder(struct Node*);
void linebyline(struct Node*);
void reverseOrder(struct Node*);
void iterativePreorder(struct Node*);
void spiral(struct Node *);
void twoLevel(struct Node *);
void boundaryTraversal(struct Node* root);
void left(struct Node *);
void right(struct Node *);
void boundary(struct Node *);
void printAllPaths(struct Node *,std::vector<int>&v,int);
bool iterativePerfect(struct Node*);
bool fun(struct Node *,std::set<int>&s);
bool completeIterative(struct Node*);
std::string size2OrMore(struct Node*,std::set<std::string>&s,bool *);
//bool rToleaf(struct Node*,int arr[],std::vector<int>&v,int);
void fullNodes(struct Node*root);
void nodesAtLevels(struct Node*,int,int,int);
void kDistance(struct Node*,int,int);
void printCorner(struct Node*);
bool hasPath(struct Node*,vector<int>&v,int);
void printLeafNodes(struct Node*);
void vertical(struct Node*);
void printKnodes(struct Node*,int);
void finalVertical(struct Node*,int,map<int,vector<int>>&m);
void leftView(struct Node*,int ,int*);
void rightView(struct Node*,int ,int*);
void topView(struct Node*,int,int*,int);
void Kdistanceleaf(struct Node*,int,vector<int>&v,int);
void RtoleafRelativePOS(struct Node*,int,vector<int>&v,vector<int>&vh,int,int);
void printrelativePOS(vector<int>&v,vector<int>&vh,int);


int main()
{
    int i=0;
    std::vector<int>v;
    vector<int>vh;
    map<int,vector<int>>m;
    struct Node *root=NULL;
    int n,level=1,d=0,hd=0,minHD=INT_MAX;
    int *l,*mn=&val;
    int val=-2;
    char ch;
    int arr[]={1,2,4};
    bool ans;
    //bool *flag;
    //*flag=false;
    std::set<int>s;
    std::set<std::string>st;
    do
    {
        printf("1.create\n2.INORDER Traverse\n3.level order\n4.line by line\n5.reverse order\n6.iterative preorder\n");
        printf("7.spiral\n8.two level spiral\n9.boundary traversal\n10.print all paths\n11.iterative perfect\n12.duplicates\n");
        printf("13.completeIterative\n14.size 2 or More\n15.root to leaf with given seq\n16.full Nodes\n");
        printf("17.Nodes b/w 2 levels\n18.k Distance\n19.leftmost and right most\n20.ques 21\n21.ques 29\n22.vertical\n");
        printf("23.ques 28 knodes(iterative)\n24.vertical order\n25.nleft view\n26.right view\n27.top view\n");
        printf("28.ques 33 ktoleafNOdes\n29.ques 23Relative Position\n");
        printf("enter choice:\n");
        scanf("%d",&n);
    switch(n)
    {


    case 1: root=newNode(20);
            root->left=newNode(10);
            root->right=newNode(30);
            root->left->left=newNode(5);
            root->left->right=newNode(15);
            root->right->left=newNode(25);
            root->right->right=newNode(40);
            root->left->right->left=newNode(12);
            //root->right->right->right=newNode(9);
            break;

   case 2: val=inorder(root);
            printf("\nsum=%d",val);
            break;

   case 3: levelorder(root) ;
            break;

   case 4: linebyline(root);
            break;

   case 5:reverseOrder(root);
            break;

   case 6:iterativePreorder(root);
            break;

   case 7: spiral(root);
                break;

   case 8: twoLevel(root);
                    break;

   case 9: boundaryTraversal(root);
                        break;

   case 10:printAllPaths(root,v,i);
                            break;

    case 11: ans=iterativePerfect(root);
                        if(ans==true)
                            printf("perfect Tree");
                      else
                            printf("Not perfect Tree");
                      break;

     case 12: ans=fun(root,s);
                if(ans==true)
                            printf("D Tree");
                      else
                            printf("Not D Tree");
                      break;

     case 13: ans=completeIterative(root);
                    if(ans==true)
                            printf("Complete Tree");
                      else
                            printf("Not Complete Tree");
                      break;

//     case 14: size2OrMore(root,st,flag);
        //        if(*flag==true)
          //           printf("true");
         //            else
            //            printf("false");
            //    break;

      //  case 15: ans=rToleaf(root,arr,v,i);
        //            if(ans==true)
          //              printf("found");
            //        else
             //           printf("Not found");
               //     break;

        case 16: fullNodes(root);
                        break;

        case 17: nodesAtLevels(root,2,4,level);
                            break;

        case 18: kDistance(root,2,d);
                    break;


        case 19:printCorner(root);
                break;

        case 20:hasPath(root,v,1);
                if(v.size()==0)
                    printf("no path");
                else
                {
                    for(i=0;i<v.size();i++)
                        printf("%d ",v[i]);
                }
               break;

        case 21: printLeafNodes(root);
                break;

        case 22:vertical(root);
                    break;

        case 23:printKnodes(root,3);
                        break;

        case 24:finalVertical(root,i,m);
                            break;

        case 25:leftView(root,level,l);
                break;

        case 26:rightView(root,level,l);
                break;

        case 27: topView(root,hd,mn,level);
                        break;

        case 28:Kdistanceleaf(root,2,v,i);
                            break;

        case 29:RtoleafRelativePOS(root,hd,v,vh,minHD,i);
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

void levelorder(struct Node * root)
{

    if(root==NULL)
        return;
    std::queue<struct Node*> q;
    q.push(root);
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
void linebyline(struct Node * root)
{

    if(root==NULL)
        return;
    std::queue<struct Node*>q;
    q.push(root);
    q.push(NULL);
    while(q.empty()==false)
    {
        struct Node* temp=q.front();
        if(temp==NULL)
        {


            printf("\n");
            q.pop();
            struct Node*temp2=q.front();
            if(temp2==NULL)
            {
                break;
            }
            else
            q.push(NULL);

        }
        else
        {
            printf("%d",temp->data);
            q.pop();

        if(temp->left!=NULL)
            q.push(temp->left);
        if(temp->right!=NULL)
            q.push(temp->right);
        }

    }
}

void reverseOrder(struct Node*root)
{
    if(root==NULL)
        return;
    std::queue<struct Node*>q;
    std::stack<struct Node *>s;
    q.push(root);
    while(q.empty()==false)
    {
        struct Node*temp=q.front();
        s.push(temp);
        q.pop();
        if(temp->right!=NULL)
            q.push(temp->right);
        if(temp->left!=NULL)
            q.push(temp->left);
    }

    while(s.empty()==false)
    {
        printf("%d ",s.top()->data);
        s.pop();
    }
}

void iterativePreorder(struct Node*root)
{
    if(root==NULL)
        return;
    std::stack<struct Node*>s;
    s.push(root);
    while(s.empty()==false)
    {
        struct Node*temp=s.top();
        printf("%d",temp->data);
        s.pop();
        if(temp->right!=NULL)
            s.push(temp->right);
        if(temp->left!=NULL)
            s.push(temp->left);
    }
}

bool fun(struct Node *root, std::set<int> &s)
{
 if(root==NULL)
    return false;
 auto pos = s.find(root->data);

 //found
 if(pos!= s.end())
 {
  return true;
 }
 else
 {
  s.insert(root->data);
  return fun(root->left,s) || fun(root->right,s);
 }
}
void spiral(struct Node*root)
{
    int count=1;
    if(root==NULL)
        return;
    std::queue<struct Node*>q;
    std::stack<struct Node *>s;
    q.push(root);
    q.push(NULL);
    while(q.empty()==false)
    {
        struct Node*temp=q.front();
        q.pop();
        if(count%2==0)
        {
            if(temp!=NULL)
                s.push(temp);
            else
            {
                while(s.empty()==false)
                {
                    printf("%d ",s.top()->data);
                    s.pop();
                }
            }
        }
        else if(count%2!=0 && temp!=NULL)
        {
            printf("%d ",temp->data);
        }
        if(temp==NULL)
        {
            count++;
            q.push(NULL);
            struct Node*temp2=q.front();
            if(temp2==NULL)
                break;

        }
        if(temp!=NULL && temp->left!=NULL)
            q.push(temp->left);
        if(temp!=NULL && temp->right!=NULL)
            q.push(temp->right);

    }
}

void twoLevel(struct Node*root)
{
    int count=1;
    if(root==NULL)
        return;
    std::queue<struct Node*>q;
    std::stack<struct Node*>s;
    q.push(root);
    q.push(NULL);
    while(q.empty()==false)
    {
        struct Node*temp=q.front();
        q.pop();
        if(count>2)
        {
            if(temp!=NULL)
                s.push(temp);
            else
            {
                while(s.empty()==false)
                {
                    printf("%d ",s.top()->data);
                    s.pop();
                }
            }
        }
        else if(count<=2 && temp!=NULL)
        {
            printf("%d ",temp->data);
        }
        if(temp==NULL)
        {
            if(count==4)
                count=0;
            count++;

            q.push(NULL);
            printf("\n");
            struct Node*temp2=q.front();
            if(temp2==NULL)
                break;

        }
        if(temp!=NULL && temp->left!=NULL)
            q.push(temp->left);
        if(temp!=NULL && temp->right!=NULL)
            q.push(temp->right);

    }
}

void boundaryTraversal(struct Node* root)
{
    printf("%d",root->data);
    left(root->left);
    boundary(root);
    right(root->right);
}

void left(struct Node*root)
{
    if((root==NULL) || (root->left==NULL && root->right==NULL))
        return;

    else if(root->left)
        {
            printf("%d",root->data);
            left(root->left);
        }
    else
        {
            printf("%d",root->data);
            left(root->right);
        }
}
void right(struct Node*root)
{
    if((root==NULL) || (root->left==NULL && root->right==NULL))
        return;

    else if(root->right)
        {
            right(root->right);
            printf("%d",root->data);
        }
    else
        {
            right(root->left);
            printf("%d",root->data);
        }
}
void boundary(struct Node *root)
{
    if(root==NULL)
        return;
    else if(root->left==NULL && root->right==NULL)
    {
        printf("%d",root->data);
        return;
    }
    else
    {
        boundary(root->left);
        boundary(root->right);
        return;
    }
}

void printAllPaths(struct Node *root,std::vector<int>&v,int i)
{
    if(root==NULL)
        return;
    else if(root->left==NULL && root->right==NULL)
    {
        v[i]=root->data;
        for(i=0;i<=v.size();i++)
        {
            printf("%d ",v[i]);
        }
    }
    else
    {
        v[i]=root->data;
        i++;
        printAllPaths(root->left,v,i);
        printAllPaths(root->right,v,i);
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
bool completeIterative(struct Node*root)
{
    if(root==NULL)
    return false;
    std::queue<struct Node*>q;
    q.push(root);
    while(q.empty()==false)
    {
        struct Node*temp=q.front();
        q.pop();
        if(temp->left==NULL && temp->right!=NULL)
            return false;
            if(temp!=NULL && temp->left)
                q.push(temp->left);
            if(temp!=NULL && temp->right)
                q.push(temp->right);
    }
    return true;
}

std::string size2OrMore(struct Node*root,std::set<std::string>&s,bool *flag)
{
    if(root==NULL)
    return "$";
    else
    {
       //  std::string stri = to_string(root->data);
        int k = root->data;
        std::stringstream sstream;
        sstream<<k;
        std::string s1;
         sstream>>s1;         // The integer
        //std::string str;          // The string
   // ostringstream temp;  // 'temp' as in temporary
  //  temp << x;
  //  str = temp.str();
        std::string l=size2OrMore(root->left,s,flag);
       std::string r=size2OrMore(root->right,s,flag);
        std::string ss=s1.append(l).append(r);
        if(ss.length()>3)
        {
            if(s.find(ss)==s.end())
            {
                s.insert(ss);
                return ss;
            }
        }
        else
        {
            *flag=true;
        return ss;
        }
    }

}

/*bool rToleaf(struct Node*root,int arr[],std::vector<int>&v,int i)
{
    if(root==NULL)
       return true;
    else if(root->left==NULL && root->right==NULL)
    {
        v[i]=root->data;
        int l=math.min(v.length(),arr.length());
        for(int j=0;j<l;j++)
        {
            if(arr[j]!=v[j])
                return false;
        }
        return true;
    }
    else
    {
        v[i]=root->data;
        i++;
        return (rToleaf(root->left,arr,v,i) || rToleaf(root->right,arr,v,i));
    }
}
*/
void fullNodes(struct Node * root)
{

    if(root==NULL)
        return;

    else if(root->left!=NULL && root->right!=NULL)
        {   printf("%d ",root->data);
            return;
        }
    else
        {
            fullNodes(root->left);
            fullNodes(root->right);
            return;
        }

}

void nodesAtLevels(struct Node*root,int low,int high,int level)
{
    if(root==NULL)
        return;
    else if(root->left==NULL && root->right==NULL)
    {
        if(level>=low && level<=high)
            printf("%d ",root->data);
        return;
    }
    else
    {
        if(level>=low && level<=high)
            printf("%d ",root->data);
        nodesAtLevels(root->left,low,high,level+1);
        nodesAtLevels(root->right,low,high,level+1);
        return;
    }
}
void kDistance(struct Node* root,int k,int d)
{
    if(root==NULL)
        return;
    else if(root->left==NULL && root->right==NULL)
    {
        if(k==d)
            printf("%d ",root->data);
        return;
    }
    else
    {
        if(k==d)
            printf("%d ",root->data);
        kDistance(root->left,k,d+1);
        kDistance(root->right,k,d+1);
        return;
    }
}
void printCorner(struct Node *root)
{
    if(root == NULL)
        return;
    std::queue<struct Node*> q;
    q.push(root);

    while(q.empty()==false)
    {
        int n = q.size();

        for(int i =0;i<n;i++)
        {
           struct Node *temp = q.front();
            q.pop();

            if(i==0 || i==n-1)
               printf("%d",temp->data);

            if(temp->left)
                q.push(temp->left);
            if(temp->right)
                q.push(temp->right);
        }
    }
}

bool hasPath(struct Node *root, vector<int>&v, int x)
{
    if (root==NULL)
        return false;


    v.push_back(root->data);


    if (root->data == x)
        return true;


    if (hasPath(root->left, v, x) ||
        hasPath(root->right, v, x))
        return true;


    v.pop_back();
    return false;
}

void printLeafNodes(struct Node *root)
{
    if (root==NULL)
        return;

    if (root->left==NULL && root->right==NULL)
    {
        printf("%d ",root->data);
        return;
    }


    if (root->left)
       printLeafNodes(root->left);
    if (root->right)
       printLeafNodes(root->right);
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
void printminmax(struct Node*root,int hd,int i)
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

void printKnodes(struct Node*root,int k)
{
    int countt=1;
    if(root==NULL)
        return;
    queue<struct Node*>q;
    q.push(root);
    q.push(NULL);
    while(q.empty()==false)
    {
        struct Node*temp=q.front();
        q.pop();
        if(temp==NULL)
        {
            countt++;
            q.push(NULL);

        }
        else
        {
            if(countt==k)
                printf("%d ",temp->data);

             if(temp->left)
                    q.push(temp->left);
             if(temp->right)
                q.push(temp->right);
        }

    }
        return;
}

void finalVertical(struct Node*root,int l,map<int,vector<int>>&m)
{
    if(root==NULL)
        return;
    if(m.find(l)==m.end())
    {
        vector<int>v;
        v.push_back(root->data);
        m.insert({l,v});
    }
    else
    {
        vector<int>v;
        v=m.find(l)->second ;
        //v=m.find(l);
    v.push_back(root->data);
        m.insert({l,v});
    }

    finalVertical(root->left,l-1,m);
    finalVertical(root->right,l+1,m);
    return;
}

void leftView(struct Node*root,int level,int*i)
{
    if(root==NULL)
        return;
    if(level==*i)
    {
        printf("%d",root->data);
        *i++;
    }
    leftView(root->left,level+1,i);
    leftView(root->right,level+1,i);
    return;
}

void rightView(struct Node*root,int level,int*i)
{
    if(root==NULL)
        return;
    if(level==*i)
    {
        printf("%d",root->data);
        *i++;
    }
    rightView(root->right,level+1,i);
    rightView(root->left,level+1,i);
    return;
}

void topView(struct Node*root,int hd,int *mn,int level)
{
    if(root==NULL)
        return;
    topView(root->left,hd-1,mn,level+1);
    if(hd==*mn)
    {
        printf("%d",root->data);
        *mn++;
    }
    topView(root->right,hd+1,mn,level+1);
    return;

}

void Kdistanceleaf(struct Node*root,int k,vector<int>&v,int i)
{
    if(root==NULL)
        return;
    else if(root->left==NULL && root->right==NULL)
    {
        v[i]=root->data;
        int d=v.size()-1-k;
        printf("%d ",v[d]);

    }
    else
    {
        v[i]=root->data;
        i++;
        Kdistanceleaf(root->left,k,v,i);
        Kdistanceleaf(root->right,k,v,i);
        return;
    }
}

void RtoleafRelativePOS(struct Node* root,int hd,vector<int>&v,vector<int>&vh,int minHD,int i)
{
    if(root==NULL)
        return;
    else if(root->left==NULL && root->right==NULL)
    {
         if(hd<minHD)
    {
        minHD=hd;
    }

        vh[i]=hd;
        v[i]=root->data;
        i++;
        printrelativePOS(v,vh,minHD);
        return;
    }
    if(hd<minHD)
    {
        minHD=hd;
    }
    vh[i]=hd;
    v[i]=root->data;
    i++;
    RtoleafRelativePOS(root->left,hd-1,v,vh,minHD,i);
    RtoleafRelativePOS(root->right,hd+1,v,vh,minHD,i);
    return;
}
void printrelativePOS(vector<int>&v,vector<int>&vh,int minHD)
{
    for(int i=0;i<v.size();i++)
    {
        int val=v[i];
        int hd=vh[i];
        int u=abs(hd-minHD);
        for(int j=1;j<=u;j++)
            printf("_");
        printf("%d",val);
        printf("\n");
    }
    return;
}
