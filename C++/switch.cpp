#include <iostream>
#include <iomanip>

using namespace std;

main(){

    /// The switch statement
    /// Multiple branching
    /// It compares a Boolean, integer or character against constants
    /// Each constant creates an alternative or a branch


   /* int n;
    int i;

    cout << "Please enter a single digit value between 1 and 5 :";
    cin >> n;

    switch(n){

        case 1: cout << "ONE"; break;
        case 2: cout << "TWO"; break;
        case 3: cout << "Three";break;
        case 4: cout << "Four";break;
        case 5: cout << "Five";break;
        default: cout << "Not a good input";

    }*/

    char answer;

    cout << "Please enter an answer: Yes or No: ";
    cin >> answer;

    switch(answer){

        case 'y':case 'Y': cout << "YES"; break;
        case 'n': case 'N': cout << "No"; break;
        default: cout << "Not a good input";
