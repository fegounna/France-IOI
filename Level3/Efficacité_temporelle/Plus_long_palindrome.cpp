#include <bits/stdc++.h>
using namespace std;
inline int MIN(int a,int b){return (a>b)?b:a;}
string s;
int main()
{
    cin>>s;
    int maximum=1;
    for(int i=0;i<(int)(s.length());++i)
    {
        int minimum=MIN(s.length()-i-1,i);
        int j=0;
        if(maximum<2*minimum+1)
        {
            for(;j<=minimum;++j)
            {
                if(s[i-j]!=s[i+j])
                    break;
            }
        }
        if(maximum<2*j-1)
            maximum=2*j-1;
        if(s[i]==s[i+1])
        {
            int minimum=MIN(s.length()-i-2,i);
            int j=0;
            if(maximum<2*minimum+2)
            {
                for(;j<=minimum;++j)
                {
                    if(s[i-j]!=s[i+j+1])
                        break;
                }
            }
            if(maximum<2*j)
                maximum=2*j;
        }
    }
    cout<<maximum<<endl;
    return 0;
}
