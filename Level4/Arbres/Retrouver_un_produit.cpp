#include <iostream>
using namespace std;
void afficher(int e,int tab[]){
    if (tab[e-1]==0){
        cout<<e;
        return;
    }
    afficher(tab[e-1],tab);
    cout<<' '<<e;
}
int main(){
    int N;
    cin>>N;
    int tab[N];
    for (int i=0 ;i<N;i++){
        cin>>tab[i];
    }
    int R;
    cin>>R;
    for (int i=0 ;i<R;i++){
        int e;
        cin>>e;
        afficher(e,tab);
        cout<<endl;
        
    }
}
