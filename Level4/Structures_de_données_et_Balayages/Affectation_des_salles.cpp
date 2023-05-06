#include<bits/stdc++.h>
using namespace std;
struct Representation {
   int num, debut, fin;
   bool operator<(Representation const & autre) {
      return debut < autre.debut;
   }
};
Representation tab[100000];
int main(){
    int s,r;
    cin>>s>>r;
    int res[r];
    for(int i=0;i<r;i++){
        int s1,s2;
        cin>>s1>>s2;
        tab[i]={i,s1,s2};
    }
    int v[s]={-1};
    sort(tab,tab+r);
    for(int i=0;i<r;i++){
        bool test=true;
        int j=0;
        for(j=0;j<s;j++){
            if(tab[i].debut>=v[j]){
                res[tab[i].num]=j+1;
                test=false;
                v[j]=tab[i].fin;
                break;
            }
        }
        if(test){
            cout<<"NON";
            return 0;
        }
    }
    cout<<"OUI"<<endl;
    for(int i=0;i<r;i++){
        cout<<res[i]<<" ";
    }
}
