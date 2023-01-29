/**************************************************************
*  Assignment    : LAB 1                                      *
*  Name          : Ulas Demirtas                              *
*  Student ID    : 02326630                                   *
*  Date          : 30 September 2022                          *
*  Reads a character and checks the type                      *
**************************************************************/


#include<iostream>
#include<string>


using namespace std;

int main(){

char Read_char;

cout<<" Pleae input a character :";
cin>>Read_char;

if (Read_char >='0' && Read_char<='9')   /// check if the character is equals and bigger than 0 and smaller and equal than 9 with "and" operator
    cout << "Digit"<<endl;

    else if(Read_char >='a' && Read_char <='z')
    cout << "Small Letter"<<endl;

    else if(Read_char >='A' && Read_char <='Z')
    cout << "Capital Letter"<<endl;

    else
     cout << "Funny"<<endl;

return 0;
}
