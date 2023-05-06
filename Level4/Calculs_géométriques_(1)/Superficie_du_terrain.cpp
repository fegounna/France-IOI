#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int x1,y1,x2,y2,n;
    cin>>x1>>y1>>x2>>y2>>n;
    int s=(x2-x1)*(y2-y1);
    for(int i=0;i<n;i++){
        int a1,b1,a2,b2;
        cin>>a1>>b1>>a2>>b2;
        int m1=max(x1,a1),n1=min(x2,a2);
        int m2=max(y1,b1),n2=min(y2,b2);
        if(m1<n1&&m2<n2){
            s -= (n1-m1)*(n2-m2);
        }
    }
    cout<<s;
}
