#include <iostream>
using namespace std;
int afficher(int e,int tab[],int h[]){
    if (e==0)
        return 0;
    if(h[e-1]==0){
        int x=afficher(tab[e-1],tab,h);
        h[e-1]=1+x;
        return 1+x;
    }
    else
        return h[e-1];
}
int main(){
    int N;
    cin>>N;
    int tab[N];
    for (int i=0 ;i<N;i++){
        cin>>tab[i];
    }
    int h[N]={0};
    int mx=0;
    for(int i =1;i<=N;i++){
        int x = afficher(i,tab,h);
        if (x > mx)
            mx=x;
    }
    cout<<mx;
}
