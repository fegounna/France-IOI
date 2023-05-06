#include <iostream>
#include <math.h>
#include <string>
using namespace std;
int n,m;
string tab;
bool w[26]={false};
void fonc(int k,string t)
{
   if(k==m)
   {
        cout<<t<<endl;
        k=0;
   }
   else
      for(int i=0;i<n;++i)
      {
          if(!w[i])
          {
              w[i]=true;
              fonc(k+1,t+tab[i]);
              w[i]=false;
          }
      }
}
int main()
{
    cin>>n>>tab>>m;
    int s=1;
    for(int i=1; i<m; i++)
        s=s*(n-i);
    cout<<s*n<<endl;
    fonc(0,"");
}
