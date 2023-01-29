#include<iostream>
#include<string>
#include <cstdlib>
#include <ctime>


using namespace std;


int Gauss_Sum(int last)
{
last=(last*(last+1))/2;
return last;

}

void Print_line(int len) {

    for (int i=1;i<len;i++)

    cout<<"*";




}

int main(){

int n,result;

cout<<"Enter a value n >0 :";
cin>>n;



result=Gauss_Sum(n);
cout <<"The result: "<<result;

Print_line(result);


return 0;
}
