#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n==0){
        cout<<0;
        return 0;
    }
    int tab[n];
    for(int i=0;i<n;i++)
        cin>>tab[i];
    int mx=0;
    for(int i=0;i<n;i++){                                                          
        int j=i+1;
        int s=tab[i];
        int m=0;
        while(j<n&&s+tab[j]>0){
            if(tab[j]<0)
                if(s>m)
                    m=s;
            s+=tab[j];
            j++;
        }
        if(s>m)
            m=s;
        if(m>mx)
            mx=m;
    }
    cout<<mx;
}
