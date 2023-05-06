#include <iostream>
using namespace std;
int l,c;
char tab[20][20];
bool test[20][20]={false};
int func(int i,int j){
   if(i==l-1&&j==c-2){
      return 1;
   }
   else if(i==-1||j==-1||i==l||j==c-1|| tab[i][j]=='#' || test[i][j]){
        return 0;
   }
   else{
      test[i][j]=true;
      int x = func(i,j+1)+func(i+1,j)+func(i-1,j)+func(i,j-1);
      test[i][j]=false;
      return x;
   }
}
int main(){
   cin>>l>>c;
   for(int i=0;i<l;i++)
      for(int j=0;j<c;j++)
         cin>>tab[i][j];
   cout<<func(1,0);
}
