#include <iostream>
using namespace std;
int main()
{
    int n,r;
    cin>>n>>r;
    int tab[n+1]={0};
    for(int i=1;i<=n;i++)
        cin>>tab[i];
    for(int i=1;i<=n;i++)
       tab[i]+=tab[i-1];
    for(int i=0;i<r;i++)
    {
        int d,f;
        cin>>d>>f;
        cout<<tab[f]-tab[d-1]<<endl;    }
}
