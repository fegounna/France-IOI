#include <iostream>
#include<string>
using namespace std;
int n,l;
void func(int i,int k,string s){
    if(k==0){
        cout<<s<<endl;
    }
    else if(n-i+1<k){
       return;
    }
    else{
    for(int j=i;j<=n;j++){
        func(j+1,k-1,s+to_string(j)+" ");
    }
    }
}
int main(){
    cin>>n>>l;
    func(1,l,"");
}
