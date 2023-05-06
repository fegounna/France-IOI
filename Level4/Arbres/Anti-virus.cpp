#include<bits/stdc++.h>
using namespace std;
int tab[20000];
int h[20000]={0};
int n;
vector <pair <int,int>> path;
int size;
bool sortbysec(const pair<int,int> &a,const pair<int,int> &b){
    return a.second <= b.second;
}
int hauteur(int e){
    if (e==0)
        return 0;
    if(h[e-1]==0){
        int x=hauteur(tab[e-1]);
        h[e-1]=1+x;
        return 1+x;
    }
    else
        return h[e-1];
}
int main(){
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>tab[i];
    string s;
    cin>>s;
    size=s.size();
    for(int i=1;i<=n;i++){
       bool test=true;
       string s1=to_string(i);
       if(s1.size()!=size)
          test=false;
       else{
          for(int j=0;j<size;j++){
             if(s[j]!='?'&&s1[j]!=s[j]){
                test=false;
                break;
             }
          }
       }
       if(test){
          path.push_back( make_pair(i,hauteur(i)) );
       }
    }
    sort(path.begin(), path.end(), sortbysec);
    for(int i=0;i<path.size();i++)
        cout<<path[i].first<<" ";
}
