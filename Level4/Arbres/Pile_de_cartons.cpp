#include <iostream>
#include <vector>
using namespace std;
vector<int> tab[100001];
void func(vector<int> file){
    int s=file.size();
    for(int i=0;i<s;i++){
       cout<<"A "<<file[i]<<"\n";
       func(tab[file[i]]);
       cout<<"R "<<file[i]<<"\n";
    }
}
int main(){
    int N;
    cin>>N;
    for (int i=0;i<=N;i++){
        int R;
        cin>>R;
        for(int j=0;j<R;j++){
            int k;
            cin>>k;
            tab[i].push_back(k);
        }
    }
    func(tab[0]);
    
}
