#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
   int nb;
   vector <int> vv;
   cin>>nb;
   for(int loop=0;loop<nb;loop++)
   {
      int k;
      cin>>k;
      vv.push_back(k);
   } 
   sort(vv.begin(),vv.begin()+nb);
   for(int loop=0;loop<nb;loop++)
   {
      cout<<vv[loop]<<" ";
   }
}
