/**************************************************************
*  Assignment    : 1                                          *
*  Name          : Ulas Demirtas                              *
*  Student ID    : 02326630                                   *
*  Date          : 21 September 2022                          *
*  Calculates and prints the roots of the given numbers       *
**************************************************************/

#include <iostream>
#include <cmath>


using namespace std;

int main(){


int number_a,number_b,number_c;


cout<<"Please enter 3 integers for a,b,c in quadratic equation: ";

cin>>number_a>>number_b>>number_c;

cout<<""<<endl<<endl;



double result_x1 = (-number_b+sqrt(pow(number_b,2)-4*number_a*number_c)) / (2*number_a); //  calculates the roots of Quadratic Equation -positive
double result_x2 = (-number_b-sqrt(pow(number_b,2)-4*number_a*number_c)) / (2*number_a);  // calculates the roots of Quadratic Equation -negative

cout <<"The roots are: "<<result_x1<<" and "<<result_x2<<endl;


return 0;
}


