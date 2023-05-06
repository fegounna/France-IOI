#include <iostream>
using namespace std;
int fonc(int tab[],int f)
{
    int t=0;
    for(int y=0;y<f;y++)
    {
        if(tab[y]>tab[t])
            t=y;
    }
    return t;
}
int main()
{
    int n , m;
    cin>>n>>m;
    int tab[n+1]={0};
    for(int t=0;t<n;t++)
        cin>>tab[t];
    for(int y=0;y<m;y++)
    {
        cout<<tab[fonc(tab,n)]<<" ";
        tab[fonc(tab,n)]=0;
    }
}
