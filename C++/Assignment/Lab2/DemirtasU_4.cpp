/**************************************************************
*  Assignment    : LAB 2                                      *
*  Name          : Ulas Demirtas                              *
*  Student ID    : 02326630                                   *
*  Date          : 07 October 2022                            *
*  Number Guess game with Random                              *
**************************************************************/

#include <iostream>
#include <cstdlib>



using namespace std;

int main(){

    srand(time(0));

    int input,x,r_num;

    r_num= rand() % 100+1;



    cout <<"Emergency exit "<<r_num<<endl<<endl;

    do{


     cout <<"Please guess a number between 1 to 100 : ";

     cin >>input;

     if(input<1 || input >100)

        cout <<"Out of range, please try again"<<endl;
     if (input<r_num)
        cout <<"Too low - try again" <<endl;
     else if (input>r_num)
        cout <<"Too high - try again"<<endl;

    }


    while(input!=r_num);

    cout << "Congratulations! You find the number : "<<r_num;


    }

