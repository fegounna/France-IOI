#include <iostream>
#include<string>
using namespace std;
string s;
int n;
int t;
int main()
{
    cin>>t;
    getline(cin,s);
    while(t--)
    {
      getline(cin,s);
      bool check=true;
      if(!((s[0]>='a' && s[0]<='z') || (s[0]>='A' && s[0]<='Z') || s[0]=='_'))
         check=false;
      for(int i=1;i<s.length();++i)
      {
         if(!((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') || s[i]=='_' || (s[i]>='0' && s[i]<='9')))
         {
            check=false;
            break;
         }
      }
      if(check)
      {
         cout<<"YES"<<endl;
      }  
      else
      {
      cout<<"NO"<<endl;
      }
    }
}
