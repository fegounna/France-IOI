#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> vv;
int main()
{
    int nb;
    cin>>nb;
    for(int i=0; i<nb; i++)
    {
        int n;
        cin>>n;
        vv.push_back(n);
    }
    int q;
    cin>>q;
    sort(vv.begin(),vv.begin()+vv.size());
    for(int i=0; i<q; i++)
    {
        int n;
        cin>>n;
        for(int j=0; j<(int)(vv.size()); j++)
        {
            if(n<=vv[0])
            {
                cout<<vv[0]<<endl;
                break;
            }
            if(n>=vv[vv.size()-1])
            {
                cout<<vv[vv.size()-1]<<endl;
                break;
            }
            if(n<=vv[j])
            {
                if(abs(vv[j]-n)>abs(vv[j-1]-n))
                {
                    cout<<vv[j-1]<<endl;
                    break;
                }
                else if(abs(vv[j]-n)==abs(vv[j-1]-n))
                {
                    cout<<vv[j-1]<<endl;
                    break;
                }
                else
                {
                    cout<<vv[j]<<endl;
                    break;
                }
            }
        }
    }
}
