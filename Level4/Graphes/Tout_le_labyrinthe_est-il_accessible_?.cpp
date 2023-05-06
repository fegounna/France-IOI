#include <iostream>
using namespace std;
bool tab[1000][1000];
int l,c;
void func(int i,int j){
      if(i>=0&&j>=0&&i<=l-1&&j<=c-1&&!tab[i][j]){
      tab[i][j]=true;
      func(i+1,j);
      func(i,j+1);
      func(i-1,j);
      func(i,j-1);
   }
}
int main(){
   cin>>l>>c;
   char x;
   for(int i=0;i<l;i++){
      for(int j=0;j<c;++j){
           cin>>x;
           if(x=='.')
               tab[i][j]=false;
           else
              tab[i][j]=true;
      }
   }
   func(1,0);
   int s=0;
   for(int i=0;i<l;i++){
      for(int j=0;j<c;++j){
           if(!tab[i][j])
              s++;
      }   }
   cout<<s;
}
