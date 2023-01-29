#include <iomanip>
#include <iostream>

using namespace std;

int main(){

    /// Part 1 --- Reading inputs ------

/*    int number;

    cout << "Please enter a value between 0 and 10 :";
    cin >> number;

    cout << "entered value is " << number;

    int length, width;
    cout << "Please enter the length and width of the rectangle: ";
    cin >> length >> width;

    int area = length * width;

    cout << "The area is :" << area;

    */

    /// Part 2 --- Formatting the output ---

    double result = 123456789.1284567;

///     cout << result << endl;
///       cout << fixed << result << endl;
///     out << scientific << result << endl;  ///scinetific notation
///       cout << fixed << setprecision(2) << result << endl;
///       cout << result << endl;

///       double result2 = result + 1;

///       cout << setprecision(3) << result2;

    cout << fixed << setprecision(2) << setw(15) << left << result << "End of line" <<endl;




    return 0;




}
