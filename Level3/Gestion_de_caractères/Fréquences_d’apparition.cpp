#include <iostream>
#include <string>
using namespace std;
string s;
int n;
int t;
int tab[26]={0};
int main()
{
    getline(cin,s);
    int cnt=0;
    for(int i=0;i<(int)s.length();++i)
    {
      if(s[i]>='a' && s[i]<='z')
      {
         tab[s[i]-'a']++;
         cnt++;
      }
      else if(s[i]>='A' && s[i]<='Z')
      {
         tab[s[i]-'A']++;
         cnt++;
      }
    }
    for(int i=0;i<26;++i)
    {
      cout<<double(tab[i])/cnt<<endl;
    }
}
