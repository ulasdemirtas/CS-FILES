/**************************************************************
*  Assignment    : LAB 3                                      *
*  Name          : Ulas Demirtas                              *
*  Student ID    : 02326630                                   *
*  Date          : 14 October 2022                            *
*  decimal to BInary converter                                *
**************************************************************/

#include <iostream>
#include <string>


using namespace std;

int main(){

 int input, remainder;
 string result ="";
/// Prints out the string result in reverse
cin>>input;


  while (input != 0) {
    remainder = input % 2;   ///Gets the remainder 0 or 1
    
    input = input/ 2; ///to check the end of the loop

    result+=to_string(remainder);  ///add the integer to a string

    
  }

  for(int i=result.length();i>=0;i--)  ///reverse loop

    cout<<result.substr(i,1); /// Prints out the string result in reverse

    
 }
