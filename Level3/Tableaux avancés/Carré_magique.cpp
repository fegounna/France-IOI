#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int tab[n][n];
    bool test[401];
    memset(test,false,sizeof test);
    int s=0,u=0,o=0,y=0;
//remplissage
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            {
                cin>>tab[i][j];
                test[tab[i][j]]=true;
            }
    
//test
    for(int i=1;i<=n*n;i++)
    {
        if(!test[i])
        {
            cout<<"no"<<endl;
            return 0;
        }
    }
    
//diag 1
    for(int i=0; i<n; i++)
        y+=tab[i][n-1-i];
//diag 2
    for(int i=0; i<n; i++)
        o+=tab[i][i];
    if(o!=y)
    {
        cout<<"no"<<endl;
        return 0;
    }
//lignes
    for(int i=0; i<n; i++)
    {
        u=0;
        for(int j=0; j<n; j++)
        {
            u+=tab[i][j];
        }
        if(u!=y)
        {
            cout<<"no";
            return 0;
        }
    }
//colonnes
    for(int i=0; i<n; i++)
    {
        s=0;
        for(int j=0; j<n; j++)
        {
            s+=tab[j][i];
        }
        if(s!=y)
        {
            cout<<"no"<<endl;
            return 0;
        }
    }
    cout<<"yes"<<endl;
}
