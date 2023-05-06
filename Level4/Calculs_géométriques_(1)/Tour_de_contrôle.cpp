#include <iostream>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;
    int n;
    cin>>n;
    int a,b;
    cin>>a>>b;
    int mn=(x-a)*(x-a)+(y-b)*(y-b);
    int x1=a,y1=b;
    for(int i=1;i<n;i++){
        cin>>a>>b;
        int d=(x-a)*(x-a)+(y-b)*(y-b);
        if(d<mn){
            mn=d;
            x1=a;
            y1=b;
        }
    }
    cout<<x1<<" "<<y1;
}
