#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int nb;
    cin>>nb;
    int l,c;
    cin>>l>>c;
    char tab[l][c];
    for(int i=0; i<l; i++)
        for(int j=0; j<c; j++)
            cin>>tab[i][j];
    for(int k=0; k<nb; k++)
    {
        for(int i=0; i<l; i++)
        {
            for(int j=0; j<c; j++)
            {
                if(tab[i][j]!='.'&&tab[i][j]!=' ')
                {
                    if(i==0||i==l-1||j==0||j==c-1)
                        tab[i][j]='*';
                    else if(tab[i+1][j]=='.' || tab[i-1][j]=='.' || tab[i][j+1]=='.' || tab[i][j-1]=='.')
                        tab[i][j]='*';
                }
            }
        }
        for(int g=0; g<l; g++)
        {
            for(int q=0; q<c; q++)
            {
                if(tab[g][q]=='*')
                    tab[g][q]='.';
            }
        }
    }
    for(int i=0; i<l; i++)
    {
        for(int j=0; j<c; j++)
            cout<<tab[i][j];
        cout<<endl;
    }
}
