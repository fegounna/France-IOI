#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
bool sortbyfirst(const pair<int,int> &a,const pair<int,int> &b){
    return a.first <= b.first;
}
int main(){
    int u,nb;
    cin>>u>>nb;
    vector<pair<int,int>> tab;
    for(int i=0;i<nb;i++){
        int s1,s2;
        cin>>s1>>s2;
        if(s1<s2)
            tab.push_back(make_pair(s1,s2));
        else{
            tab.push_back(make_pair(s1,u));
            tab.push_back(make_pair(0,s2));
        }
    }
    sort(tab.begin(),tab.end(),sortbyfirst);
    int debut=tab[0].first,fin=tab[0].second,mxglobal=tab[0].first;
    for(int i=1;i<tab.size();i++){
        if(tab[i].first>fin&&tab[i].first!=debut){
            if(tab[i].first-fin>mxglobal){
                mxglobal=tab[i].first-fin;
            }
            debut=tab[i].first;
        }
        fin=max(tab[i].second,fin);
    }
    if(u-fin+tab[0].first>mxglobal)
        mxglobal=u-fin+tab[0].first;
    cout<<mxglobal;
}
