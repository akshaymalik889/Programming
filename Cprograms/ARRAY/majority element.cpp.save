#include<stdio.h>
#include<conio.h>
#include<map>
using namespace std;
int main()
{
    int arr[]={3,3,4,2,4,4,2,4,4};
    int sizearr=sizeof(arr)/sizeof(arr[0]);
    int val,maxno=INT_MIN,s=sizearr/2,ans,i;
    map<int,int>m;

    for(i=0;i<sizearr;i++){
      if(m.find(arr[i])==m.end())
     {
        m.insert({arr[i],1});
     }
    else
    {
        val=m[arr[i]];
        printf("val=%d",val);
        val++;
        m.insert({arr[i],val});
    }
 }
 printf("\n\n");
    for(auto i=m.begin();i!=m.end();i++)
    {
        printf("first=%d sec=%d",i->first,i->second);
        if(i->second>maxno)
        {
            maxno=i->second;
            ans=i->first;
        }
    }
    if(ans>s)
        printf("majority element");
    else
        printf("not majority element");
}
