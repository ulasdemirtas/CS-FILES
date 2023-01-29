/**************************************************************
*  Assignment    : LAB 1                                      *
*  Name          : Ulas Demirtas                              *
*  Student ID    : 02326630                                   *
*  Date          : 30 September 2022                          *
*  Gets 3 numbers and prints out the order of the numbers     *
**************************************************************/


#include<iostream>
#include<string>


using namespace std;

int main(){

int num_1,num_2,num_3;

cout<<"Please enter 3 numbers :";
cin>>num_1>>num_2>>num_3;

    if (num_1 < num_2 && num_2 < num_3)

        cout<< "Increasing order";

    else if (num_1 >num_2 && num_2 > num_3)
        cout<< "Decreasing order";

    else
        cout<< "Random order ";

return 0;
}
