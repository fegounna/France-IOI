#include <iostream>
#include <vector>
#include <string.h>
using namespace std;
void mini(int tab[], int t, int k)
{
    int l= 2*t+1;
    int r= 2*t+2;
    int s;
    if(l <=  k and tab[l] < tab[ t ] )
        s = l;
    else
        s = t;
    if(r <= k and tab[r] < tab[s] )
        s = r;
    if(s != t)
    {
        swap (tab[ t ], tab[ s ]);
        mini (tab, s,k);
    }
}
void fonc(int tab[],int t,int k)
{
    if(t!=0 && tab[(t-1)/2]>tab[t])
    {
    if(t!=0 && tab[(t-1)/2]>tab[t])
    {
        swap(tab[(t-1)/2],tab[t]);
        fonc(tab,(t-1)/2,k);
}
    }   
    else
        mini(tab,t,k);  }
        
int main()
{
    int n,p;
    cin>>n>>p;
    int s=1;
    int tab[p];
    for(int i=0; i<p; i++){
    tab[i]=1000000002;
    }
    for(int i=0; i<p; i++)
    {  
        if(n==p && i==p-1){
            cout<<-1;
            return 0;
        }
        cin>>tab[i];
        fonc(tab,i,p);
        while(tab[0]==s)
        {
            s++;
            tab[0]=1000000002;
            mini(tab,0,p);
        }
        cout<<s<<endl;
    }
}
