#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int N,L;
    cin>>L>>N;
    int tab[N];
    for(int i=0;i<N;i++)
        cin>>tab[i];
    int mx=0,fin=-1;
    sort(tab,tab+N);
    for(int i=0;i<N;i++){
        while(tab[fin+1]-tab[i]<=L&&fin+1<=N-1)
            fin++;
        if(mx<fin-i+1)
            mx=fin-i+1;
    }
    cout<<mx;
}
