#include <iostream>
#include <math.h>
#include <string>
using namespace std;
int n,m;
string tab;
void fonc(int k,string t)
{
   if(k==m)
   {
        cout<<t<<endl;
        k=0;
   }
   else
      for(int i=0;i<n;++i)
         fonc(k+1,t+tab[i]);
}
int main()
{
    cin>>n>>tab>>m;
    cout<<pow(n,m-1)*n<<endl;
    fonc(0,"");
}
