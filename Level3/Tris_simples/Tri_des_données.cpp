#include <iostream>
#include <string.h>
using namespace std;
void mini(int tab[],int t,int k)
{
        int l=t*2;
        int r=t*2+1;
        int i;
        if(l<=k&&tab[l]<tab[t])
            i=l;
        else
           i=t;
        if (r<=k&&tab[r]<tab[i])
            i=r;
        if(i!=t)
        {
            swap(tab[t],tab[i]);
            mini(tab,i,k);
        }
}
int main()
{
    int n;
    cin>>n;
    int tab[n+1];
    for(int i=1;i<=n;i++)
        cin>>tab[i];
    for(int i=n/2;i>=1;i--)
       mini(tab,i,n);
    cout<<tab[1]<<' ';
    tab[1]=100000001;
    for(int i=2;i<=n;i++)
    {
       mini(tab,1,n);
       cout<<tab[1]<<' ';
       tab[1]=100000001;
    }
}
