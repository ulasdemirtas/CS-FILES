#include<iostream>
#include<string>


using namespace std;

int main(){

int number;
cout<<"enter a number";
cin>>number;

switch(number) {

case 1:cout<<"number you choose is 1";break;
case 2:cout<<"number you choose is 2";
case 3:cout<<"number you choose is 3";break;
case 4:cout<<"number you choose is 4";break;
default:cout<<"Invalid";break;

}

return 0;
}
