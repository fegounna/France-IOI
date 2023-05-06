#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector <int>vv;
    int n;
    int g=0;
    cin>>n;
    if(n==0)
    {
       cout<<0;
    }
    else
    {
       while (n>0)
          {
           vv.push_back(n%2);
           n=n/2;
           g++;
          }
    }
    for(int h=g;h>0;h--)
        cout<<vv[h-1];
}
