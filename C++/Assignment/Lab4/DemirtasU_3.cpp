/**************************************************************
*  Assignment    : LAB 5                                     *
*  Name          : Ulas Demirtas                              *
*  Student ID    : 02326630                                   *
*  Date          : 21 October 2022                            *
*  display triangle                                            *
**************************************************************/

#include <iostream>


using namespace std;


void display_triangle (int num, char direction) {


switch (direction) {

case 'd':     for (int i=0;i <num;i++) {

                    cout<<endl;

                    for(int j=i;j<num;j++)

                        cout<<"*"; } break;

case 'i':     for (int i=1;i <=num;i++) {

                    cout<<endl;

                    for(int j=0;j<i;j++)

                        cout<<"*"; } break; 
default: cout<<"Invalid Entry";   break; 

}
}


int main(){

 int num;
 char direction;

        cout<<" Please enter a number :";
        cin>>num;
        cout<<" Please enter the direction (i / d) ";
        cin>>direction;
    
 display_triangle(num,direction);

    return 0;
 }
