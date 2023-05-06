#include <iostream>
using namespace std;
int main()
{
   int p;
   cin>>p;
   int c[p+1]={0};
   for(int h=1;h<=p;h++)
   {
      int y;
      cin>>y;
      c[h]=y;
   }
   int o;
   cin>>o;
   for(int g=1;g<=o;g++)
   {
      int j,i;
      cin>>j>>i;
      c[j]=c[j]+i;
   }
   for(int f=1;f<=p;f++)
      cout<<c[f]<<" ";
}
