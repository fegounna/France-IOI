#include <iostream>
using namespace std;
void a(int n)
{
    if(n>1)
        a(n/2);
    cout<<n%2;
}
int main()
{
    int nb;
    cin>>nb;
    int j=1;
    for(int i=1; i<=nb; i++)
    {
        for(int j=1;j<=nb;j++)
        {
            int g=i*j;
            a(g);
            cout<<'\t';
        }
        cout<<endl;
    }
}
