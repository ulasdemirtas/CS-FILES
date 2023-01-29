

#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    /// 41, 18467, 6334
    /// rand() : seed, r1, r2, r3, r4,

    int r;
    double x;

    /// cout << "The current time is: " << time(0);


    srand(time(0));

    /// Random value in [0,1]

 /*   for(int i=1; i<=10; i++){
            r = rand();
            x = r*1.0/RAND_MAX;

            cout << x << endl;
   }*/

    /// Range of random sequence

    /// Range is between 0 & RAND_MAX

    /// cout << RAND_MAX << endl;

    /// Generate random variables between a and b:
    /// 1. Generate r between 0 and RAND_MAX
    /// 2. Generate x between 0 and 1. x = r*1.0/RAND_MAX
    /// 3. Generate y = a + (b-a)*x
    ///    So if x = 0, y = a + (b-a) * 0 = a
    ///    if x = 1, y = a + (b-a) * 1 = a + b - a = b

    /// Example generate random values between a = -1 and b = 1

    double y;

    for(int i=1; i<=10; i++){
            r = rand();
            x = r*1.0/RAND_MAX;
            y = -1 + 2 * x;
            cout << y << endl;

   }

  ///Normalization

  double x= 1.0* r/rand_max;  /// multiplying with 1.0 turns rand_max from integer to double


   return 0;

}
