#include<iostream>
#include<string>


using namespace std;



int main(){

int index=1;
int sum=0;
int n;

    cout<<"please enter an n :"<<endl;
    cin>>n;

    do{

    cin.clear();
    cin.ignore(1000,'\n');

    cout<<"please enter an n :"<<endl;
    cin>>n;
    }
    while (n<0||n>100 || cin.fail());


        do {
        sum=sum+index;
        index++;
        }
        while (index<=n);


cout<<"The sum is = "<<sum;

return 0;
}
