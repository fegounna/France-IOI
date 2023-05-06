#include <bits/stdc++.h>
using namespace std;
int main(){
    int x1,y1,x2,y2,n;
    cin>>x1>>y1>>x2>>y2>>n;
    for(int i=0;i<n;i++){
        int m,n;
        cin>>m>>n;
        printf("%lf\n", ((x2-x1)*(m-x1)+(n-y1)*(y2-y1))/sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)));
    }
}
