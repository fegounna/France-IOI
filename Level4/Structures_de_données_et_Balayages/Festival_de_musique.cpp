#include <iostream>
using namespace std;
int main(){
    int nbj,nbg;
    cin>>nbj>>nbg;
    int tab[nbj];
    for(int i=0;i<nbj;i++)
        cin>>tab[i];
    int fin=-1,mx=nbj,nb=nbg;
    int g[nbg+1]={0};
    for(int debut=0;debut<nbj;debut++){
        while(nb>0&&fin<nbj-1){
            if(g[tab[fin+1]]==0)
                nb--;
            fin++;
            g[tab[fin]]++;
        }
        if(nb==0)
           if(fin-debut+1<mx)
               mx=fin-debut+1;
        g[tab[debut]]--;
        if(g[tab[debut]]==0)
            nb++;
    }
    cout<<mx;
}
