#include <iostream>
#include <string>
 
using namespace std;
 
int main()
{
   for (int e = 0; e < 2; e = e+ 1)
   {
      string n;
      cin >> n;
      int no = 0;
      for (int i = 0; i < (int)n.length(); i = i + 1)
      {
         no = no + n[i] - 'A';
      }
      while (no > 9)
      {
         int sum = 0;
         while (no > 0)
         {
            sum = sum + no % 10;
            no = no / 10;
         }
         no = sum;
      }
      cout << no << " ";
   }
}
