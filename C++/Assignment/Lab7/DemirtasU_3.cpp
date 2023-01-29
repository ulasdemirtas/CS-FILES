/**************************************************************
*  Assignment    : LAB 7                                      *
*  Name          : Ulas Demirtas                              *
*  Student ID    : 02326630                                   *
*  Date          :                                            *
*  Create a dynamic array with function                       *
**************************************************************/

#include <iostream>


using namespace std;

int * getdata (int & size) {

    cout<<"size of the array ? :";
    cin>>size;      //get the size with pointer

    int *array = new int[size];  //create a dynamic array
 
    cout<<"Please enter "<<size<<" numbers :";
    
    for (int i=0;i<size;i++) 

        cin>>array[i];

return array;  //return the address of the array
    }


int main(){

int size;
  int * p = getdata (size);
  for (int i=0; i<size; i++)
    cout << p[i] << " ";
  delete[] p;
   
    return 0;
 }
