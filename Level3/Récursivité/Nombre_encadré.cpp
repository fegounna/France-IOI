#include <iostream>
using namespace std;
void fonc(int g)
{
while (g--)
cout<<"[";
}
void fon(int f)
{
while (f--)
    cout<<"]";
}
int main()
{
    int a,b;
    cin>>a>>b;
        fonc(b);
        cout<<a;
        fon(b);
}
