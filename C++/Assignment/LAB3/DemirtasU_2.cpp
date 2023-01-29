/**************************************************************
*  Assignment    : LAB 3                                      *
*  Name          : Ulas Demirtas                              *
*  Student ID    : 02326630                                   *
*  Date          : 14 October 2022                            *
*  Number of X in a string                                   *
**************************************************************/

#include <iostream>
#include <string>
#include <iomanip>


using namespace std;

int main(){


    int rand_num;
    
    srand (time(NULL));  ///set the random seed to time

    rand_num= rand () %100 +1;   ///generate a uniform random number between 1 to 100

    cout<<"the random number is "<<rand_num<<endl;


   for(int i=1;i<=rand_num;i++) {

        cout << setw(4)<<left<<i;
        if (i%8==0)
         cout<<endl;
        }


    
 }
