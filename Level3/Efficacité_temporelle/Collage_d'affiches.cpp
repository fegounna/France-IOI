#include <iostream>
#include <vector>
using namespace std;
vector<int> tab;
void fonc(int s,int i)
{
    if(tab.size()==0)
    {
        tab.push_back(s);
        return;
    }
    if(s<tab.back())
    {
        tab.push_back(s);
        return;
    }
    if(s>=tab[i])
    {
        tab[i]=s;
        tab.erase(tab.begin()+(i+1),tab.end());
        return;
    }
    fonc(s,i+1);
}
int main()
{
    int nb;
    cin>>nb;
    for(int i=0;i<nb;i++)
    {
        char d;
        cin>>d;
        if (d=='C')
        {
            int g;
            cin>>g;
            fonc(g,0);
        }
        else if(d=='Q')
            cout<<tab.size()<<endl;
    }
}
