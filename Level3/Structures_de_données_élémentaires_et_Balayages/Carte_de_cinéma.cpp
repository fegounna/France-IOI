#include <bits/stdc++.h>
using namespace std;
pair<int,int> tab[N];
int main()
{
    int n,a;
    cin>>n;
    for(int i=0;i<n;++i)
    {
        cin>>a;
        tab[i].first=a;
        tab[i].second=i;
    }
    sort(tab,tab+n);
    int pos=N;
    int val=n+1;
    for(int i=0;i<n-1;++i)
    {
        if(tab[i].first==tab[i+1].first)
        {
            if(tab[i+1].second<pos)
            {
                pos=tab[i+1].second;
                val=tab[i+1].first;
            }
        }
    }
    if(pos==N)
        cout<<-1<<endl;
    else
        cout<<val<<endl;
    return 0;
}
