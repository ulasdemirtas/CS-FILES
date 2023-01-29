/**************************************************************
*  Assignment    : LAB 3                                      *
*  Name          : Ulas Demirtas                              *
*  Student ID    : 02326630                                   *
*  Date          : 14 October 2022                            *
*  Number of X in a string                                   *
**************************************************************/

#include <iostream>
#include <string>


using namespace std;

int main(){

    string input,letter;
    int counter=0;
    

    cout << "Please enter a sentence: " <<endl;
    getline(cin,input);

    for(int i=0;i<=input.length()-1;i++) {

        letter = input.substr(i,1);


            if (letter =="x") 
                counter++;
        }

    cout<<" There are " <<counter <<" x in your sentence"; 


    
 }
