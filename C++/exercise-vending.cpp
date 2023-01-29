#include <iostream>
#include <iomanip>

using namespace std;

int main() {

int amount,stamps85,stamps1;
const int PRICE=85;


cout <<"Please enter amount in $ :";
cin >>amount;

stamps85= (100*amount)/PRICE;
stamps1= (100*amount) % PRICE;
cout<<"You get :"<<stamps85<< "of 85c stamps"<<endl;
cout<<"You get :"<<stamps1<< "of 1 cent stamps"<<endl;



}
