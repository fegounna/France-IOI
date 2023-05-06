#include <iostream>
#include <string>
using namespace std;
string fonc(int x)
{
    if(x==0)
        return "0";
    else
    {
        string y=fonc(x-1);
        return ("("+y+" + "+y+")");
    }
}
int main()
{
        int y;
        cin>>y;
        cout<<"0 = "<<fonc(y);
}
