/**************************************************************
*  Assignment    : LAB 5                                      *
*  Name          : Ulas Demirtas                              *
*  Student ID    : 02326630                                   *
*  Date          : 04 November 2022                           *
*  Print Array in reverse order                               *
**************************************************************/

#include <iostream>


using namespace std;


int main(){

    string days[] ={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"}; 
    
    int size= sizeof(days) /sizeof (string);
    
    for (int i=size-1;i>=0;i--) {

        cout<<days[i]<<"  ";

    }
    return 0;
 }
