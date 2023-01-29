#include <iostream>
#include <cstdio>

using namespace std;

const int country=4;
const int medal=3;

void FillArray(int table[country][medal]) {

    for(int i=0;i<country;i++){
    cout <<"Enter the medals for country "<<i<<" :";

    for (int j=0;j<medal;j++) {
     
        cin>> table[i][j];
        }
    }
}


int main() {

int sum=0;

int table [country] [medal];



//fill the array with function



FillArray(table);

   //Calculate and print the sum of rows
for(int i=0;i<country;i++){
    sum=0;
    for (int j=0;j<medal;j++) {
        sum+=table [i][j];
        cout<< table[i][j]<<" ";
    }
    cout<<"= " <<sum<<endl;
}


    return 0;

}
