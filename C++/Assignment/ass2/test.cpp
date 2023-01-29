/**************************************************************
*  Assignment    : 2                                          *
*  Name          : Ulas Demirtas                              *
*  Student ID    : 02326630                                   *
*  Date          : 25 October 2022                            *
*  Calculate & Print out a calander  - Working Application    *
**************************************************************/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(){file:///home/ulas/Documents/C++/Assignment/Lab4/DemirtasU_1.cpp

int year,month,day,mouth_key;
bool is_leap;

while (year!=1) {
cout <<"Please enter a year :";
cin>>year;


if ( (year % 4 == 0 && year % 100 != 0)|| year % 400 == 0)  
        cout<<"leap"<<endl;   ///Test Cases  for  Leap years 1980,1988, 1992, and 1996
        else 
          cout<<"NOT leap NOT"<<endl;     ///Test Cases  for NOT Leap years 1700, 1800, 1900

}
         

return 0;
}


