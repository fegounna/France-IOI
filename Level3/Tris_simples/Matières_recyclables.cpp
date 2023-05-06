#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
   int nb;
   cin>>nb;
   vector <string> vv;
   for(int loop=0;loop<nb;loop++)
   {
      string k;
      cin>>k;
      vv.push_back(k);
   }
   sort(vv.begin(),vv.begin()+nb);
   for(int loop=0;loop<nb;loop++)
   {
      cout<<vv[loop]<<endl;
   }
}
