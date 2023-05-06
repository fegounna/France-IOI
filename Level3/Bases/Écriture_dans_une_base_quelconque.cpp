#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
vector<int> vv;
int main()
{
   int base,nb;
   int s=0;
   cin>>nb>>base;
   if(nb==0)
   {
      cout<<1<<endl<<0;
      return 0;}
   while(nb>0)
   {
      vv.push_back(nb%base);
      nb=nb/base;
      }
      cout<<vv.size()<<endl;
      for(int i=vv.size();i>0;i--)
        cout<<vv[i-1]<<' ';
}
