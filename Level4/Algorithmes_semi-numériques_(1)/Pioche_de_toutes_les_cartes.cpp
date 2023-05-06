#include <iostream>
using namespace std;
int n=1;
void factorielle(int k)
{
   if(k==0)
      {
         cout<<n;
         return;
      }
   n=n*k;
   factorielle(k-1);
}
int main()
{
   int c;
   cin>>c;
   if(c==0)
      {
      cout<<0;
      return 0;
      }
   factorielle(c);
   
}
