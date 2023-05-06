#include <iostream>
#include <cctype>
#include <string>
 
using namespace std;
 
int main()
{
   string texte;
   getline(cin,texte);
   for (int iLettre = 0; iLettre < (int)texte.length(); iLettre = iLettre + 1)
   {
      texte[iLettre] = toupper(texte[iLettre]);
   }
   cout << texte << endl;
}
