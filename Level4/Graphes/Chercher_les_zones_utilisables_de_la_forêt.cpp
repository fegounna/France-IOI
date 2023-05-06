#include <iostream>
using namespace std;
int n,a;
bool tab[1001][1001];
bool sommet[1001];
int func(int x){
    if(sommet[x])
       return 0;
    sommet[x]=true;
    int s=1;
    for(int j=1;j<=n;++j){
        if(tab[x][j]&&!sommet[j]){
            s= s+ func(j);
        }
    }
    return s;
}
int main(){
    cin>>n>>a;
    for(int l=0;l<a;++l){
        int i,j,k;
        cin>>i>>j>>k;
        tab[i][j]=true;
        tab[j][i]=true;
    }
    int mx=0,o=0;
    for(int i=1;i<=n;i++){
        if(!sommet[i]){
            int q=func(i);
            o++;
            if(q>mx)
                mx=q;
        }
    }
    cout<<o<<" "<<mx;
}
