#include <iostream>
#include <set>
using namespace std;
int main()
{
   set<pair<int,int>> vv;
   int x,y;
   int nb;
   cin>>nb;
   for(int i=0;i<nb;i++)
   {
      cin>>x>>y;
      vv.insert(make_pair(y,x));
   }
   set<pair<int,int>>::iterator it;
   for(it=vv.begin();it!=vv.end();it++)
      cout<<it->second<<" "<<it->first<<endl;
}
