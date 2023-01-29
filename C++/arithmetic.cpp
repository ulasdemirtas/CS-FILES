#include <iostream>

using namespace std;

int main(){

/*

    /// Part 1: Arithmetic Ops +, -, *, /, % , ()

    int a = 5;
    int b =2;

    ///double b = 2;


    cout << "result: " << a + b / 2 << endl; /// 6
    cout << "result: " << (a + b) / 2 << endl; /// 3
    cout << "result: " << a / 2 + 3 << endl; /// 5
    cout << "result: " << a / b / 3 << endl; /// 0


    /// Rule: If both arguments are int, the result is an int. If one argument is a double, the result is a double
*/
    /// Part 2: integer division and assignments

///    int div = 7/3;
/*
int c = 3;

///       double div = 7/3;
///        double div = 7.0/3;
///        int div = 7.0/3;

///    double div = 7/(double)c; /// Casting



///    cout << "result : " << div << endl;
///    cout << "result 2: " << 7/c << endl;


    int rem = 13%4;
    cout << "result: " << rem;

*/

    /// Part 3: Type conversion

       double price = 2.5;
///       int sum = price;         /// Truncate
    int sum = price + 0.5;   /// Round to the nearest

    cout << "price is :" << sum << endl;

    return 0;


}
