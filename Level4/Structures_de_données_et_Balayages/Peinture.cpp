#include <iostream>
#include <stack>
using namespace std;
int n,r;
void fonc(int tab[])
{
            int j=n-1;
        int i=0;
    while(i<=j)
    {
        if(tab[j]+tab[i]==r)
        {
            cout<<"OUI";
            return;
        }
        else if(tab[j]+tab[i]>r)
            j--;
        else
            i++;
    }
    cout<<"NON";
}
int main()
{
    cin>>n>>r;
    int tab[n];
    for(int i=0; i<n; i++)
        cin>>tab[i];
    fonc(tab);
}
