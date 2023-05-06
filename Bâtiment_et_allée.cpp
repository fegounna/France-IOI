#include <iostream>
#include <string>
 
using namespace std;
 
int main()
{
   string nomAuteur;
   cin >> nomAuteur;
   int ageFils;
   cin >> ageFils;
   int batiment = nomAuteur[0] - 'A' + 1;
   char allee = ageFils - 1 + 'A';
   cout << batiment << allee << endl;
}
