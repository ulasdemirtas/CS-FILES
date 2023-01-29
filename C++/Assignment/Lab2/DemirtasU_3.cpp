/**************************************************************
*  Assignment    : LAB 2                                      *
*  Name          : Ulas Demirtas                              *
*  Student ID    : 02326630                                   *
*  Date          : 07 October 2022                            *
*  Detects Consecutive duplicate numbers                      *
**************************************************************/

#include <iostream>


using namespace std;

int main(){

    int input,num_init;
 
    cout <<"Please enter a number :";

     cin >>num_init;

    do{

        num_init=input;
        cout <<"Please enter a number :";
        cin >>input;


    } while(input!=num_init);

    cout << "Dublication error:consequtive numbers";


    }

