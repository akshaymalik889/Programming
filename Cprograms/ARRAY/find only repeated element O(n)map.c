#include<stdio.h>
#include<conio.h>
#include<map.h>
using namespace std;
void main()
{
    int arr[]={1,5,1,2,3,4}
    map<int,int>&m;
    if(m.find(arr[i])==m.end())
    {
        m.insert(arr[i],1);
    }
    else
    {
        int val=m.get(arr[i]);
        val++;
        m.insert(arr[i],val);
    }
    for(auto i=m.begin();i!=m.end();i++)
    {

        printf("%d %d",i->first,i->second);
        printf("\n");
    }

}
