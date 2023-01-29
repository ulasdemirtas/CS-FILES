/**************************************************************
*  Assignment    : LAB 5 -Q2                                  *
*  Name          : Ulas Demirtas                              *
*  Student ID    : 02326630                                   *
*  Date          : 04 November 2022                           *
*  Avarage of values in double array                          *
**************************************************************/

#include <iostream>
#include <iomanip>

using namespace std;


int main(){

srand (time(NULL));

int input,random;
double Rdouble,LastNum,SUM=0,Average=0;

cout<<"Please enter the number of the elements :";
cin>>input;

double NUMBERS[input] = {0};


// Initiliaze the array with random double numbers
    for(int i=0;i<input;i++) {

    random=rand();  // generates a random integer
    Rdouble=random*1.0/RAND_MAX;  // Transforms that integer to float
    LastNum=1 + 99 * Rdouble; // Linear transform between 1 to 100
    NUMBERS[i] = LastNum;
    SUM+=NUMBERS[i];

    }
    
// Calculates the avarage of these numbers
    int SIZE= sizeof(NUMBERS) /sizeof (double);
    Average=SUM/SIZE;
    cout<< fixed<< setprecision(2)<< "AVERAGE = "<<Average<<endl;

for(int i=0;i<SIZE;i++)

    if (NUMBERS[i] > Average)

        cout<< NUMBERS[i]<< "   -- higher than average"<<endl;

        else
        cout<< NUMBERS[i]<< "   -- lower than average"<<endl;

    return 0;
 }
