#include <iostream>
#include <cmath>
using namespace std;
int main()
{
   int base,nb;
   cin>>base>>nb;
   int s=0;
   for(int i=nb;i>0;i--)
   {
      int n;
      cin>>n;
      s=s+pow(base,i-1)*n;
      }cout<<s;}
