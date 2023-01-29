/**************************************************************
*  Assignment    : LAB 8                                      *
*  Name          : Ulas Demirtas                              *
*  Student ID    : 02326630                                   *
*  Date          :                                            *
*  Computer Hardware Store  Part 1- With dynamic Array []     *
**************************************************************/


#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct Part {      // Global structure
   string partNo;
   string partName;
   double price;
};

/** function that displays the menu and returns the choice
 *  @return the choice entered by the user
 */

int menu (){
   
}


/** function then gets info for a new part from the user and
 *  appends it to the array
 *  @param parts, a pointer to an array of Parts
 *  @param size, the size of the array of Parts
 */
void newpart (Part* parts, int &size){

    
}

/** function then asks the user for a part no. and
 *  finds the part in the array and returns its index
 *  @param parts, a pointer to the array of Parts
 *  @param size, the size of the array of Parts
 *  @return the position of the particular part in the array,
 *          returns -1 if the part is not found
 */
int find (Part* parts, int size){



/** function then prints the info relevant to a particular part
 *  @param parts, a pointer to the array of Parts
 *  @param pos, the index of the particular part
 */
void print (Part* parts, int pos) {
    


int main(){

   int n = 100,size = 0;
   Part* parts= new Part[10]; //a dynamicaly allocated array of structures
   
   int choice;

   do {
     choice = menu();

     switch (choice){
       case 1: newpart(parts, size); break;
       case 2: {int pos = find (parts, size);
                if (pos == -1) cout <<endl<<"Not Found!\n"<< endl;
                else print (parts, pos); break;}
       default: for (int i=0;i<size;i++){

        cout<<parts[size-1].partName<<endl;
    } break;
     }
    
   } while (choice != 3);

   //delete[] parts;
 
}