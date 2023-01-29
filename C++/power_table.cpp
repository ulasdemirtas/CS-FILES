#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
   /// Power Table x^n :
   /// Example: x from 1 to 3. n from  1 to 3
   /// x = 1  1 1 1
   /// x = 2  2 4 8
   /// x = 3  3 9 27


   const int NMAX = 5;
   const double XMAX = 10;

   // Print table header
   for (int n = 1; n <= NMAX; n++){
      cout << setw(15) << n;
   }


   cout << endl;

   for (int n = 1; n <= NMAX; n++){
      cout << setw(15) << "x ";
   }
   cout << endl << endl;


   // Print table body
   for (double x = 1; x <= XMAX; x++){
      // Print table row
      cout << "x= " << x;
      for (int n = 1; n <= NMAX; n++){
         cout << setw(15) << pow(x, n);
      }
      cout << endl;
   }

   return 0;

}
