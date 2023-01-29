#include<iostream>
#include<string>


using namespace std;



int main(){

string input,target;
int counter=0;


cout << " Enter a sentence : ";
getline(cin,input);

cout << "enter a letter :";
cin>>target;

for(int i=0;i<input.lenght();i++) {

        if (target==input.substr(i,1))
        counter++;


}

cout << " There are" <<counter<<" "<<target;


return 0;
}
