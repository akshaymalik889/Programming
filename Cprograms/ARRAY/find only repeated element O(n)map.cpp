#include<stdio.h>
#include<conio.h>
#include<map>
using namespace std;
int  main()
{
    int i;
    int arr[]={1,5,1,2,3,4};
    int sizearr=sizeof(arr)/sizeof(arr[0]);
    map<int,int>m;
    for(i=0;i<sizearr;i++)
    {
        if(m.find(arr[i])==m.end())
        {
            m.insert({arr[i],1});
        }
        else
        {
            int val=m.[arr[i]];
            val++;
            m.insert({arr[i],val});
        }
    }
    for(auto i=m.begin();i!=m.end();i++)
    {

        printf("%d %d",i->first,i->second);
        printf("\n");
    }

}
