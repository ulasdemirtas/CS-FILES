/**************************************************************
*  Assignment    : LAB 5                                      *
*  Name          : Ulas Demirtas                              *
*  Student ID    : 02326630                                   *
*  Date          : 21 October 2022                            *
*  Roman to decimal conversion                                *
**************************************************************/

#include <iostream>


using namespace std;


int check_value(char num) {     ///This function gets a char and returns a related value

int value;

    switch (num) {

        case 'I': return value=1; break;
        case 'V': return value=5; break;
        case 'X': return value=10; break;
        case 'L': return value=50; break;
        case 'C': return value=100; break;
        case 'D': return value=500; break;
        case 'M': return value=1000; break;
        default: return 0;
    }
}

int main(){

string Rnum = "CMLXXVIII";  /// initial test value

int char1,char2,total=0;


     for (int i=0;i<Rnum.length();i++) {
        
        char1= check_value(Rnum[i]);    ///call the function with string index to get a decimal value
        char2= check_value(Rnum[i+1]);  ///call with incrementing the index of string to get a decimal value

            if (char1>= char2) {   ///check if the  first value is bigger and equal to next char value
            
            total+=char1;      ///add the value to total 
             }
            else {

            int difference = char2- char1;  ///if it is smaller than get the difference and add total
            total+=difference;
            i=i+1;  ///skip the index to get the next char
            }

        }

    cout<<" The decimal value is my birth year : " <<total;
    return 0;
 }

