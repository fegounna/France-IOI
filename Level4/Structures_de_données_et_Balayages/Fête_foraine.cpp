#include <iostream>
#include <stack>
using namespace std;
int n,r;
int main()
{
    cin>>n;
    int tab[n];
    for(int i=0; i<n; i++)
        cin>>tab[i];
    cin>>r;
    int tib[r];
    for(int j=0; j<r; j++)
        cin>>tib[j];
    int h=0;
    for(int i=0; i<n; i++)
    {
    if(h+1<r)
    {
        if(h==r-1)
            cout<<tib[h]<<' ';
        else
        {
            if(tab[i]!=tib[h])
            {
                while(h+1<r&&tab[i]>tib[h])
                {
                    h++;
                    if(tab[i]<tib[h])
                    {
                        h--;
                        break;
                    }
                }
            }
            cout<<tib[h]<<' ';
        }
     }
     else
        cout<<tib[h]<<' ';
    }
}
