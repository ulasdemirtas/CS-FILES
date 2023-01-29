#include <iostream>
#include <cstdio>

using namespace std;


void deposit (double &bal,int amnt){

    bal=bal+amnt;

}

void deposit2 (double *bal,int amnt){

    *bal=*bal+amnt;

}

int main() {

double balance=1000;
deposit (balance,25);
deposit2(&balance,35);

cout<<"New balance is "<<balance;

    return 0;

}
