#include <iostream>
#include <iomanip>

using namespace std;

main(){

    int input;

    cout << "Enter an integer value: " << endl;

    cin >> input;
    cout << "You have entered: " << input << " Status of cin " << cin.fail() << endl;

    cin.clear();
    cin.ignore(10000,'\n');

    cout << "The cin status is now : " << cin.fail() << endl;

    cin >> input;
    cout << "You have entered: " << input << " Status of cin " << cin.fail() << endl;

}

