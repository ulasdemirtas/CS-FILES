/**************************************************************
*  Assignment    : LAB 5                                      *
*  Name          : Ulas Demirtas                              *
*  Student ID    : 02326630                                   *
*  Date          : 21 October 2022                            *
*  sum of divisors                                            *
**************************************************************/

#include <iostream>

using namespace std;

void Divisors(int input, int &sum) {

    for(int i=1;i<=input;i++)
        if(input%i==0) 
            sum+=i;

}


int main(){

 int input,sum=0;

        cout<<" Please enter a number ";
        cin>>input;

    Divisors(input,sum);
    cout<< "The total of the divisors is " << sum;

    return 0;
 }
