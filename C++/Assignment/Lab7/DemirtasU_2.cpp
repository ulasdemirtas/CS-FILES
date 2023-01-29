/**************************************************************
*  Assignment    : LAB 7                                      *
*  Name          : Ulas Demirtas                              *
*  Student ID    : 02326630                                   *
*  Date          :                                            *
*  Find max in an array with pointers                         *
**************************************************************/

#include <iostream>


using namespace std;

double* maximum (double* ptr, int size){

   if (size == 0) {
 
        return NULL;
    }
   
    double max_num = ptr[0];   // move the value of array to a local var max_num
    double* MaxReturn=&max_num;  // move the address of local var to the pointer 

    for (int i=1;i<size;i++) {

        if (ptr[i]>=max_num)  //check the next value in array is bigger

            max_num=ptr[i];  // if true, assign the value to the max_num 
    }



return MaxReturn;   //return the address of the max that points to max_num 
}

int main(){

double data[]= {1, -4, 35, 9, 96 };
double* max = maximum(data, 5);

if (max==NULL) {
    cout<<"List is empty";
} 
    else {
        cout << *max << endl; 
        for (int i=0; i<5; i++)
        cout << data[i] << " ";   
    }

   
    return 0;
 }
