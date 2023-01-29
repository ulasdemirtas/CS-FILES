/**************************************************************
*  Assignment    : LAB 2                                      *
*  Name          : Ulas Demirtas                              *
*  Student ID    : 02326630                                   *
*  Date          : 07 October 2022                            *
*  Switch menu for months                                     *
**************************************************************/

#include <iostream>
#include <iomanip>

using namespace std;

main(){

    char answer;

    cout << "Please enter a month name: ";
    cin >> answer;

    switch(answer){

        case 'j':case 'J': cout << "Is it June  please hit 'y' :";
                            cin>>answer;
                            if (answer=='y' || 'Y')
                            cout << "It is 31 days";
                            else
                            cout << "It is 30 days";break;


        case 'a': case 'A': cout << "Is it August?  please hit 'y'' :";
                            cin>>answer;
                            if (answer=='y' || 'Y')
                            cout << "It is 31 days";
                            else
                            cout << "It is 30 days";break;

        case 'f': case 'F': cout << "It is 28 days";break;
        case 'm': case 'M': cout << "It is 31 days";break;
        case 's': case 'S': case 'n':case 'N' :cout << "It is 30 days";break;
         case 'd': case 'D': case 'o':case 'O' :cout << "It is 31 days";break;

        default: cout << "Not a good input";
        }
        }
