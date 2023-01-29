#include<iostream>
#include<string>
#include <cstdlib>
#include <ctime>


using namespace std;

int last;

void Gauss_Sum(int &res,int last)
{
   
    for (int i=1; i<=last;i++) {

        res=res+i;



    }


cout <<"The address of res: "<<&res;

cout <<"The address of result : "<<&result;
    }



int main(){

int result=0,last;

cout<<"Enter a value n >0 :";
cin>>last;


Gauss_Sum(&result,last);
cout <<"The result: "<<result;



return 0;
}
