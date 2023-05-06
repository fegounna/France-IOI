#include <iostream>
using namespace std;
int i=0,n;
string s;
void func(string m){
    if(i>=n)
        return;
    else if(s[i]=='{'){
        cout<<"    "<<m<<'{'<<endl;
        i++;
        func("    "+m);
        func(m);
    }
    else if(s[i]=='}'){
        cout<<m<<'}'<<endl;
        i++;
    }
}
int main(){
    cin>>s;
    n=s.size();
    while(i<n){
        cout<<'{'<<endl;
        i++;
        func("");
    }
}
