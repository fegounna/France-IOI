#include <iostream>
#include <math.h>
using namespace std;
int main()
{
   int bd,bc,n;
   cin>>bd>>bc>>n;
      int s=0;
    
   for(int i=n-1;i>=0;i--)
   {
      int g;
      cin>>g;
      s=s+g*pow(bd,i);
   }
   if(s==0)
   {
       cout<<0;
       return 0;
   }
   int o=0;
   int tab[64];
   while(s>0)
   {
      tab[o]=s%bc;
      s=s/bc;
      o++;
   }
   for(int i=o-1;i>=0;i--)
        cout<<tab[i]<<' ';
}
