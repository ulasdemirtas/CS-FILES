/**************************************************************
*  Assignment    : LAB 5 -Q2                                  *
*  Name          : Ulas Demirtas                              *
*  Student ID    : 02326630                                   *
*  Date          : 04 November 2022                           *
*  Checks if the array is in acsending order                  *
**************************************************************/

#include <iostream>
#include <iomanip>

using namespace std;


int main(){


int i=0;
int LIST[10]={0};
bool IsOrder=true;

cout<<"Please enter 10 integers :";
for (int i=0;i<10;i++){

cin>>LIST[i];
}

int SUM=LIST[0];

for(int j=1;j<10&&IsOrder;j++) {

    if(LIST[j]>LIST[j-1]) {

        SUM+=LIST[j];
        
        IsOrder=true;
         }

    else {
        cout<<endl<<"Not in order";
         IsOrder=false;
    }
}

if(IsOrder) {

    cout<<"The Sum = "<<SUM;
  }

    return 0;
 }
