#include <iostream>
using namespace std;
int main()
{
    int n,d;
    cin>>n>>d;
    int tab[n];
    for(int i=0;i<n;i++)
        cin>>tab[i];
    int max_global=0,c=0,mx=0;
    for(int i=0;i<n;i++){
        if(c+tab[i]<=d){
            c+=tab[i];
            mx++;
        }
        else{
           if(tab[i]>d){
               c=0;
               mx=0;
           }
           else{
               while(c+tab[i]>d){
                   c -= tab[i-mx];
                   mx--;
               }
               mx++;
               c+=tab[i];
           }
        }
        if(mx>max_global)
            max_global=mx;
    }
    cout<<max_global;
}
