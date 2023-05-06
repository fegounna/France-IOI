#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    string s;
    int n;
    cin>>s;
    n=0;
    for(int i=0;i<s.length();++i)
    {
        n<<=1;
        if(s[i]=='1')
            n++;
    }
    cout<<n<<endl;
    return 0;
}
