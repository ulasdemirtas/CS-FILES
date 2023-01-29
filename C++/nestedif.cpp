#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

int main(){

       int grade;
       char letter;

       cout << "Please provide the numeric grade: ";
       cin >> grade;

       if(grade >= 50)
        if(grade >= 65)
            if(grade >= 80)
                letter = 'A';
            else
                letter = 'B';
        else
            letter = 'C';
       else
        letter = 'F';
  /*
        if(grade >= 80)
            letter = 'A';
        else
            if()
            else
*/
        cout << "Your grade letter is :" << letter << endl;
