#include <iostream>
#include<stdlib.h>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> vv;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int d;
        cin>>d;
        vv.push_back(d);
    }
    int k=100000001;
    sort(vv.begin(),vv.end());
    for(int i=0;i<n-1;i++)
    {
        int g=abs(vv[i]-vv[i+1]);
        if(g<k)
            k=g;
    }
    cout<<k;
}
