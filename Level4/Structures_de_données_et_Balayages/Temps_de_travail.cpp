#include<bits/stdc++.h>
using namespace std;
bool sortbyfirst(const pair<int,int> &a,const pair<int,int> &b){
    return a.first <= b.first;
}
int main(){
    int nb;
    cin>>nb;
    vector <pair <int,int>> tab;
    for(int i=0;i<nb;i++){
        int s1,s2;
        cin>>s1>>s2;
        tab.push_back(make_pair(s1,s2));
    }
    sort(tab.begin(),tab.end(),sortbyfirst);
    int s=0;
    int debut=-1,fin=-1;
    for(int i=0;i<nb;i++){
        if(tab[i].first<=fin&&tab[i].second<=fin);
        else if(tab[i].first<=fin&&tab[i].second>fin){
            fin=tab[i].second;
        }
        else{
            s+=fin-debut;
            debut=tab[i].first;
            fin=tab[i].second;
        }
    }
    cout<<s+fin-debut;
}
