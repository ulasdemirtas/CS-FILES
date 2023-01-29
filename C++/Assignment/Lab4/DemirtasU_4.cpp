/**************************************************************
*  Assignment    : LAB 5                                      *
*  Name          : Ulas Demirtas                              *
*  Student ID    : 02326630                                   *
*  Date          : 21 October 2022                            *
*  swabing values with reference                              *
**************************************************************/

#include <iostream>


using namespace std;


void swap (int &x, int &y) {

    int z;  ///local variable

    z=x;   ///copy x to 3rd variable
    x=y;   ///copy y to x
    y=z;  /// copy x to y back from z

}



int main(){

     int x = 10;
     int y = 20;

     swap (x,y);

     cout << "x = " <<x<<endl;
     cout << "y = " <<y;

    return 0;
 }
