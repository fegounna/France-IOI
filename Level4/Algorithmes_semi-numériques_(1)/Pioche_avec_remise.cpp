#include <iostream>
#include <math.h>
using namespace std;
int main()
{
   int n,k;
   cin>>n>>k;
   int s=1;
   for(int i=0;i<k;i++)
      s*=n;
   cout<<s;
}
