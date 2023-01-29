#include<iostream>
#include<string>


using namespace std;

int main(){

char in1;

cout<<"input 2 characters:" <<endl;
cin>>in1;

if (in1 >= '0' && in1 <='9')

cout<<"input is a number"<<endl;

else
cout<<"input is not a number";

return 0;
}
