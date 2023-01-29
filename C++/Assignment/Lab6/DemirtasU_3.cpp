/**************************************************************
*  Assignment    : LAB 6                                      *
*  Name          : Ulas Demirtas                              *
*  Student ID    : 02326630                                   *
*  Date          :                                            *
*  Vector merge                                               *
**************************************************************/

#include <iostream>
#include <vector>


using namespace std;

void merge(vector <int>&first_half,vector <int>&second_half, vector <int> &list) {

    while (!first_half.empty() && !second_half.empty()) {

                if(first_half[0] < second_half[0]) {   ///compare the first elements 

                    list.push_back(first_half[0]);  // append to the list
                    first_half.erase(first_half.begin() + 0); //remove from main list
                    
                }
                else{
                         list.push_back(second_half[0]); 
                         second_half.erase(second_half.begin() + 0);
                         
                }
    }
   
  //Checks if the first array is empty, if not appends them to the list array
    if(!first_half.empty()) {   

            for (int i=0;i<first_half.size();i++) {
                list.push_back(first_half[i]);
           
                 }
    } 

      //Checks if the second array is empty, if not appends them to the list array

    if(!second_half.empty()) {

            for (int i=0;i<second_half.size();i++) {
                list.push_back(second_half[i]);
              }
    } 
}


void print(vector <int> list) {

    for (int i=0; i<list.size(); i++) {
        cout<<list[i]<<" ";
        
    }
    cout<<endl;
}



int main(){

vector <int> list; 

vector<int> first_half = {1,3,5,7,9,11,13,15,17,19};
vector<int> second_half ={2,4,6,8,10,12,14,16,18,20};

merge(first_half, second_half, list);
print(list);
    
  
    
    return 0;
 }
