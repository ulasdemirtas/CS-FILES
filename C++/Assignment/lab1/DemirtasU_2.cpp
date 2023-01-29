/**************************************************************
*  Assignment    : LAB 1                                      *
*  Name          : Ulas Demirtas                              *
*  Student ID    : 02326630                                   *
*  Date          : 30 September 2022                          *
*  Gets 3 numbers and prints out the largest number           *
**************************************************************/

/*  FLOW CHART:

Gets 3 integers from user
First checks if the first number is bigger than second and third numbers
If True assign to the variable num_largest and print
If False, check if second is bigger than third number
If True assign to a variable num_largest and print
If False assign third number to the variable num_largest and print


*/

#include<iostream>
#include<string>


using namespace std;

int main(){

int num_1,num_2,num_3,num_largest;

cout<<"Please enter 3 numbers :";
cin>>num_1>>num_2>>num_3;

    if (num_1 > num_2 && num_1 > num_3) /// if number1 is bigger than number2 and number 3

        num_largest =num_1;             ///if the statement is True, assign number 1 as largest and print

        if(num_2>num_3)
        num_largest=num_2;

            else
            num_largest=num_3;

cout<<"The largest number is :" <<num_largest;

return 0;
}
