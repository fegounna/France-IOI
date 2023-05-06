#include <iostream>
#include <vector>
using namespace std;
bool search(int x,vector <int> l){
   for(int it= 0;it < (l.size());it++)
      if(x==l[it])
         return true;
   return false;
}
int main (){
   int N;
   cin>>N;
   int tab[N];
   for (int i=0;i<N;i++)
      cin>>tab[i];
   int R;
   cin>>R;
   for (int i=0;i<R;i++){
      int a,b;
      cin>>a>>b;
      vector <int> l;
      int k=a;
      while (k!=0){
         l.push_back(k);
         k=tab[k-1];
      }
      k=b;
      while (k!=0){
         if(search(k,l)){
            cout<<k<<endl;
            break;
         }
         k=tab[k-1];
      }
      if (k==0)
         cout<<0<<endl;
   }
}
