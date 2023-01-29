/**************************************************************
*  Assignment    : LAB 7                                      *
*  Name          : Ulas Demirtas                              *
*  Student ID    : 02326630                                   *
*  Date          :                                            *
*  Sort pointers                                              *
**************************************************************/

#include <iostream>


using namespace std;

void sort(double *p, double *q) {

double temp=*p;

    if (*q<=*p) {

         *p=*q;
         *q=temp;
    }
}

int main(){

double x=5;
double y=22;

  sort(&x,&y);
    
 cout<<"x = "<<x<<"\ny = "<<y;  
 
   
    return 0;
 }
