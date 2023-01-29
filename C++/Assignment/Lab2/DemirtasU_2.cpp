/**************************************************************
*  Assignment    : LAB 2                                      *
*  Name          : Ulas Demirtas                              *
*  Student ID    : 02326630                                   *
*  Date          : 07 October 2022                            *
*  Switch menu for months                                     *
**************************************************************/

#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int n_iter;
    double sum=0;

    cout <<"Please enter a number :";

    cin >>n_iter;

    for (int i=0;i<=n_iter;i++)

        sum=sum+pow(i,2);


    cout << "The sum of the squares of the numbers between 0 and "<<n_iter<<" is "<<sum;

        }

